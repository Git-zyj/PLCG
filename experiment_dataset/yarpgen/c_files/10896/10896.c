/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_1] = (min(1768281030222786029, 47));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [15] [i_2] [i_1] = (max(var_9, (arr_1 [i_1 - 1])));
                            arr_12 [i_0] [i_1] [i_1] = (arr_9 [i_1] [i_3]);
                        }
                    }
                }
                var_10 = (((arr_8 [i_1] [i_1] [i_1 + 1] [i_0]) ? (arr_3 [i_1 + 1]) : (max((arr_0 [i_1 + 1] [i_1 + 1]), (max((arr_7 [i_0] [i_1 - 1] [i_1 + 1]), 14627164313557471792))))));
            }
        }
    }

    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        arr_16 [i_4] = (((4077795110 * 217172186) >= 1));
        arr_17 [i_4] = var_4;
        var_11 = (max(var_11, (((~(((!var_3) ? (arr_4 [i_4] [1]) : ((var_7 ? (arr_6 [i_4] [i_4]) : (arr_13 [i_4]))))))))));
        arr_18 [i_4] = (arr_1 [i_4]);
        arr_19 [9] = arr_3 [i_4];
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 11;i_5 += 1)
    {
        arr_22 [i_5] = (((arr_1 [i_5 + 1]) ? var_9 : var_1));
        arr_23 [i_5] [i_5] = ((var_1 & (arr_10 [i_5 + 1] [1] [i_5] [i_5] [i_5])));

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_12 = (min(var_12, (arr_0 [0] [i_5 + 1])));

            for (int i_7 = 1; i_7 < 8;i_7 += 1)
            {
                var_13 = ((((!(arr_10 [i_7 + 3] [i_6] [i_5] [i_5] [i_5])))));
                arr_29 [i_5] [i_6] [i_5] = ((var_5 ? (arr_10 [i_5] [i_6] [i_7 + 2] [i_5 + 1] [15]) : (arr_10 [i_5 + 1] [i_5 + 1] [i_7 - 1] [i_5 - 1] [i_7 - 1])));
            }
            for (int i_8 = 1; i_8 < 10;i_8 += 1)
            {

                for (int i_9 = 2; i_9 < 9;i_9 += 1) /* same iter space */
                {
                    var_14 |= (((arr_6 [i_9] [i_9]) >= (arr_2 [i_5 + 1])));
                    var_15 = 67100672;
                }
                for (int i_10 = 2; i_10 < 9;i_10 += 1) /* same iter space */
                {
                    var_16 = (max(var_16, (arr_8 [i_10 - 1] [i_8 - 1] [i_6] [i_5 + 1])));

                    for (int i_11 = 3; i_11 < 9;i_11 += 1)
                    {
                        var_17 = (arr_10 [i_5 + 1] [i_6] [i_8] [i_10 - 1] [i_11]);
                        var_18 = 1;
                        var_19 = (max(var_19, ((((((-(arr_33 [i_10] [i_10])))) ? (arr_36 [4] [i_10 + 1] [i_8 + 1] [4] [3] [3]) : (arr_26 [i_5 - 1] [i_8 - 1]))))));
                        var_20 = (min(var_20, (arr_34 [i_11] [i_10] [i_5 + 1] [i_5 + 1])));
                        var_21 = -var_6;
                    }
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        var_22 &= ((!(arr_38 [i_8 + 2])));
                        var_23 = var_9;
                    }
                    arr_47 [1] [i_6] [i_8] [i_6] [i_6] [i_5] = (arr_25 [i_5 - 1]);
                }
                for (int i_13 = 2; i_13 < 9;i_13 += 1) /* same iter space */
                {

                    for (int i_14 = 1; i_14 < 11;i_14 += 1) /* same iter space */
                    {
                        var_24 = (min(var_24, (arr_28 [i_8] [i_8 + 1])));
                        var_25 = (min(var_25, ((-(arr_4 [i_14 + 1] [i_6])))));
                    }
                    for (int i_15 = 1; i_15 < 11;i_15 += 1) /* same iter space */
                    {
                        arr_55 [i_5] [i_13 - 2] [i_8 + 1] [i_5 + 1] [i_5] = (!2147483631);
                        var_26 = (arr_28 [i_5 - 1] [i_6]);
                        arr_56 [i_5] [i_6] [i_8] [i_13 + 1] [i_5] [i_5] = (1 * -1671095196);
                    }
                    arr_57 [i_5] = ((-(arr_9 [i_13] [5])));
                    arr_58 [i_5] [i_8] [i_6] [i_5] = ((-(arr_28 [i_6] [i_5 + 1])));
                }
                var_27 = (min(var_27, (arr_48 [i_5 - 1] [i_8 + 1] [i_8 + 1] [i_5 + 1])));
                arr_59 [i_5] = (((arr_46 [i_5] [i_8 + 1] [i_5 + 1] [i_5 + 1] [i_5] [i_5]) ? (arr_46 [i_5] [i_8 - 1] [i_5] [i_5 + 1] [i_5] [i_5]) : var_0));
            }
        }
        for (int i_16 = 0; i_16 < 12;i_16 += 1)
        {
            arr_62 [i_5] = (arr_32 [i_5] [i_5] [i_16]);
            arr_63 [i_5] = ((-(arr_4 [i_5 + 1] [i_16])));
            arr_64 [i_5] [i_5] = (0 / -29345);
        }
        for (int i_17 = 1; i_17 < 10;i_17 += 1)
        {
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    {
                        var_28 = (((arr_44 [i_5] [i_17 - 1] [i_18] [i_18] [i_19]) ? (((2 ? -1668304348 : -1671095191))) : (arr_53 [i_17 + 2] [0] [i_17 - 1] [i_5 - 1] [i_17] [i_17] [i_5 - 1])));
                        var_29 = (min(var_29, (arr_0 [i_17 - 1] [i_5 - 1])));
                        arr_75 [i_5] = ((-1537724103 ? var_8 : 4077795109));
                        var_30 = (max(var_30, (((var_8 >> ((((var_7 ? (arr_68 [i_19] [i_18] [2]) : var_8)) - 1345548621)))))));
                        var_31 = (max(var_31, (arr_25 [i_17 - 1])));
                    }
                }
            }
            arr_76 [i_5] = -var_4;
        }
    }
    for (int i_20 = 2; i_20 < 13;i_20 += 1)
    {
        var_32 = (min(var_32, ((max(((((max(-269095130, 1)) >= (arr_1 [i_20])))), (max((max((arr_0 [i_20] [i_20 + 2]), var_0)), var_7)))))));
        arr_80 [15] = ((((((((arr_3 [i_20]) == 1668304353)) ? ((var_2 + (arr_3 [i_20]))) : (((max(var_6, (arr_1 [i_20 + 1])))))))) ? (((!(arr_4 [0] [i_20 - 2])))) : (arr_77 [i_20])));
    }
    for (int i_21 = 1; i_21 < 16;i_21 += 1)
    {
        var_33 -= ((((((arr_82 [0]) ? ((((arr_82 [6]) ? var_7 : var_5))) : var_8))) ? (min(1, 1668304369)) : (arr_81 [1])));
        var_34 = -var_8;
        var_35 &= (((max(((-(arr_82 [10]))), (arr_81 [12]))) ^ ((((arr_82 [2]) != var_8)))));
    }
    var_36 = (max(var_36, (4077795109 & 179788019160596826)));
    var_37 = ((~((var_6 ? var_6 : var_1))));
    #pragma endscop
}
