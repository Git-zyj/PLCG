/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = (min(var_19, (((((6472 ? 59569 : (arr_0 [i_0 - 1]))) + (arr_0 [i_0 - 1]))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_20 &= (arr_1 [6] [18]);
                    arr_9 [i_0] [i_0] = ((+((((arr_5 [i_2] [i_1] [22]) || var_5)))));
                    arr_10 [i_0] [4] [i_0] [i_0] = (((arr_8 [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_0 + 1]) ? 6478 : 11525106496056035893));
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    var_21 = var_7;
                    arr_15 [i_0] [i_0] [i_0] [i_0] = (arr_13 [i_0 + 2] [i_0 + 2]);
                    var_22 = (max(var_22, (((-(min(-var_4, ((min(16661, 65535))))))))));
                }
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    arr_18 [i_0] [i_0] [i_4] = 199;
                    arr_19 [i_0] [i_1] = 27375;

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        arr_24 [i_5] [i_0] [i_0] [i_0 - 1] = ((((min(6921637577653515723, 59056)) > (arr_14 [i_0] [i_0] [i_0]))));
                        var_23 = 48866;
                        arr_25 [i_0] = 48180;
                    }
                    arr_26 [i_0] = (arr_22 [4]);
                }
                for (int i_6 = 1; i_6 < 23;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_24 = ((((((arr_6 [i_0]) - 65528))) && ((max((arr_6 [i_0]), 18446744073709551612)))));
                                var_25 = (min(var_25, var_12));
                                var_26 = (min(var_12, -4));
                            }
                        }
                    }
                    var_27 *= 0;
                }
                var_28 = (min(var_28, (arr_7 [22] [i_0] [22])));
            }
        }
    }
    var_29 = (var_7 + var_6);
    var_30 *= var_8;
    #pragma endscop
}
