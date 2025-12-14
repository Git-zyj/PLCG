/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((min(var_15, var_3)), var_9));
    var_17 = min(7634143345967736654, (min((max(18446744073709551615, 0)), (var_15 * var_13))));
    var_18 = var_9;
    var_19 += var_12;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = ((((arr_3 [15] [i_1]) ? (arr_1 [14] [i_1]) : (arr_3 [i_1] [i_1]))) + (arr_1 [i_0] [i_1]));
                var_21 = max(var_0, (((var_13 * var_9) >> ((((var_11 ? (arr_3 [i_0] [i_0]) : (arr_1 [i_0] [i_1]))) - 13837328704872770620)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_22 = max((max((arr_7 [i_2]), (arr_7 [i_2]))), (((arr_7 [i_2]) ? var_9 : var_0)));
                            var_23 = (((+(max((arr_9 [i_0] [i_3]), 14016588905007282419)))) + (max(var_15, 18446744073709551615)));
                        }
                    }
                }
                var_24 &= ((!((((arr_10 [i_1] [i_1] [i_0] [1] [i_0] [i_0]) + (var_8 > 10055237835789493940))))));
                var_25 = (-(min(var_4, var_14)));
            }
        }
    }
    #pragma endscop
}
