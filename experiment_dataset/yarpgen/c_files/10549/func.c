/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10549
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
    for (long long int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */short) max((min((var_14), (((/* implicit */long long int) max((3397405531U), (((/* implicit */unsigned int) (signed char)3))))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (arr_1 [i_0] [i_0])))), (arr_4 [i_0] [i_0 + 2]))))));
                arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_13)), (var_14)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_2 [i_1 - 1] [i_0 + 2])) : (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_2 [i_1 - 1] [i_0 - 2]))));
                /* LoopNest 3 */
                for (long long int i_2 = 3; i_2 < 20; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_16 [i_4 + 3] [i_0] [i_2] [i_0] [i_0] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_2] [i_2]))) : (arr_12 [i_0] [i_0] [i_0 + 2] [i_0 - 2] [i_0] [i_0])))), (max((((/* implicit */unsigned long long int) max((arr_13 [i_4] [i_4] [i_4 - 1] [i_4 + 3] [i_4 + 3] [i_4]), (((/* implicit */long long int) arr_0 [i_3]))))), (((((/* implicit */_Bool) 3692065042U)) ? (13043916372417311500ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
                                var_16 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_5))));
                                var_17 = ((((/* implicit */_Bool) min((min((((/* implicit */long long int) var_4)), (arr_13 [i_4 - 1] [i_0] [i_1] [i_0] [i_1] [i_0]))), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_8)), (897561765U))))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) << (((arr_5 [i_0 + 3]) + (174187612617057836LL))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_13 [i_1] [i_3] [i_2] [i_3] [i_4] [i_3])) ? (((/* implicit */int) arr_11 [i_2 + 1] [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_1])))))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-116)) && (((/* implicit */_Bool) arr_3 [i_0]))));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_14) : (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) var_14))));
}
