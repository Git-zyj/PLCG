/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160788
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
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_2 [i_0])) : (var_6)))) ? (((/* implicit */int) ((3843036379438447272ULL) != (((/* implicit */unsigned long long int) -1LL))))) : ((-(((/* implicit */int) arr_6 [i_2] [i_1] [i_0] [i_0]))))))) ? ((+((+(((/* implicit */int) (_Bool)1)))))) : ((+(((/* implicit */int) arr_7 [i_1]))))));
                    var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) 1470389715)) ? (18256323091574777928ULL) : (((/* implicit */unsigned long long int) var_13)))) : (0ULL)))));
                    var_22 = ((/* implicit */unsigned char) var_11);
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_2])) ? (((((/* implicit */_Bool) var_15)) ? (arr_5 [i_2] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)138)))))) ? (((/* implicit */int) arr_7 [i_2])) : (arr_1 [i_1])));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_5 = 1; i_5 < 11; i_5 += 1) 
                {
                    for (signed char i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        {
                            arr_19 [i_3] [i_4] [i_5] [i_5] = ((/* implicit */unsigned char) max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned short) arr_14 [i_5 - 1])))));
                            arr_20 [(unsigned short)7] [i_4] = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) (~(1012621379)))) ^ (((((/* implicit */_Bool) (unsigned char)117)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5231))) : (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) max((-1470389707), (((/* implicit */int) (signed char)70)))))));
                            var_23 = ((/* implicit */unsigned int) var_9);
                            var_24 = ((/* implicit */long long int) max((var_24), (max((((((/* implicit */_Bool) var_1)) ? (arr_16 [i_5 + 1] [i_5] [(signed char)2]) : (arr_16 [i_5 + 1] [i_6] [i_6]))), (((/* implicit */long long int) min((50331648U), (((/* implicit */unsigned int) (signed char)120)))))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_4)) == ((-(arr_0 [i_3])))));
            }
        } 
    } 
}
