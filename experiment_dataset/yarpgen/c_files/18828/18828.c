/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = -16;
        var_16 = (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : var_1));
        var_17 = 46193875;
    }
    /* LoopNest 3 */
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                    {
                        var_18 = (~(((arr_6 [i_1 - 1]) ? (arr_8 [i_1 - 1]) : (arr_8 [i_1 - 1]))));
                        var_19 = ((~((~((1 ? 1 : -1))))));
                        var_20 = ((!(((((min(-24, 9))) ? (arr_3 [i_2]) : -6)))));
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                    {
                        var_21 = (~439053722);
                        var_22 = -2;
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                    {
                        var_23 &= ((min(-7, 1)) * 1);
                        arr_20 [i_2] [i_2] [i_2] [i_6] [i_1] = arr_11 [i_3] [i_3];
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 0;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_24 = (max(var_24, ((max((~1226124047), var_10)))));
                                var_25 = (max(var_25, 1));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (max(var_8, var_13));
    var_27 = ((var_0 + (~7)));
    #pragma endscop
}
