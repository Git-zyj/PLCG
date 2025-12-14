/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;
    var_18 = (((169899205339126459 || var_8) ? (!-var_9) : ((var_12 ? var_16 : var_12))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = (((arr_3 [i_0]) ? (!169899205339126459) : var_7));

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            arr_7 [i_1 - 1] [i_0] = (!var_8);
            var_19 = var_8;
            arr_8 [i_0] [i_1] [i_1] = (arr_5 [i_0] [i_1]);
            arr_9 [i_0] [10] = (((arr_5 [i_1 + 2] [i_1 + 3]) + var_4));
            arr_10 [i_0] [6] [i_1 + 2] = var_12;
        }
        arr_11 [i_0] = (((arr_3 [8]) | var_10));

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_15 [i_0] [i_0] = ((-8254 ? 11590 : -8254));
            arr_16 [i_2] = ((~(arr_0 [i_0])));
            arr_17 [2] [3] [i_0] = ((var_10 < -5) ? var_8 : ((var_16 ? -5 : (arr_5 [i_2] [i_2]))));
            arr_18 [i_0] = ((arr_3 [i_0]) | (arr_3 [i_0]));
        }
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    arr_23 [14] [i_0] = var_1;

                    for (int i_5 = 4; i_5 < 19;i_5 += 1)
                    {
                        arr_26 [i_4] [i_4] = -8259;
                        arr_27 [i_0] [i_3 + 2] [i_4] [i_5] = (((arr_5 [i_5 + 1] [i_3 + 2]) >> var_0));
                        arr_28 [i_0] [3] [i_0] [12] [i_0] [i_5] = -8265;
                        arr_29 [i_0] [i_0] [i_3] [i_4] [i_5] [i_0] = arr_3 [i_5 - 2];
                        arr_30 [10] [i_4] [i_4] = (!var_3);
                    }
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        arr_35 [i_0] [i_0] [12] [1] [i_6] = ((var_3 > (arr_3 [i_6 + 1])));
                        var_20 = (!-169899205339126460);
                        arr_36 [i_6] = (arr_12 [i_3 + 1] [i_3 - 2] [19]);
                    }
                    for (int i_7 = 3; i_7 < 19;i_7 += 1)
                    {
                        var_21 = (~-236);
                        arr_41 [i_3] = 1507213185;
                    }
                    arr_42 [9] [10] [i_4] = (13244 - 11590);
                }
            }
        }
    }
    #pragma endscop
}
