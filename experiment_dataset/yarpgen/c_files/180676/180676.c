/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0 + 1] [i_0] = -1;
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        var_17 = 23600;

                        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_0] [i_4] = ((var_10 <= (1 <= -9223372036854775779)));
                            arr_13 [i_0] [i_0] [i_0] = ((-(((arr_9 [i_4] [i_2 - 2] [i_1 - 2] [i_0 + 2]) / 24))));
                            var_18 *= (((((min((-2147483647 - 1), var_15)))) ? ((((arr_11 [i_4] [i_4] [i_4] [i_4] [13]) - 12))) : ((((arr_11 [i_0] [6] [i_2] [i_2] [i_4]) >= 281474976710655)))));
                            var_19 *= (var_14 <= 1);
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_1] [i_2] [i_1] [14] &= var_15;
                            var_20 = (~-70);
                            var_21 = (((!var_16) | var_4));
                        }
                        var_22 = (max(var_22, (((1 <= (((arr_1 [i_1 + 2] [i_0 + 4]) * var_4)))))));
                        var_23 = -9223372036854775779;
                    }
                }
            }
        }
    }
    var_24 = (9223372036854775779 <= 3578204329);
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            {
                arr_23 [i_7] [i_6 - 1] = 1;
                var_25 = 9223372036854775778;
                var_26 -= -9540;
            }
        }
    }
    #pragma endscop
}
