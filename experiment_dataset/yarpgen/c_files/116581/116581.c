/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                arr_7 [i_2] [i_1] [i_2] = (((arr_2 [i_0]) ? ((((arr_2 [14]) || (arr_1 [i_0] [i_1])))) : -122));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_16 = (arr_8 [i_2]);
                            arr_12 [i_4] [i_1] [i_1] [i_1] = (!9801121931011767072);
                            var_17 = (min(var_17, (arr_10 [i_2] [i_1])));
                        }
                    }
                }
                arr_13 [i_0] [i_1] [i_2] [i_2] = (~13215974156266129735);
            }
            arr_14 [i_0] [i_0] = (((((arr_2 [i_0]) ? var_8 : 29746))) ? (arr_6 [i_1]) : ((((arr_4 [i_0] [i_1] [i_1]) ? var_8 : var_3))));
        }
        var_18 += (((arr_11 [11] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) <= (arr_10 [i_0] [i_0])));
        var_19 |= (arr_6 [i_0]);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                {
                    var_20 = (min(var_20, (((9801121931011767072 < (734279058 < 42716))))));
                    arr_21 [i_6] [i_5] [i_5] [9] = (arr_11 [i_0] [i_5] [i_5] [i_5] [i_6] [i_6] [i_6]);
                    var_21 = ((14179243736677891101 ? 2916133806920697689 : -47));
                }
            }
        }
        var_22 = ((~(var_14 + 42716)));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                var_23 = arr_22 [17] [17];
                var_24 = (arr_22 [i_7] [i_9]);

                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        var_25 = ((var_0 ? (arr_26 [i_7] [i_10]) : (arr_26 [i_8] [i_8])));
                        arr_37 [0] |= (~5719684887296641679);
                        arr_38 [i_7] [i_7] [i_9] [i_9] [i_10] [i_10] [i_9] = ((((734279058 ? (arr_32 [i_7] [i_8] [i_9] [i_10]) : (arr_26 [i_7] [i_8]))) - (((9223372036854775807 ? (arr_26 [i_7] [i_8]) : 42)))));
                    }
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        arr_42 [i_9] = (~((29919 ? 75 : 9801121931011767072)));
                        var_26 = (((((arr_28 [i_7] [i_7]) ? var_14 : (arr_34 [i_7] [i_8] [i_9] [i_10] [i_12])))) ? (arr_30 [i_7] [i_7] [i_7] [i_7]) : (((arr_35 [i_12] [i_10] [i_8] [i_8] [i_7]) - (arr_29 [i_12] [i_8] [i_8] [i_8]))));
                        var_27 -= ((~(80 | var_3)));
                        var_28 += 9223372036854775807;
                    }
                    var_29 = (~-47);
                    arr_43 [i_7] [i_7] [i_8] [i_8] [i_9] [i_10] = (((((0 ? (arr_39 [i_10] [i_9] [i_8] [i_8] [16] [i_9] [1]) : 117))) ? (arr_32 [i_7] [i_8] [i_9] [i_10]) : (arr_26 [i_7] [i_8])));
                }
                var_30 = ((~(arr_28 [i_7] [i_9])));
            }
            var_31 = (max(var_31, ((~(arr_40 [i_7] [i_8] [i_7] [i_8] [i_8] [i_8])))));
            arr_44 [i_7] |= 65535;
            var_32 = (~35616);
            var_33 = (min(var_33, (~-1092828636)));
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 22;i_14 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_15 = 1; i_15 < 21;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 22;i_16 += 1)
                        {
                            {
                                var_34 = 20005;
                                var_35 = (--45530);
                            }
                        }
                    }
                    var_36 = (max(var_36, var_10));
                    var_37 += (((arr_32 [i_14] [i_13] [i_7] [i_7]) ? ((~(arr_23 [i_7]))) : ((-8173 ? (arr_24 [i_7]) : 20005))));
                }
            }
        }
        arr_54 [i_7] |= 28196;
        arr_55 [i_7] = var_0;
    }
    var_38 = ((((min(31, 18210391517237390003))) ? (min(var_2, (max(var_2, var_9)))) : ((var_13 ? (~var_9) : (((min(14, 4))))))));
    #pragma endscop
}
