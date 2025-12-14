/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101483
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_3 [i_0])), (var_0)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || ((_Bool)0)))) : (var_15)))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) (short)32767))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) -2107098210592477104LL)) : (arr_9 [i_0 - 1] [i_1] [i_2] [i_3])))));
                            arr_11 [i_0] [i_1 - 1] [i_2] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (signed char)112)) > (((/* implicit */int) (short)32767)))))));
                            var_19 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (8377363881445858414LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)21)))))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_0] = max((((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1 + 1] [i_1 - 2]))))), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned char)235)))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 3; i_4 < 21; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 3; i_5 < 21; i_5 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) (~(min((((unsigned long long int) 4294967293U)), (((/* implicit */unsigned long long int) ((arr_9 [i_0] [i_0] [i_4] [14ULL]) > (((/* implicit */unsigned long long int) 1233723220)))))))));
                            var_21 = ((/* implicit */unsigned char) var_9);
                            arr_18 [i_0 + 1] [i_0] [i_0] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 950333943)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))))) ? (min((0LL), (((/* implicit */long long int) var_13)))) : (min((-2107098210592477091LL), (((/* implicit */long long int) var_1)))))) >> (((((unsigned int) (-(((/* implicit */int) (signed char)-121))))) - (67U)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_6 = 0; i_6 < 16; i_6 += 4) 
    {
        for (long long int i_7 = 1; i_7 < 14; i_7 += 4) 
        {
            for (unsigned char i_8 = 0; i_8 < 16; i_8 += 4) 
            {
                {
                    arr_25 [i_6] [i_6] [i_7] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((((/* implicit */signed char) var_5)), (var_2))), (((/* implicit */signed char) var_13))))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((((/* implicit */unsigned int) var_9)) & (arr_24 [i_6]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_2)), (var_4))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_16 [i_7] [i_7] [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_7 + 2])) : (((/* implicit */int) var_0)))))));
                    arr_26 [i_6] [i_7] [i_8] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((950333943), (((/* implicit */int) (short)-1107))))) ? (((/* implicit */int) arr_10 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7])) : (((/* implicit */int) ((2240213034U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_6] [i_6] [i_7] [i_8]))))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((0ULL) ^ (18446744073709551615ULL)))) ? (((/* implicit */int) max(((short)-1107), (((/* implicit */short) (unsigned char)80))))) : (((/* implicit */int) arr_13 [i_7 + 1] [i_7 + 2] [i_7 - 1] [i_8])))))));
                }
            } 
        } 
    } 
}
