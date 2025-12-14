/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_21 = (min(var_21, (((var_13 != (((arr_0 [i_0 - 2] [i_0 + 1]) ? (arr_0 [i_0 - 1] [i_0 + 1]) : (arr_0 [i_0 - 1] [i_0 - 3]))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_1] [i_2] [18] = 1415128078;
                            var_22 = (min(var_22, (((!(((4026897313 ? var_6 : (!var_4)))))))));
                            arr_10 [i_3] = ((((min((arr_5 [i_1] [i_1] [i_1]), var_15))) ? ((var_13 ? 17 : ((((!(arr_4 [i_3]))))))) : -30));
                        }
                    }
                }
            }
        }
    }
    var_23 += ((!((var_0 || (((9843732264532887347 ? 3199226377 : var_11)))))));
    #pragma endscop
}
