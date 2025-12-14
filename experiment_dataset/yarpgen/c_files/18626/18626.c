/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = ((~(arr_0 [i_0])));
        arr_3 [i_0] [i_0] = (((((~(arr_1 [i_0]))) <= (~58))));
        arr_4 [i_0] = ((((((((arr_0 [i_0]) - var_4))) ? -var_6 : ((-127 ? var_12 : var_0)))) | 118));
    }

    /* vectorizable */
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        var_17 = ((15 >> (((arr_0 [1]) - 17873))));
        var_18 = (min(var_18, var_0));
        var_19 = (((arr_0 [i_1]) - 8388607));
        var_20 = 1;
        arr_7 [i_1] [i_1 + 1] = ((2682225334 ? (arr_6 [i_1] [i_1]) : var_15));
    }

    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        var_21 &= (max(((250 ? -10791 : -1765)), (arr_9 [i_2 + 1])));
        var_22 = (((~(20921 * var_4))));
        arr_12 [i_2] [i_2] = (arr_10 [i_2 - 1] [i_2]);
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_23 = (min(var_23, ((max(3409892300862609466, ((min((min(1762, var_8)), (arr_13 [i_3] [i_3])))))))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 13;i_7 += 1)
                        {
                            var_24 = (var_4 & -1058528604);
                            var_25 = (min(var_25, var_3));
                            var_26 = (arr_15 [i_3]);
                            var_27 = ((65524 ? var_7 : 255));
                            var_28 = 19;
                        }
                        var_29 = (arr_11 [i_4]);
                        arr_25 [i_6] [i_6] [i_5] [10] [0] [1] = (((((!(arr_16 [i_3] [i_3] [i_5 - 1])))) << ((((min(5158, 0))) ? 1 : ((((arr_8 [i_5] [i_6]) && (arr_15 [i_4]))))))));
                    }
                }
            }
        }
        var_30 = (min((((122 ? -45 : -1777))), (max((arr_22 [1] [6] [6] [i_3]), (arr_23 [i_3] [i_3] [i_3] [i_3] [i_3])))));
        var_31 = (arr_0 [23]);
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
    {
        arr_30 [i_8] [i_8] = (arr_29 [i_8] [12]);
        var_32 = -10;
    }
    #pragma endscop
}
