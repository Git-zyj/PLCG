/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 15;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                var_20 = ((+((-(((arr_5 [i_0] [i_1] [i_2] [i_0 + 2]) ? var_13 : 4))))));
                var_21 = (max(var_21, ((min((((arr_4 [i_0 - 2]) ? (arr_4 [i_1 - 4]) : 0)), 255)))));

                /* vectorizable */
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    var_22 = (~0);
                    arr_9 [14] [i_1] [i_2] [i_3] [i_3] [6] = 18446744073709551611;
                    var_23 = (max(var_23, 13));

                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_24 = (max(var_24, ((((arr_4 [4]) ? (((arr_13 [i_2]) ? var_3 : 49)) : 8469)))));
                        var_25 = (max(var_25, 1597640403));
                    }
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                {
                    var_26 = ((((((arr_3 [i_0] [i_0 + 2] [i_2]) + var_7))) ? var_8 : ((3 ? (arr_3 [i_5] [i_0 - 2] [i_5]) : (arr_3 [i_0] [i_0 + 1] [i_2])))));
                    var_27 = (var_15 > 18446744073709551592);
                }
                for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                {
                    arr_19 [1] = 152;
                    var_28 = (!7476608201586786274);
                }
            }
            var_29 = (min(var_29, (((9733 ? 18 : (((~-14023) ? 18446744073709551608 : 18)))))));
            var_30 = (-((~(arr_0 [i_0 - 3]))));
            arr_20 [i_0 + 2] [14] [i_1] &= ((((max((~22292), (!1511703970064307946)))) + 1119580200050369420));
        }
        /* vectorizable */
        for (int i_7 = 4; i_7 < 15;i_7 += 1) /* same iter space */
        {
            var_31 = ((0 ? 18446744073709551593 : 18446744073709551611));
            var_32 = (max(var_32, (!18446744073709551611)));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 0;i_8 += 1)
        {
            arr_26 [3] [i_0] [i_0] = arr_22 [i_0 - 1] [i_8 + 1];
            /* LoopNest 3 */
            for (int i_9 = 1; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        {
                            var_33 = ((-(arr_6 [i_0 - 1] [i_9 + 1])));
                            var_34 = (min(var_34, var_11));
                        }
                    }
                }
            }
            var_35 ^= ((-((~(arr_27 [i_0] [i_8])))));
        }
        arr_35 [i_0] = ((1 ? 1 : 4));
        var_36 = (max((((((2 ? 24 : 214))) - var_1)), (arr_34 [12] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
        var_37 = (min(var_37, ((min(((min((!var_19), (max(var_8, 110))))), ((-116 ? -50 : (((arr_17 [i_0] [i_0] [i_0]) ? 33488896 : var_11)))))))));
    }
    for (int i_12 = 0; i_12 < 16;i_12 += 1)
    {
        var_38 = (max(var_38, (!9526)));
        arr_38 [i_12] [i_12] = var_19;
        var_39 += (((arr_0 [i_12]) ? 1 : (((!(!1422405700))))));
        arr_39 [15] [i_12] = var_8;
        var_40 = (min((((arr_11 [4] [i_12] [i_12] [i_12] [i_12]) ? (arr_33 [i_12] [i_12] [i_12] [i_12] [i_12]) : (arr_33 [i_12] [i_12] [i_12] [i_12] [i_12]))), (arr_11 [2] [i_12] [i_12] [i_12] [4])));
    }
    for (int i_13 = 0; i_13 < 10;i_13 += 1)
    {
        var_41 = (min(var_41, (((((max(((min(var_9, (arr_34 [i_13] [1] [i_13] [i_13] [10] [4] [i_13])))), 9529))) ? (min(var_8, 18446744073709551596)) : (arr_4 [i_13]))))));
        var_42 = var_14;
    }
    var_43 = var_13;
    #pragma endscop
}
