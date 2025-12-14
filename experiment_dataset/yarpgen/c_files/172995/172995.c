/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_10 += (max((((var_4 <= (!83)))), (((((-83 ? var_6 : var_4))) ? 83 : ((195982834 ? 22 : 65535))))));
        var_11 = (min(var_11, (arr_1 [i_0])));
    }
    var_12 = 8;
    var_13 = ((!(((max(224, 40698))))));
    var_14 = ((var_8 ? (((((var_7 ? var_8 : var_9))) ? var_5 : var_3)) : var_5));

    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_15 = (((((2147483647 ? var_6 : 1))) ? ((24838 ? 83 : (min(40695, var_5)))) : ((max(1, 1)))));
        arr_4 [1] = ((((64970 ? 1 : 40709))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_7 [i_2] [18] = ((80 ? 1 : (arr_2 [i_2] [i_2])));
        var_16 = var_0;

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_12 [i_2] = (!var_0);
            var_17 = (((((-5850 + 2147483647) >> (24838 - 24820))) + -var_7));
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    var_18 |= 1;
                    var_19 -= ((566 ? (arr_14 [i_5]) : 32));
                    var_20 ^= var_6;
                }
                var_21 = 24827;
            }
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    var_22 = -179367380;

                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        var_23 *= ((var_1 ? 1 : var_2));
                        var_24 = 60715;
                    }
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        var_25 += (((var_9 ? var_3 : var_7)));
                        arr_31 [i_2] [i_4] &= (((65518 != var_9) || (((var_7 ? var_1 : 1)))));
                    }
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        var_26 = ((8191 ? var_0 : -30));
                        var_27 = (~var_6);
                    }
                    var_28 = ((var_3 ? -var_4 : 112));
                    arr_34 [i_7] [i_7] [i_7] = (var_2 >> (((arr_28 [i_2] [15] [i_7] [i_7] [i_2] [i_8]) - 1492209839)));
                }
                var_29 = ((var_1 ? var_7 : var_3));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        {
                            arr_41 [i_13] [i_4] [i_13] [i_12] [i_13] [i_7] [i_2] = (((((2157259262 ? 43649 : 255))) && (!31138)));
                            arr_42 [i_7] [13] = 1;
                        }
                    }
                }
                var_30 += 48;
            }
            var_31 = (min(var_31, 16));
        }
        for (int i_14 = 0; i_14 < 19;i_14 += 1)
        {
            arr_46 [i_2] = 4117865387;
            var_32 = var_2;
            var_33 = ((!(arr_8 [5])));
        }
        arr_47 [i_2] = (arr_39 [i_2]);

        for (int i_15 = 0; i_15 < 19;i_15 += 1)
        {
            var_34 = (max(var_34, ((-(var_4 < 65526)))));
            arr_50 [i_2] [i_2] |= (~1795);
            var_35 += ((!(((var_8 - (arr_14 [i_15]))))));
        }
        for (int i_16 = 0; i_16 < 19;i_16 += 1)
        {
            arr_53 [i_2] [i_2] = 75203929;
            var_36 += -1269146037;
        }
        for (int i_17 = 0; i_17 < 19;i_17 += 1)
        {

            for (int i_18 = 0; i_18 < 19;i_18 += 1)
            {
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 19;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 19;i_20 += 1)
                    {
                        {
                            var_37 -= ((var_2 < (((-44591626 != (arr_10 [6] [i_17] [6]))))));
                            var_38 = (max(var_38, (((6687 ? var_8 : (arr_39 [i_20]))))));
                            arr_64 [i_2] [i_17] [i_18] [i_19] [i_18] [i_18] = ((-52 < (arr_17 [i_2] [i_17] [i_20])));
                        }
                    }
                }
                arr_65 [i_18] = ((1576088534 ? -3 : var_5));
                arr_66 [5] [17] [i_18] = (((((11893899539329602956 ? 64325 : -21))) ? -var_3 : ((var_2 ? var_9 : var_9))));
                arr_67 [i_18] = var_7;
                var_39 = -982207934;
            }
            arr_68 [i_2] [i_17] [i_17] = (var_8 < var_7);

            for (int i_21 = 0; i_21 < 19;i_21 += 1)
            {
                arr_72 [i_17] [i_17] [i_17] [i_21] = -var_8;
                var_40 = (((36838 ? var_5 : var_1)));
            }
            for (int i_22 = 0; i_22 < 1;i_22 += 1)
            {
                var_41 = (-85 | 989954375);
                arr_75 [i_2] [0] [i_22] [i_22] = (!0);
            }
            var_42 = ((var_8 ? 35 : (arr_71 [i_17])));
        }
    }
    #pragma endscop
}
