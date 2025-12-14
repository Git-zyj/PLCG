/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184043
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_10 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((signed char) var_3))), (18446744073709551607ULL)));
                    arr_11 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_5 [i_2] [(signed char)1] [i_0 + 1])), (((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned char) var_14))))) ? (28ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_0))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        for (unsigned char i_4 = 1; i_4 < 15; i_4 += 3) 
        {
            {
                var_15 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (min((((/* implicit */long long int) max((arr_3 [i_4 - 1] [i_4] [i_3]), (((/* implicit */unsigned short) (signed char)-4))))), (min((var_2), (((/* implicit */long long int) var_11)))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [(signed char)2] [i_3] [i_4] [i_4])) ? (var_8) : (((/* implicit */int) var_1))))), (var_2)))));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 15; i_5 += 3) 
                {
                    for (signed char i_6 = 2; i_6 < 13; i_6 += 4) 
                    {
                        {
                            arr_22 [i_5] = ((/* implicit */signed char) min((30ULL), (((/* implicit */unsigned long long int) 437332231))));
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_6] [i_5 + 1] [i_6]))))))))));
                        }
                    } 
                } 
                arr_23 [i_3] [i_3] [i_3] = ((max((((/* implicit */unsigned long long int) min(((short)9156), (((/* implicit */short) var_11))))), (((16625718830975033583ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3]))))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((long long int) var_0)) : (((/* implicit */long long int) ((/* implicit */int) max((arr_20 [i_3] [i_3] [i_3]), (((/* implicit */short) var_3))))))))));
                var_17 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)41)) : (((/* implicit */int) arr_19 [i_4] [i_4] [i_4 - 1]))))) ? (max((19ULL), (((/* implicit */unsigned long long int) (signed char)3)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))))));
                var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((1713982577), (((/* implicit */int) (short)-27476))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_4 + 1] [i_4] [i_4 + 1] [i_4])) + (((/* implicit */int) var_11)))))));
            }
        } 
    } 
}
