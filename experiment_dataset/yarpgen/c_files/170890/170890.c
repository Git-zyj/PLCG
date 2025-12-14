/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 = ((!(((arr_0 [i_0]) <= var_0))));
        arr_3 [i_0] = var_4;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
        {
            var_20 *= ((!(arr_5 [i_0] [i_1])));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 11;i_3 += 1)
                {
                    {
                        var_21 = (max(var_21, ((var_17 ? (arr_7 [i_0] [i_1] [i_2 + 1]) : (arr_10 [i_0])))));
                        arr_12 [i_2] [i_2] [i_0] [i_3] [i_1] &= ((var_8 <= (arr_6 [i_1] [i_1])));
                    }
                }
            }

            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_22 = var_3;
                            var_23 = (max(var_23, ((((arr_20 [14] [14] [i_0] [i_0] [i_4 + 2]) > (arr_17 [i_0] [i_0] [i_1]))))));
                            var_24 |= var_15;
                        }
                    }
                }
                var_25 ^= ((12872886750509411594 ? 14220160843929049899 : 30002));
                arr_21 [i_0] [i_1] [i_4 - 1] [i_1] = (((((arr_11 [i_4] [i_0] [i_0] [i_0]) ? var_3 : (arr_4 [i_4]))) % var_5));
            }
            for (int i_7 = 1; i_7 < 11;i_7 += 1)
            {
                arr_24 [i_1] = (arr_9 [13] [12] [i_7 - 1] [i_1] [i_0]);
                var_26 = var_15;
                /* LoopNest 2 */
                for (int i_8 = 4; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 12;i_9 += 1)
                    {
                        {
                            var_27 = (~var_2);
                            arr_32 [i_0] [i_7 - 1] [i_7 + 1] [1] [i_1] [i_0] [i_0] = var_8;
                        }
                    }
                }
                var_28 ^= ((((((arr_22 [i_1] [i_0]) ? (arr_19 [i_0] [i_0] [i_0] [i_1] [i_0]) : (arr_22 [i_0] [i_0])))) ? var_18 : 2103116908));
                var_29 *= var_17;
            }

            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                arr_36 [i_0] [i_1] [i_0] = (~(~14220160843929049905));
                arr_37 [i_1] = 181;
            }
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                var_30 ^= (!var_16);
                arr_41 [i_1] [11] [i_1] = (((var_13 + 9223372036854775807) >> (((arr_4 [i_1]) - 17110))));
                arr_42 [i_0] [i_1] [i_1] = (arr_15 [i_11]);
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 14;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 11;i_13 += 1)
                    {
                        {
                            var_31 = var_9;
                            var_32 = (min(var_32, (((var_6 > (((1 > (arr_27 [i_1] [i_1] [i_11] [i_12] [i_13])))))))));
                        }
                    }
                }
            }
            for (int i_14 = 3; i_14 < 14;i_14 += 1)
            {

                for (int i_15 = 3; i_15 < 11;i_15 += 1)
                {
                    var_33 = (min(var_33, (((22158 ? -var_2 : 63166)))));
                    arr_54 [i_0] |= (arr_49 [i_0] [i_1] [i_14] [i_15]);
                    arr_55 [i_1] [i_1] = (((((4226583229780501717 ? 30011 : 1))) <= (arr_11 [i_0] [i_1] [i_14 + 1] [i_15 - 3])));
                }
                arr_56 [14] [14] [i_1] = (var_10 ^ ((((var_10 || (arr_51 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                var_34 = (4226583229780501705 - 5573857323200140021);
            }
            var_35 -= (arr_47 [i_0] [i_1]);
        }
        for (int i_16 = 0; i_16 < 15;i_16 += 1) /* same iter space */
        {
            arr_60 [i_16] = (((arr_50 [i_0] [i_0] [i_16]) >> (65528 - 65508)));
            arr_61 [i_0] [i_16] = (max((((arr_30 [i_0] [i_16]) + ((var_3 >> (((arr_30 [i_0] [i_16]) - 80)))))), (min((arr_14 [i_16] [i_16] [i_16]), (~123)))));
        }
        for (int i_17 = 3; i_17 < 13;i_17 += 1)
        {
            var_36 = (((arr_18 [i_0] [i_0] [i_0] [6]) ? (arr_30 [i_0] [i_0]) : (((!((max(var_4, 14))))))));
            var_37 += var_15;
            arr_65 [i_17] = (!1);
        }
    }
    /* LoopNest 3 */
    for (int i_18 = 0; i_18 < 12;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 12;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 1;i_20 += 1)
            {
                {
                    var_38 = var_15;
                    arr_73 [i_18] [i_18] [i_19] = var_8;
                    arr_74 [i_18] [i_19] = (((((((arr_16 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19]) ? (arr_16 [i_19] [i_19] [i_19] [i_18] [i_19] [8]) : (arr_16 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19]))))) ? (max((min(12872886750509411592, 76)), (arr_31 [i_18] [i_19] [i_19] [10] [i_20]))) : 241));
                    arr_75 [i_19] [i_18] = (arr_18 [i_18] [i_19] [i_19] [i_20]);
                    var_39 = (min((((~((min(-28468, 63458)))))), (((arr_70 [i_19]) ? var_9 : var_2))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_21 = 0; i_21 < 14;i_21 += 1)
    {
        for (int i_22 = 2; i_22 < 13;i_22 += 1)
        {
            {
                arr_80 [8] |= ((~(max(var_13, var_0))));
                arr_81 [i_22] [i_22] [i_22 - 2] = ((!((((arr_15 [i_22 - 1]) | (!10705))))));
                arr_82 [4] &= ((~(min((arr_51 [i_22 - 1] [i_21] [i_21] [i_21] [i_22]), (arr_1 [i_22 - 1])))));
            }
        }
    }
    var_40 = (max(var_40, (var_8 >= var_12)));
    #pragma endscop
}
