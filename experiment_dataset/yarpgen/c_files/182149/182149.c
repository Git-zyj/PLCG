/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_10 = ((65535 ? (arr_2 [i_0] [i_0]) : (arr_0 [i_0])));

        for (int i_1 = 4; i_1 < 6;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 9;i_4 += 1)
                    {
                        {
                            var_11 = var_7;
                            var_12 = (max(var_12, ((var_9 % (arr_12 [1] [i_3 + 1] [i_1 - 3] [i_1] [i_1])))));
                        }
                    }
                }
                var_13 = (min(var_13, ((((arr_3 [i_1 - 3] [i_1 - 2] [i_1 - 3]) > (arr_3 [i_1 - 4] [i_1 - 1] [i_1 - 1]))))));
                var_14 = (!-1880603373);
                arr_14 [i_0] [i_0] = (arr_12 [i_0] [i_1 - 4] [i_2] [i_2] [i_2]);
            }
            var_15 = (((59863 <= -42) ? (1 - 222) : (((arr_1 [i_0]) - -118))));
        }
        for (int i_5 = 1; i_5 < 7;i_5 += 1)
        {
            var_16 = (((arr_13 [i_0] [i_5 - 1]) ^ (arr_13 [i_0] [i_5 + 1])));
            var_17 = -var_4;
            var_18 = (((arr_8 [i_0] [i_5 + 3]) && (arr_8 [i_0] [i_0])));
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            var_19 = (((arr_4 [i_0]) ? ((var_1 << (var_1 - 1846382013))) : 118));
            arr_20 [i_0] = var_9;
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            arr_23 [i_0] [i_7] [i_7] = (((arr_6 [i_0] [i_0] [i_0]) ? (arr_13 [i_0] [i_7]) : (arr_22 [i_0])));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 8;i_9 += 1)
                {
                    {
                        arr_28 [i_7] [i_0] = (arr_21 [i_9 - 1] [i_9 + 1]);
                        var_20 ^= 118;
                    }
                }
            }
            var_21 = (arr_8 [i_0] [i_0]);
        }
        var_22 = (var_9 ? (arr_1 [i_0]) : 102);
        var_23 = (arr_27 [i_0] [i_0] [i_0] [i_0] [7]);
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_11 = 1; i_11 < 7;i_11 += 1)
        {
            var_24 = ((((((arr_30 [i_10] [i_10]) ? var_6 : -118))) ? ((-118 ? 117 : var_3)) : var_5));
            arr_35 [i_10] [i_11] = (arr_10 [i_10] [i_11 - 1] [i_10] [i_10] [i_10] [i_10] [5]);
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            var_25 = var_6;
            var_26 = ((118 * ((((arr_38 [i_10]) < (arr_21 [i_10] [i_12]))))));

            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                arr_42 [i_10] [i_12] [i_12] = (arr_5 [i_10] [i_12]);
                var_27 = 117;

                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    var_28 = 124;
                    var_29 = (((((var_7 ? var_5 : 124))) != var_8));
                }
            }
        }
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 10;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 10;i_17 += 1)
                {
                    {
                        var_30 = 125;

                        for (int i_18 = 3; i_18 < 7;i_18 += 1)
                        {
                            arr_55 [i_10] [2] |= (max(var_1, (((var_7 < (((arr_19 [i_10] [4] [i_15]) ? var_4 : -103)))))));
                            var_31 ^= var_9;
                            arr_56 [i_18] [i_17] [i_18] [i_18] [i_18] [i_18] [i_18 - 1] = ((((min((arr_45 [6] [i_18 + 2] [i_18 + 3] [i_18 + 2]), (arr_27 [i_18 + 2] [i_18] [i_18] [i_18] [i_18])))) ? ((-123 ^ (arr_45 [i_18] [i_18 + 3] [1] [i_18 - 1]))) : (max(var_0, (arr_9 [i_17] [1] [i_18 + 2] [i_18 + 2] [i_18 - 2] [i_17])))));
                            arr_57 [i_17] = var_2;
                        }
                    }
                }
            }
            arr_58 [i_15] [i_15] [i_10] = (arr_50 [1] [i_15]);
        }
        var_32 = (max((max((arr_47 [1] [i_10] [i_10]), (var_4 ^ var_6))), (((min(var_9, 117))))));
    }
    /* vectorizable */
    for (int i_19 = 0; i_19 < 1;i_19 += 1) /* same iter space */
    {
        var_33 = (-120 - -118);
        var_34 = var_3;
    }
    for (int i_20 = 0; i_20 < 1;i_20 += 1) /* same iter space */
    {
        var_35 += (((var_9 ? (arr_61 [i_20] [i_20]) : var_4)));
        var_36 = ((((((arr_63 [i_20]) - 117)) / var_7)));
    }
    var_37 = (((max(((var_4 ? var_3 : var_4)), ((max(var_6, var_0))))) >> ((((min(var_8, var_6))) + 127634439923857388))));

    for (int i_21 = 0; i_21 < 1;i_21 += 1)
    {
        /* LoopNest 2 */
        for (int i_22 = 0; i_22 < 16;i_22 += 1)
        {
            for (int i_23 = 2; i_23 < 14;i_23 += 1)
            {
                {
                    var_38 = (arr_61 [i_23] [i_22]);
                    arr_73 [6] [i_21] = ((!(max((arr_65 [i_21]), (arr_68 [i_21] [4] [i_23])))));
                }
            }
        }
        var_39 = (min(var_39, ((((min(var_4, (arr_67 [i_21]))) | (((118 ? (arr_67 [i_21]) : (arr_67 [i_21])))))))));
    }
    #pragma endscop
}
