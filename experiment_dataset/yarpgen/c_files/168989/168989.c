/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((~(max((arr_1 [i_0 - 2]), var_11))));
        var_16 -= ((((((1152921504606846944 / (arr_1 [i_0])))) && ((min(174, var_0))))));
    }
    for (int i_1 = 2; i_1 < 7;i_1 += 1)
    {
        arr_6 [i_1] = ((~(arr_4 [i_1])));

        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            arr_10 [i_2] [i_1] [i_2] = (arr_4 [i_1 - 1]);
            arr_11 [i_2] [i_2] = ((!(((-(((arr_5 [i_2]) ? 17293822569102704662 : (arr_4 [i_1]))))))));
            var_17 = (max(var_17, (arr_8 [i_2] [i_2])));
            var_18 = (!4294967295);
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_19 = 17293822569102704649;
            arr_14 [i_3] = 0;

            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                var_20 = (arr_16 [i_1] [i_1 - 1] [i_4]);
                arr_17 [i_3] [i_3] [i_4] = 48839;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 8;i_6 += 1)
                    {
                        {
                            arr_25 [i_1] [i_3] [i_4] [i_5] [i_3] = (max(((~(arr_3 [i_1 - 2] [i_6 + 2]))), ((max((arr_22 [i_3] [i_6 - 3] [i_6] [i_6] [i_6] [i_6] [i_6]), (arr_9 [i_1 - 2] [i_6 + 2]))))));
                            var_21 = ((~(max(var_2, ((6771946846375334164 ? (arr_16 [i_1] [i_3] [i_4]) : (arr_5 [i_6])))))));
                        }
                    }
                }
                arr_26 [i_1] [i_3] [i_3] [i_3] = 4294967295;
            }
            for (int i_7 = 1; i_7 < 7;i_7 += 1)
            {

                /* vectorizable */
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    var_22 = ((~(arr_31 [i_3] [i_3] [i_7 - 1] [i_8] [i_1 + 3] [i_3])));
                    var_23 = var_6;
                }
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    arr_35 [i_3] [i_9] [i_3] [i_9] [i_7] = ((((max((((arr_34 [i_1] [i_3]) ? (arr_28 [i_1] [i_7] [i_9]) : var_5)), (~0)))) ? 48839 : (arr_15 [i_1] [i_3] [i_9])));
                    var_24 = (!-0);
                    var_25 = (arr_32 [i_3] [i_7 + 3] [i_7]);
                }
                var_26 -= var_4;
                arr_36 [i_7] [i_3] [i_7] = (arr_19 [i_1] [i_1] [i_1] [i_1]);
                var_27 = (((((arr_19 [i_7 + 2] [i_7 - 1] [i_3] [i_1]) || (arr_19 [i_1 - 1] [i_3] [i_7] [i_1]))) || (((arr_19 [i_1 + 3] [i_3] [i_7] [i_3]) || (arr_19 [i_1] [i_3] [i_7] [i_7 + 1])))));
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        {
                            arr_45 [i_12] [i_1] [i_10] [i_3] [i_12] = (((var_15 - 158) == -10887042831900232213));
                            arr_46 [i_1] [i_3] = (arr_3 [i_1] [i_10]);
                            var_28 = 4294967293;
                            arr_47 [i_1] [i_3] [i_10] [i_3] = (0 << 4);
                        }
                    }
                }
                arr_48 [i_3] [i_1] |= (((((-(arr_12 [i_10])))) ? (arr_5 [i_1]) : (arr_37 [i_1] [i_1 + 2] [i_10])));
            }
            for (int i_13 = 0; i_13 < 10;i_13 += 1) /* same iter space */
            {
                var_29 = (((((-(arr_13 [i_3] [i_13])))) ^ ((-27401 ? (arr_8 [i_1 - 2] [i_1]) : (arr_8 [i_1 + 3] [i_13])))));

                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    arr_53 [i_3] [i_3] [i_13] [i_14] [i_13] [i_13] = -125;
                    arr_54 [i_14] [i_3] [i_3] [i_1] = 39;
                }
                /* vectorizable */
                for (int i_15 = 0; i_15 < 10;i_15 += 1)
                {
                    var_30 = (((arr_28 [i_1 + 2] [i_1] [i_1]) != (arr_28 [i_1 + 2] [i_1] [i_1])));
                    var_31 -= (~-9059139180640286431);
                    arr_58 [i_1] [i_3] [i_13] [i_15] [i_15] [i_13] = (arr_15 [i_13] [i_3] [i_1 + 2]);
                    var_32 = (min(var_32, (((-var_15 ? (arr_13 [i_1] [i_1 - 1]) : var_10)))));
                }
                for (int i_16 = 1; i_16 < 7;i_16 += 1)
                {
                    arr_61 [i_1] [i_1] |= ((1 ? var_3 : ((1 ? 1023 : 4294967295))));
                    arr_62 [i_1] [i_1] [i_1] [i_3] = arr_42 [i_1] [i_3] [i_13] [i_16];
                    var_33 = var_12;
                }
            }
        }
        var_34 |= 4294967278;
        arr_63 [i_1] = ((-(-1819084250 <= 0)));
    }
    var_35 = (max((max(var_0, (0 & -295))), ((((((var_8 ? var_14 : 8710041139120887297))) || var_10)))));
    /* LoopNest 2 */
    for (int i_17 = 2; i_17 < 15;i_17 += 1)
    {
        for (int i_18 = 3; i_18 < 15;i_18 += 1)
        {
            {
                var_36 = (arr_65 [i_17]);
                var_37 -= 1;
                arr_68 [i_18] = ((992 ? 2 : (((64477 << (((((arr_66 [i_18] [i_17]) >> (((arr_67 [i_18]) - 6955156348860803980)))) - 8008605912737)))))));
            }
        }
    }
    var_38 |= ((0 ? ((var_1 ? -12742 : var_0)) : var_0));
    #pragma endscop
}
