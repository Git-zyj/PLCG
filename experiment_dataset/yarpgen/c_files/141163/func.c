/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141163
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
    var_19 = var_7;
    var_20 = ((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_10))))), (((((/* implicit */_Bool) (signed char)-109)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        var_21 = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */short) arr_1 [i_0 + 1] [i_0 - 2])), (arr_0 [i_0 + 1] [i_0 - 2])))), (((var_11) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 2])))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_22 |= ((/* implicit */_Bool) max((((/* implicit */int) min((arr_4 [i_0 - 2] [i_1 - 1]), (arr_4 [i_0 - 1] [i_1 - 1])))), (((arr_4 [i_0 + 1] [i_1 - 1]) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_1 - 1])) : (((/* implicit */int) arr_4 [i_0 - 1] [i_1 - 1]))))));
                                var_23 = ((/* implicit */unsigned long long int) min(((-(-2969898249567791944LL))), (((/* implicit */long long int) arr_3 [i_1] [i_2 + 1] [i_3 + 1]))));
                                var_24 = ((/* implicit */unsigned char) ((unsigned int) max((arr_11 [i_0 - 1] [i_1] [i_1 - 1] [i_2 - 1] [i_3 + 1]), (arr_11 [i_0 + 1] [i_1] [i_1 - 1] [i_2 + 2] [i_3 + 1]))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] [i_1] = ((/* implicit */int) min((((/* implicit */long long int) (_Bool)1)), (max((((/* implicit */long long int) (unsigned char)152)), (max((((/* implicit */long long int) (_Bool)1)), (-8430574354374561890LL)))))));
                }
            } 
        } 
    }
}
