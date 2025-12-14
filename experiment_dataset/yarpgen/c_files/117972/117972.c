/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = max(13, (min((var_6 / 5846), var_7)));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_13 = var_7;
        var_14 = 3;
        arr_3 [i_0] [i_0] = (!-911140861);
        arr_4 [i_0] = ((!((min((var_7 % 4294967295), 62489)))));
        var_15 = (max(var_15, (~103)));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        var_16 = 1;
        var_17 = (421336437 + 660001983);
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_18 = (max(var_18, ((max(1, 0)))));
            var_19 -= (((!123) * (max(8369270052502842578, -1))));
            var_20 = (16 != 102);
        }
        var_21 = (((!var_1) >> (((((!61924) | ((max(var_5, var_1))))) - 58846))));
        var_22 *= ((min(-var_8, (var_4 / var_2))));
    }
    for (int i_4 = 2; i_4 < 18;i_4 += 1)
    {
        arr_17 [8] = (((max(var_11, var_10)) & (-352826720 + 62510)));
        arr_18 [i_4] [6] = (var_1 && var_2);
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_23 = (max(var_23, (!3026)));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_24 &= ((min(0, 0)));
                                var_25 = (((-(!var_10))));
                                var_26 = (min(var_26, (~1)));
                                arr_29 [i_4] [18] [i_4] [i_6] [i_4 - 2] [i_4] [i_4] = var_8;
                                arr_30 [i_4] [i_5] [2] [i_6] [i_6] [3] [i_8] = 4294967291;
                            }
                        }
                    }
                    var_27 -= (max((((max(733737253, 1)) / (-2147483639 & -21992))), (min(-1870045892, 0))));
                }
            }
        }
    }
    var_28 = (((2147483638 / 2147483643) & (!421336437)));
    #pragma endscop
}
