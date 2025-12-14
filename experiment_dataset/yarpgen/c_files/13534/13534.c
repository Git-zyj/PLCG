/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (!var_17)));
    var_21 = var_18;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_10 [i_1 + 2] [i_0] = ((min(var_2, var_19)));

                            for (int i_4 = 2; i_4 < 18;i_4 += 1)
                            {
                                var_22 = (max(var_22, var_16));
                                var_23 = (108 >= 591327231172454622);
                            }
                            for (int i_5 = 2; i_5 < 20;i_5 += 1)
                            {
                                var_24 = ((!(arr_5 [i_1 - 2] [i_1 - 2])));
                                var_25 = (((141016533694824322 / 125) ? var_17 : (arr_3 [i_5 - 1] [0] [19])));
                                var_26 = ((!((!((max(var_6, var_9)))))));
                            }
                            var_27 = (~576460752303423487);
                            arr_16 [i_0] = (!-1180800467775491582);
                        }
                    }
                }
                var_28 += var_3;
            }
        }
    }
    #pragma endscop
}
