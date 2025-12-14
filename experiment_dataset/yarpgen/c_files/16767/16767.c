/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_14;
    var_16 = ((var_9 ? var_12 : (!var_2)));
    var_17 = var_13;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            var_18 *= var_3;
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_13 [i_1] = 56;
                        var_19 = (min(((0 ? (arr_8 [i_1]) : (!var_6))), (!-1)));
                        arr_14 [i_0] [i_1] [i_1] [i_3] = (~(min((var_6 > var_1), var_8)));
                        arr_15 [6] [i_1] [i_1] [i_3] [i_1 - 1] = ((((!(arr_8 [i_1])))));
                    }
                }
            }
            arr_16 [i_1] = (min((min(2003766647, (arr_10 [9] [i_1 + 1] [i_1] [i_1 + 3] [i_1]))), (((~(arr_9 [i_0] [i_1 + 3] [i_1] [i_1 + 3] [i_1]))))));
        }

        for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
        {
            arr_19 [3] [i_4] = (min(-1, ((((var_12 ? 83 : 189))))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 11;i_7 += 1)
                    {
                        {
                            var_20 = (max(var_20, var_2));
                            arr_29 [i_0] [1] [i_0] [i_0] [i_4] = 83;
                        }
                    }
                }
            }
            arr_30 [i_4] [i_4] [i_4] = (min((!var_6), ((!(((-1 ? -100 : var_13)))))));
        }
        for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_9 = 1; i_9 < 9;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_21 = (min(var_21, (((((min(-var_0, var_3))) >= ((-(min(var_5, 0)))))))));
                            arr_40 [i_11] = (75 % -5896776118560411972);
                            var_22 = (arr_32 [i_0] [i_0] [i_0]);
                            arr_41 [i_11] [i_11] [i_11] [i_11] [i_8] [i_0] = (min(-2003766648, -18));
                            arr_42 [i_0] [i_11] [i_9] [1] [1] = (min(2003766647, ((min(0, 92366611)))));
                        }
                    }
                }
            }
            var_23 = (((((((min(-1, (arr_8 [1])))) ? (min((arr_23 [1] [i_8] [i_0] [i_8] [i_8] [6]), -1)) : (-116 == -91)))) % var_2));
            var_24 = (((((((min((arr_21 [i_0] [i_0] [i_0] [i_0]), var_8))) ? (((-127 - 1) ? var_10 : 2315769150793047306)) : (arr_21 [i_0] [i_0] [i_8] [6])))) ? (((~((var_12 ? 7998 : 60747))))) : (((arr_36 [i_0] [0] [i_0] [i_0]) ? ((((arr_8 [2]) ? (arr_20 [i_0] [i_0] [2]) : (arr_9 [i_0] [0] [4] [6] [i_0])))) : (var_8 | 4294967268)))));
        }
        for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
        {
            arr_45 [i_12] [i_12] = (115 >= var_7);
            arr_46 [0] [i_12] [0] = ((+(min((arr_1 [i_12]), (arr_36 [i_0] [i_12] [i_12] [i_12])))));
            arr_47 [i_12] [i_12] [i_12] = ((-(arr_43 [i_0] [i_0] [i_12])));

            /* vectorizable */
            for (int i_13 = 3; i_13 < 11;i_13 += 1)
            {
                var_25 = (var_2 | -1);
                arr_50 [i_12] = (((arr_12 [i_13 - 2] [i_13 + 1] [i_13 - 2] [i_13]) ? (arr_12 [i_13 - 2] [i_13 + 1] [i_13 - 2] [2]) : (arr_12 [i_13 - 2] [i_13 + 1] [i_13 - 2] [i_13 - 2])));
            }
            /* vectorizable */
            for (int i_14 = 0; i_14 < 12;i_14 += 1)
            {
                var_26 ^= (arr_49 [i_0] [i_12] [i_12] [i_14]);
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 12;i_15 += 1)
                {
                    for (int i_16 = 4; i_16 < 11;i_16 += 1)
                    {
                        {
                            var_27 |= ((-(arr_33 [i_0])));
                            var_28 = (((arr_2 [i_12] [i_16 - 4]) ? (arr_2 [i_12] [i_16 + 1]) : (arr_2 [i_12] [i_16 + 1])));
                            var_29 = (arr_28 [i_16 - 2] [i_16] [i_16 - 1] [i_15] [i_15]);
                        }
                    }
                }
            }
            for (int i_17 = 0; i_17 < 12;i_17 += 1)
            {

                /* vectorizable */
                for (int i_18 = 0; i_18 < 12;i_18 += 1)
                {
                    var_30 = (!var_0);
                    arr_66 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] = 37;
                    arr_67 [i_0] [i_0] [i_17] [i_12] = (((((6252 ? -90 : 0))) ? (arr_22 [i_0] [i_12]) : (var_9 || var_9)));
                    arr_68 [i_12] [i_12] [i_17] [9] = (((91 % 3478645789457388969) == (((arr_52 [i_0] [i_12] [i_0]) ? var_7 : (arr_62 [7] [i_12] [i_17] [i_18])))));
                }
                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    arr_71 [i_12] = (~0);
                    arr_72 [i_19] [i_12] [i_12] [i_0] = -1;
                    var_31 = ((!(arr_31 [11] [i_12] [i_17])));
                    var_32 = 2147483644;
                    var_33 = -4294967295;
                }
                arr_73 [i_0] [i_12] [i_12] = var_9;
                var_34 = var_2;
            }
            for (int i_20 = 0; i_20 < 1;i_20 += 1)
            {
                arr_76 [i_12] [i_12] [i_12] = -116;
                var_35 = (min(((((arr_48 [i_0] [i_12]) || 22488))), (min(-714603388, var_2))));
            }
        }
        arr_77 [i_0] = (!(((((min((arr_25 [0]), 63))) ? (((((arr_59 [i_0] [i_0] [0] [6] [i_0]) && (arr_31 [i_0] [i_0] [i_0]))))) : ((14913238193811739485 ? 1 : var_12))))));
    }
    for (int i_21 = 0; i_21 < 1;i_21 += 1) /* same iter space */
    {
        arr_81 [i_21] = (~483244981);
        /* LoopNest 3 */
        for (int i_22 = 0; i_22 < 12;i_22 += 1)
        {
            for (int i_23 = 1; i_23 < 11;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 12;i_24 += 1)
                {
                    {
                        var_36 = (((((~(arr_89 [i_22] [i_23] [i_23 + 1] [i_23] [i_23 - 1] [i_23 - 1])))) ? (((min(-55, (arr_36 [i_23 + 1] [i_23 + 1] [i_23 + 1] [i_23 + 1]))))) : (min(var_1, (arr_31 [i_23 - 1] [i_23 + 1] [i_23 - 1])))));
                        var_37 = (((min(((~(arr_0 [i_22]))), 238)) * (!58)));
                        var_38 = min((min(var_9, (arr_37 [i_21] [i_23 - 1] [i_23 - 1] [5]))), -var_5);
                        arr_90 [i_21] [1] [i_23] [i_24] = 6355718670353040594;
                        var_39 = 13609985978503918530;
                    }
                }
            }
        }
        arr_91 [i_21] = ((!((min((-1 && var_2), var_7)))));
        var_40 = ((-(min((((!(arr_21 [i_21] [i_21] [i_21] [i_21])))), var_8))));
    }
    #pragma endscop
}
