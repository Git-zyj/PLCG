/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((var_13 < (var_10 | var_3)))) - -10));
    var_15 = (min(((((max(var_13, 10))) ? 0 : (max(11684285553078654234, var_1)))), 731927958));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((4 ? (((arr_1 [i_0]) ? 12615101312789256702 : ((max(var_10, var_12))))) : ((((((var_0 ? var_8 : (arr_1 [i_0])))) ? (arr_0 [1] [1]) : ((1 ? 0 : 45366)))))));
        var_16 = ((min((max(var_3, 4294967275), 28688))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] = (max(23, 183));

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                var_17 = (min(((98 ? -1 : (arr_5 [i_1] [i_2]))), (max(var_9, ((~(arr_1 [i_2])))))));
                arr_10 [i_0] [i_2] = ((!((max((68198803 | 54), var_5)))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 16;i_4 += 1)
                    {
                        {
                            arr_17 [i_2] [i_2] [i_1] [i_3] [i_3] [i_1] [i_3] = (max(3563039345, ((1 ? 13893156939455977566 : (((var_6 ? (arr_11 [i_0] [i_0] [i_2] [i_2]) : var_12)))))));
                            arr_18 [i_0] [i_0] [i_0] [i_2] = (arr_7 [i_0] [i_0] [i_0]);
                        }
                    }
                }
                var_18 = ((((((arr_7 [i_0] [0] [i_2]) ? ((31 ? var_6 : 3563039345)) : var_8))) ? (max(7, (var_0 - var_2))) : ((max(((103 ? (arr_16 [i_2] [i_2] [i_2] [i_0]) : var_3)), ((var_13 ? var_9 : 0)))))));
            }
            for (int i_5 = 1; i_5 < 15;i_5 += 1)
            {
                var_19 = 731927951;

                for (int i_6 = 3; i_6 < 17;i_6 += 1)
                {
                    var_20 = 176;
                    arr_27 [i_6] [i_6] [i_6] = (!2632051688);
                    var_21 = 169;
                    arr_28 [i_0] [i_0] [i_0] [i_6] [i_6] [i_0] = var_11;
                }
                for (int i_7 = 1; i_7 < 17;i_7 += 1)
                {
                    arr_32 [i_0] [i_0] [i_7] = var_11;
                    var_22 = var_3;
                    var_23 = (arr_14 [i_0] [1] [i_0] [2] [i_0] [i_0]);
                }
                var_24 = ((~(arr_30 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0])));
            }
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                var_25 = (((((max(var_10, (arr_31 [i_0]))))) ? (((arr_21 [i_0] [i_1] [i_1] [i_8]) ? (arr_21 [i_8] [i_8] [16] [i_0]) : (arr_21 [i_8] [i_1] [11] [i_0]))) : var_2));

                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    arr_38 [i_0] [i_0] = ((!(arr_9 [i_0] [i_1] [i_0])));
                    var_26 = (max(var_10, 508293719));
                    var_27 = (max((min(4294967270, (arr_14 [i_0] [i_1] [i_1] [i_1] [i_8] [12]))), (min(var_1, ((((arr_34 [i_0] [i_0] [i_0] [i_9]) | var_7)))))));
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                {
                    arr_41 [i_10] [14] [i_0] [4] [8] = var_2;

                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        var_28 = (max(((((var_13 * var_7) ? -4096 : (max(0, 2787756120))))), -11));
                        arr_45 [i_10] = 104;
                    }
                    arr_46 [i_10] = (max((max((max(var_10, var_5)), ((max(var_1, var_12))))), (arr_23 [i_10] [i_1] [i_0])));
                }
                for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                {
                    arr_50 [i_0] [i_0] [i_0] [0] = max(((-3 ? var_11 : ((min(32704, var_1))))), (max((max(4, 18446744073709551611)), ((((arr_11 [i_0] [14] [i_0] [i_12]) > var_2))))));
                    arr_51 [i_1] [i_1] [i_1] [i_1] [i_1] = (max(((~((var_7 ? -22 : 2058712726)))), ((max((((var_6 >= (arr_44 [i_0] [i_1] [i_0] [i_8] [i_1])))), (arr_13 [i_0] [i_0]))))));
                }
                for (int i_13 = 0; i_13 < 18;i_13 += 1)
                {
                    arr_54 [i_8] [i_0] [i_0] = -13;
                    var_29 = (((((arr_29 [i_13] [i_8] [7] [i_0]) ? (~var_9) : (max((arr_30 [i_0] [i_0] [i_0] [i_8] [i_0] [i_0]), 745855863)))) ^ (((((((arr_31 [i_0]) ? 6 : var_8))) ? 192 : (arr_47 [i_8] [i_1] [i_1] [i_13] [i_0]))))));
                    arr_55 [i_0] [i_1] [i_1] = 6;
                }
                var_30 = var_9;
                arr_56 [i_0] [i_0] [i_8] [i_0] = (max((min(7856156189666486367, 524287)), 10));
            }
        }
    }
    for (int i_14 = 1; i_14 < 1;i_14 += 1) /* same iter space */
    {
        arr_61 [i_14] = (max(((max(var_9, var_12))), ((max((max(var_7, 4)), (arr_58 [i_14 - 1] [i_14 - 1]))))));
        arr_62 [i_14] [i_14] = var_5;
    }
    for (int i_15 = 1; i_15 < 1;i_15 += 1) /* same iter space */
    {
        arr_66 [5] = (max((max(731927947, 51684)), 6));
        arr_67 [i_15] [i_15] = ((max((((3732264446 ? var_2 : var_10)), (max((arr_58 [i_15] [i_15]), 10))))));
    }
    var_31 = 251;
    #pragma endscop
}
