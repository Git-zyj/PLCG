/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_1 [i_0]);

        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_12 = -var_1;
                arr_9 [i_2] [i_0] [i_2] [i_0] = (~var_0);
                arr_10 [i_0] [i_1 - 1] [i_2] = 1874868550;
                arr_11 [5] [i_1] [i_1] [i_0] = ((var_8 ? ((var_1 ? 38 : (arr_0 [i_1 - 2]))) : (((-1874868551 != (arr_5 [i_0] [i_0] [3]))))));
            }
            arr_12 [i_1 + 1] [i_0] = (max((~var_11), var_5));
            var_13 = var_4;
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            arr_15 [i_3] = ((max((arr_4 [i_0]), var_0)));
            var_14 = (arr_4 [i_0]);
            arr_16 [i_0] [i_3] [i_0] = 1874868555;
            var_15 = (arr_14 [i_3] [i_0]);
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_16 = (arr_4 [i_4]);
            var_17 = (max(var_17, (((6 != (arr_8 [i_0]))))));

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_18 = (arr_14 [i_0] [i_4]);
                arr_23 [11] = ((!(arr_14 [i_0] [i_0])));
            }
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        {
                            arr_31 [i_0] [i_0] [i_7] [i_0] [14] = (((((var_3 ? 43677 : (arr_17 [i_7])))) ? (arr_7 [i_0] [i_4] [i_6]) : var_1));
                            arr_32 [8] [i_7] [i_7] [i_6] [i_7] [0] = ((!(arr_4 [i_0])));
                            var_19 = var_0;
                        }
                    }
                }

                for (int i_9 = 1; i_9 < 19;i_9 += 1)
                {
                    var_20 = (min(var_20, (arr_25 [i_0] [0] [i_0])));
                    var_21 = 1874868560;
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        arr_39 [i_0] [i_10] [i_0] [10] [i_0] = (arr_8 [i_0]);
                        arr_40 [i_0] [i_4] [i_6] [i_10] [i_10] = var_5;
                        var_22 = (~var_4);
                    }
                    for (int i_12 = 1; i_12 < 18;i_12 += 1) /* same iter space */
                    {
                        var_23 = (arr_29 [i_12] [i_12] [i_10] [i_10] [i_10] [i_6]);
                        arr_43 [i_0] [i_10] [i_0] [10] [i_0] [i_10] [5] = ((1874868560 ? 0 : 1874868550));
                    }
                    for (int i_13 = 1; i_13 < 18;i_13 += 1) /* same iter space */
                    {
                        arr_46 [i_0] [i_0] [i_4] [i_0] &= (arr_29 [i_0] [i_4] [i_6] [i_13 - 1] [i_13] [i_6]);
                        var_24 = ((~(arr_30 [i_0] [i_4] [i_4] [i_6] [i_4] [i_13 + 2])));
                        var_25 += ((arr_5 [i_13 + 1] [i_13] [i_13 - 1]) ? -1874868560 : var_5);
                        arr_47 [i_6] [i_6] &= (~var_4);
                    }
                    var_26 = (min(var_26, (((var_1 ? var_0 : (arr_4 [i_10]))))));
                    var_27 &= var_10;
                    var_28 = var_0;
                }

                for (int i_14 = 2; i_14 < 18;i_14 += 1)
                {
                    var_29 = (18446744073709551593 > -96);
                    var_30 = ((~(arr_20 [i_4])));

                    for (int i_15 = 0; i_15 < 20;i_15 += 1)
                    {
                        var_31 = 22;
                        var_32 = (arr_20 [i_0]);
                        var_33 = arr_22 [14] [i_6] [i_6] [i_4];
                    }
                    for (int i_16 = 0; i_16 < 20;i_16 += 1)
                    {
                        arr_56 [i_0] [i_4] [9] [i_6] [i_6] [i_14] [i_16] &= var_5;
                        arr_57 [i_0] [i_0] [i_0] [i_0] [i_0] = var_7;
                        arr_58 [i_14] [i_14] = ((var_4 > (!30)));
                        var_34 = var_2;
                    }
                    var_35 += var_11;
                }
                for (int i_17 = 4; i_17 < 17;i_17 += 1)
                {
                    var_36 = (arr_59 [i_17 + 1] [i_17] [i_17] [i_17 - 1]);
                    var_37 = (max(var_37, (arr_18 [i_17 + 3])));
                    var_38 = 18446744073709551586;
                }
                var_39 = (max(var_39, var_0));
            }
            arr_61 [i_4] [i_0] &= -var_7;
            var_40 = (arr_28 [i_0] [i_0] [i_4] [i_4] [i_0] [1] [1]);
        }
        var_41 = (((((+(max((arr_21 [i_0] [i_0] [i_0] [i_0]), var_6))))) ? ((((((-127 - 1) ? var_8 : -1874868561))))) : -686198050));
    }
    for (int i_18 = 0; i_18 < 10;i_18 += 1)
    {
        arr_65 [i_18] = (max(var_3, ((+(((arr_6 [i_18]) + (arr_60 [i_18] [i_18] [i_18] [i_18])))))));

        for (int i_19 = 0; i_19 < 10;i_19 += 1)
        {
            var_42 = 18;
            arr_69 [i_19] &= ((~(((arr_67 [i_19] [i_19] [i_19]) | -1874868547))));
            arr_70 [i_18] = 18446744073709551575;
        }
        arr_71 [i_18] = (((-(max(var_11, var_10)))) > ((((var_3 - 100) ? (arr_17 [i_18]) : (arr_68 [i_18] [i_18])))));
        var_43 = ((18446744073709551586 ? -1874868556 : 28625));
    }
    for (int i_20 = 0; i_20 < 20;i_20 += 1)
    {
        var_44 += arr_2 [i_20];
        arr_76 [i_20] [i_20] = (var_3 != (((arr_51 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20]) ^ (arr_51 [8] [i_20] [i_20] [i_20] [8] [i_20]))));
    }
    var_45 = ((-((var_11 ? ((var_8 ? 18446744073709551581 : var_4)) : (~6755399441055744)))));
    #pragma endscop
}
