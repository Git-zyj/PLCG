/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_17 = (!var_2);
                    var_18 += ((((var_4 ? (min(var_12, var_10)) : var_9))) ? (min((((arr_6 [i_1] [i_0 + 1]) - 4294967276)), (var_9 / 61608))) : ((((!(!var_8))))));
                    arr_7 [i_2] [i_1] [i_0] [i_2] = (arr_4 [i_0] [i_1] [i_2 + 1]);

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        var_19 *= ((+((var_3 ? (arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_2 - 1] [i_3 + 1] [i_3 + 1]) : (arr_3 [i_1])))));
                        var_20 = ((!20) | (arr_6 [i_2 + 3] [i_0 + 1]));
                        var_21 = var_14;
                        var_22 = (arr_4 [i_3 + 1] [i_2 + 2] [i_2 + 1]);
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_23 += var_10;
                        arr_14 [i_2] [i_1] [i_1] [i_1] = -var_3;
                        var_24 = ((19 ? 4294967291 : 1));
                        arr_15 [i_0] [i_2] = 4232404652;
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                var_25 += (min(37437, 1));
                                var_26 |= (((--215690548) ? ((min(var_15, (arr_24 [i_8 - 1] [i_9] [i_5 - 1] [i_6 - 1])))) : (min((arr_22 [i_9] [i_8] [i_5]), ((46720 ? (arr_22 [i_6] [i_5] [i_7]) : var_5))))));
                            }
                        }
                    }
                }
                var_27 *= (((-var_13 < ((min(var_3, var_2))))));
                arr_28 [i_5] [i_6] [i_6] = (arr_18 [i_6]);
            }
        }
    }
    var_28 = var_11;
    var_29 |= ((var_8 / (((var_3 >= var_13) << (((var_3 | 256) - 20401))))));
    /* LoopNest 2 */
    for (int i_10 = 1; i_10 < 19;i_10 += 1)
    {
        for (int i_11 = 4; i_11 < 18;i_11 += 1)
        {
            {
                arr_33 [i_11] [0] [0] = (arr_0 [i_10 - 1]);
                var_30 = ((var_8 > (arr_27 [i_10] [i_11] [i_10] [i_11 + 2])));
                arr_34 [i_10] = ((480 ? 16991 : -9173));
                arr_35 [i_11] [i_10] [i_11] = (!(((~(max(var_10, (arr_8 [i_10] [i_10 - 1] [i_11] [i_11] [i_11] [i_10])))))));
            }
        }
    }
    #pragma endscop
}
