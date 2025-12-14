/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141735
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
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [(unsigned short)7] [i_0] = ((/* implicit */unsigned int) var_0);
                    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [i_0 + 1])) : (((/* implicit */int) ((short) var_6))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_20 ^= ((/* implicit */short) 474427630U);
                                arr_13 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 2] = ((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) arr_7 [i_4 + 2] [i_0 - 1] [i_0])))));
                                arr_14 [i_3] [i_4] = min((((((/* implicit */_Bool) (+(((/* implicit */int) var_17))))) ? (0LL) : (((/* implicit */long long int) max((292166881U), (((/* implicit */unsigned int) (signed char)-26))))))), (((((/* implicit */_Bool) min((arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1]), (((/* implicit */unsigned long long int) var_3))))) ? (min((((/* implicit */long long int) 2147483630)), (131008LL))) : (((/* implicit */long long int) (+(((/* implicit */int) var_4))))))));
                                var_21 = ((/* implicit */_Bool) max((var_21), ((!(((/* implicit */_Bool) max((((long long int) arr_2 [i_1])), ((+(-5216400866378661952LL))))))))));
                                var_22 = ((/* implicit */unsigned short) -2147483619);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (long long int i_6 = 4; i_6 < 13; i_6 += 1) 
                        {
                            {
                                arr_22 [i_0 - 1] [i_5] [i_2] [i_2] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [(signed char)12])) && ((_Bool)1)))), (var_11)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2])) ? (2147483608) : ((-(((/* implicit */int) arr_20 [i_0] [i_0] [i_2] [i_5] [i_6 - 3])))))))));
                                arr_23 [i_6 - 1] [i_6 + 1] [(signed char)7] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) arr_11 [i_5] [i_6 - 1] [i_5] [i_2] [i_0] [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (var_18) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (min((5068812342457962041LL), (((/* implicit */long long int) (unsigned short)65531))))));
    var_24 = ((/* implicit */long long int) var_13);
}
