/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_3] = ((((((var_5 ? 9044724357899565791 : 42513))) ? (arr_6 [i_4 + 1] [i_1] [i_4 + 1]) : 536870784)));
                                arr_15 [i_1] [i_3] [i_2] [i_1] [i_1] = -4633567935835883240;
                                var_15 = (min(((-(arr_2 [i_0]))), (arr_10 [i_2] [9] [i_2] [i_3])));
                                var_16 -= 3758096511;
                            }
                        }
                    }
                    arr_16 [i_0] [i_0] [i_0] |= (((~9223372036854775795) ? ((~(arr_7 [i_0]))) : (((arr_5 [i_0] [i_1] [i_0]) ? (arr_7 [i_0]) : (arr_7 [i_0])))));
                    var_17 = (min(var_17, (arr_2 [i_0])));
                    var_18 = (arr_7 [i_1]);
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                {

                    for (int i_8 = 3; i_8 < 10;i_8 += 1)
                    {
                        var_19 &= (((arr_20 [i_5] [i_7]) ? (~var_12) : (arr_10 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6])));
                        arr_28 [i_5] [i_6] [i_5] = (((arr_26 [i_8 - 3] [i_6 - 1]) && (arr_26 [i_8 - 3] [i_6 - 1])));
                        arr_29 [i_5] [i_6] [i_7] [i_8] = (arr_23 [i_6 + 1] [i_6] [i_6 - 2]);
                    }
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        var_20 = (((arr_0 [i_9]) ? (((arr_25 [i_6] [i_7] [i_6]) ? (arr_12 [i_5] [i_6] [i_6] [11] [i_5]) : var_14)) : var_9));
                        arr_34 [i_6] = ((arr_33 [i_6] [i_6 - 3]) ? (arr_33 [i_6] [i_6 - 3]) : (arr_33 [i_6] [i_6 - 3]));
                        var_21 = (arr_26 [i_5] [i_5]);
                        var_22 = (((arr_33 [i_9] [i_6]) ? (arr_4 [i_5] [i_6 - 2]) : var_10));
                        arr_35 [i_6] = (((3758096524 ? -9642 : 0)));
                    }
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        arr_39 [i_6] [i_6] [i_6 + 1] [i_6] [1] = (((arr_12 [i_5] [i_7] [i_7] [i_6 + 1] [i_10]) ? (arr_20 [i_6] [i_6 - 1]) : var_8));
                        var_23 = (min(var_23, ((((((((arr_17 [i_5]) ? (arr_31 [i_5] [i_5] [i_6] [i_7] [i_7] [i_10]) : (arr_25 [i_5] [i_5] [i_5]))) + 2147483647)) >> (-32743 + 32774))))));
                        var_24 = var_4;
                        arr_40 [i_5] [i_6] [i_6] = (arr_9 [i_7] [i_6] [i_6] [i_6 - 2]);
                    }
                    var_25 = (-2147483647 - 1);
                    arr_41 [i_5] [i_5] [i_5] [i_6] = var_12;
                }
            }
        }
        arr_42 [i_5] = var_13;
        arr_43 [i_5] = 0;
    }
    for (int i_11 = 4; i_11 < 17;i_11 += 1)
    {
        arr_47 [i_11 + 2] [i_11] = (arr_44 [i_11 - 1] [i_11]);
        arr_48 [i_11] [i_11] = ((((min((arr_45 [i_11 - 4] [i_11 - 1]), (arr_46 [i_11 + 2])))) ? (arr_46 [i_11 - 1]) : ((-((var_14 ? (arr_45 [i_11 + 2] [i_11]) : var_11))))));
        var_26 -= ((((((!(arr_45 [i_11 + 1] [i_11]))))) ? (arr_45 [i_11 + 1] [i_11]) : var_4));
    }
    var_27 = (~var_14);
    var_28 = ((var_14 ? ((((var_1 ? 1 : var_2)) | ((536870772 ? 1 : var_1)))) : -var_5));
    #pragma endscop
}
