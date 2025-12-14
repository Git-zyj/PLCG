/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((min(var_2, (((!(!var_12)))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 2] = (arr_10 [i_0] [i_1] [i_2 + 2] [i_3] [2]);
                                arr_13 [i_0] [i_0] [i_0] [0] [i_4] = ((!(((~(arr_4 [i_0] [i_2 + 2] [i_2 + 2]))))));
                                arr_14 [i_0] [0] [i_0] [i_0] [0] [0] [0] = ((!(!17784)));
                            }
                        }
                    }
                    var_14 = ((!(!var_1)));
                }
            }
        }
    }

    for (int i_5 = 1; i_5 < 16;i_5 += 1)
    {
        arr_19 [i_5 - 1] = ((~((~(arr_17 [i_5])))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 17;i_7 += 1)
            {
                {
                    var_15 = ((~(min((!20661), ((var_11 ? var_12 : 20655))))));
                    var_16 -= ((((!(!44847))) ? (min((-1 >= 20663), 44875)) : (arr_15 [i_7])));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 19;i_10 += 1)
                {
                    {
                        var_17 = (min(7267560746231631221, 1813657552));
                        arr_31 [i_5 + 4] = ((~(!20651)));

                        for (int i_11 = 3; i_11 < 18;i_11 += 1)
                        {
                            arr_35 [i_11] [i_10] [1] [i_8] [i_5 - 1] = (((~-264291512) ? ((var_11 ? ((3417718871 ? 5 : var_12)) : var_10)) : (arr_18 [i_10 + 1])));
                            arr_36 [i_5] = (((arr_22 [i_10 + 1]) ? var_2 : (!var_4)));
                        }
                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            var_18 = ((~(min(var_5, var_7))));
                            arr_39 [i_5 + 4] [i_5 + 1] [i_8] [i_9] [i_5 + 1] [i_10] [i_12] = ((!((!(((var_1 ? var_1 : 44883)))))));
                            arr_40 [i_5] [i_5] [i_5] [9] [14] = (!var_10);
                            var_19 = (arr_18 [i_9]);
                        }
                        /* vectorizable */
                        for (int i_13 = 4; i_13 < 19;i_13 += 1)
                        {
                            var_20 = (var_0 ? 6144 : (arr_41 [i_5] [i_5] [i_5] [i_5 - 1] [i_10 - 2]));
                            arr_43 [i_8] [i_8] = (!var_1);
                        }
                        for (int i_14 = 0; i_14 < 20;i_14 += 1)
                        {
                            var_21 ^= (min((arr_15 [i_5 + 4]), (max(20661, 2958167816326324291))));
                            var_22 ^= ((((min((((var_3 ? (arr_32 [i_14] [8] [i_10] [i_9] [i_5] [i_8] [i_5]) : var_4))), (-8697813623699234314 + var_4)))) ? (((!(((-(arr_33 [6] [i_8] [6] [6] [i_8]))))))) : (arr_32 [i_5 + 4] [i_5] [i_8] [1] [i_9] [i_10 - 1] [i_14])));
                        }
                        var_23 = ((~((max(44875, (arr_30 [i_5 + 4] [i_5 + 2] [i_5 + 2] [i_5 + 3] [i_5 + 1]))))));
                    }
                }
            }
        }
        arr_47 [i_5 + 4] = var_6;
    }
    var_24 ^= (((-1 >= var_1) == (((max(217, 21))))));
    #pragma endscop
}
