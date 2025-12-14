/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167248
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(var_10)))), (((var_8) ? (((/* implicit */long long int) 1909607895)) : (9223372036854775807LL)))))) != (max((min((((/* implicit */unsigned long long int) var_8)), (var_1))), (((/* implicit */unsigned long long int) var_14))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */short) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)243))))) ? (((arr_4 [i_1] [i_1]) ? (((/* implicit */int) (unsigned char)6)) : (var_11))) : (((/* implicit */int) arr_1 [2LL] [i_1]))))));
                    arr_8 [i_2] [i_1] [i_1] = ((/* implicit */long long int) (unsigned char)47);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 9; i_4 += 4) 
                        {
                            {
                                arr_14 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? ((+(max((((/* implicit */unsigned long long int) var_6)), (var_9))))) : ((((+(arr_13 [i_1] [i_2] [i_4]))) * (((/* implicit */unsigned long long int) max((arr_5 [i_4]), (((/* implicit */long long int) var_8)))))))));
                                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) max((min((((/* implicit */long long int) arr_4 [9] [i_3])), (6843229599619206061LL))), (((/* implicit */long long int) var_3)))))));
                                var_18 -= ((/* implicit */signed char) max((((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_13 [i_4 - 1] [i_3] [i_0])) ? (arr_11 [i_0 + 2] [i_1] [i_2] [i_3] [i_4]) : (((/* implicit */long long int) -1579968793)))))), (arr_3 [i_2] [i_1])));
                                arr_15 [i_0] [i_2] [i_2 - 1] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) arr_6 [i_3] [i_3] [i_3]))));
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_1] [i_1] |= ((/* implicit */signed char) max((1863445200), (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_1])) || (((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_2] [i_2] [i_0 + 1] [i_1])))))));
                    var_19 = ((/* implicit */signed char) max((((((/* implicit */_Bool) min((var_11), (-1909607912)))) ? ((~(var_9))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)8002))))))), ((~(((((/* implicit */_Bool) arr_7 [i_0])) ? (14335789298236231410ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1])))))))));
                }
            } 
        } 
    } 
}
