/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [i_0 + 3] = (((((1 & (-1434696652 + 1434696663)))) * (((arr_0 [i_0]) ? (!1434696687) : (arr_2 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 = ((+((((arr_6 [i_1] [i_2 + 2] [i_1] [i_1]) != (arr_6 [i_0] [i_2 + 1] [i_2 + 2] [i_2]))))));
                    var_16 = var_1;

                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        var_17 = (min(var_17, (((~(arr_1 [i_0] [i_1]))))));
                        var_18 = -33;

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            var_19 = (min(var_19, (~-1434696644)));
                            arr_16 [i_0] [i_1] [i_0] [i_3 + 4] [i_4] = (min(-1395606908, -4660));
                        }
                        arr_17 [i_2] [i_0] = 1946938894109533640;
                        arr_18 [i_0] = ((((~(arr_6 [i_2 + 1] [i_2 - 2] [i_2 + 1] [i_2 + 1]))) - (arr_6 [i_2 + 2] [i_2 + 2] [i_2 - 1] [i_2 - 2])));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_23 [i_1] [i_1] [i_0] [i_2] = (arr_10 [i_0] [i_0] [i_2] [i_2 - 1] [i_5] [i_5]);
                        var_20 = ((((((arr_2 [i_0 + 3]) ? (arr_2 [i_0 + 3]) : var_2))) ? (arr_2 [i_5]) : -32747));
                        var_21 = (((((var_4 ? (arr_5 [i_0] [i_0] [i_0]) : (arr_8 [i_0] [i_1] [i_0])))) && (!2080350455)));
                    }
                }
            }
        }
    }
    for (int i_6 = 1; i_6 < 21;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    arr_32 [i_8] = ((~((-(arr_26 [i_6 + 1] [i_6 + 1])))));
                    var_22 = (min(var_22, 127));
                    arr_33 [i_8] = var_6;
                }
            }
        }
        var_23 = ((-(arr_31 [i_6 + 1] [20] [2] [12])));
    }
    for (int i_9 = 2; i_9 < 12;i_9 += 1)
    {
        var_24 = (min(var_24, (arr_28 [i_9 + 4] [i_9] [i_9 + 2])));
        var_25 = (max((arr_36 [i_9]), (min((arr_36 [i_9 + 2]), var_4))));
        arr_37 [6] = (((((-32747 + 2147483647) >> (30866 - 30846))) >= (-var_1 / -823)));
    }
    for (int i_10 = 2; i_10 < 22;i_10 += 1)
    {
        var_26 = 0;
        /* LoopNest 2 */
        for (int i_11 = 3; i_11 < 21;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 22;i_12 += 1)
            {
                {
                    var_27 = (max(var_27, 127));
                    var_28 -= max((((((((arr_38 [i_10 - 1]) <= (arr_40 [i_10 - 1])))) - var_2))), (min(0, ((-4481467863271352661 / (arr_40 [i_10]))))));
                    var_29 = 0;
                    arr_46 [i_11] = (((((1434696669 ? var_1 : ((((arr_38 [22]) <= var_3)))))) ? ((((30866 ? -809 : (arr_41 [i_10 - 2] [i_12] [i_12 + 1]))) / ((1434696669 ? var_1 : 6)))) : (~var_13)));
                }
            }
        }
    }
    var_30 += ((24183 ? (~234) : ((min((var_1 != 127), (((-127 - 1) && 255)))))));
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 21;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 21;i_14 += 1)
        {
            {
                var_31 = (arr_30 [i_13] [i_14] [i_13]);
                var_32 = (((max((((!(arr_41 [i_13] [11] [i_14])))), ((7372848486667943408 ? var_3 : 1)))) / (arr_27 [i_13])));
                arr_53 [i_13] = ((((1434696669 / var_5) ? 2076827882 : ((min(234, 31301))))));
                var_33 = (!-71);
            }
        }
    }
    #pragma endscop
}
