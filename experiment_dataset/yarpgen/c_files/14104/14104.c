/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;
    var_21 = max(var_2, ((max(var_10, (!var_4)))));
    var_22 = ((!((min(22374, (~var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_8 [i_1 + 1] = (((((((arr_2 [i_0]) ? (arr_6 [i_0] [i_1 + 2] [i_2] [i_2]) : var_3))) ? (min(var_15, var_18)) : ((((arr_0 [i_1]) ? (arr_6 [i_0] [17] [i_2] [i_0]) : var_17))))));
                    arr_9 [i_0] = (~var_3);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [i_3] = (((~var_10) ? ((~(arr_5 [i_1 - 2]))) : (arr_3 [i_0] [i_0] [i_2])));
                                var_23 = (arr_2 [i_0]);
                                var_24 = ((((~(((!(arr_0 [i_2])))))) < -22374));
                            }
                        }
                    }
                    arr_17 [i_1] [i_1] [i_0] = (!-var_11);
                }
                var_25 = (((max(31702, 0))));
            }
        }
    }
    #pragma endscop
}
