/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_13 = (((((((arr_0 [i_0 + 1] [i_0]) == (arr_0 [i_0 + 4] [i_0 - 2]))))) | (max(((~(arr_0 [i_0] [i_0]))), ((15 ? var_6 : -8597860532515566397))))));
        var_14 = (min(-10070, 30));
        var_15 = (((((var_5 ? var_8 : (arr_1 [i_0 + 1])))) * (min((arr_1 [i_0]), (arr_0 [i_0 + 3] [i_0 - 2])))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_16 *= (((arr_0 [i_0] [6]) ? (((arr_1 [i_0 + 1]) >> (126 - 73))) : (((arr_2 [i_0] [15] [i_1]) % (arr_1 [i_0])))));

            for (int i_2 = 3; i_2 < 21;i_2 += 1) /* same iter space */
            {
                var_17 = ((var_8 ? var_3 : (20 | 10059)));
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        {
                            var_18 = (min(var_18, (arr_9 [i_4] [i_0 + 2] [i_3 + 3])));
                            var_19 += (arr_1 [i_0 + 1]);
                            arr_10 [i_0] [i_0] [i_3] [i_3] = ((((((arr_9 [i_3] [i_1] [i_1]) ^ var_6))) && (arr_0 [i_0 + 3] [i_2 - 3])));
                            var_20 ^= (((arr_6 [i_0] [i_3] [i_0]) ? (arr_3 [21] [i_0 - 1]) : (arr_3 [i_2 + 1] [i_3 - 2])));
                        }
                    }
                }
                var_21 ^= (~-101);

                for (int i_5 = 4; i_5 < 20;i_5 += 1) /* same iter space */
                {
                    var_22 = (arr_4 [i_5] [i_2 - 3] [19] [i_0]);
                    arr_13 [i_0] [i_1] [i_2 + 1] [20] [15] = var_0;
                }
                for (int i_6 = 4; i_6 < 20;i_6 += 1) /* same iter space */
                {
                    arr_17 [i_0 - 1] [i_1] [i_1] [11] [i_6 - 2] = (arr_11 [i_0] [i_0] [i_0] [i_0] [1] [i_0]);
                    var_23 = ((((((arr_11 [i_0] [i_1] [i_2] [i_6] [i_6] [i_6]) / (arr_3 [i_1] [i_0])))) ? (arr_15 [i_2 + 1] [i_2]) : (arr_8 [i_6] [i_6 - 4] [i_0] [i_6] [8])));
                    var_24 *= (((var_6 < 1) ? (arr_6 [i_0] [i_2 - 3] [i_0]) : (((arr_0 [i_2] [i_2]) ? var_5 : var_0))));
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 22;i_8 += 1)
                    {
                        {
                            var_25 = (arr_1 [i_2 + 2]);
                            var_26 ^= (((arr_2 [i_2 - 1] [i_2] [i_2 - 1]) ? (arr_2 [i_2 - 1] [i_2] [i_2 - 1]) : (arr_2 [i_2 - 1] [i_2 - 1] [i_2 - 1])));
                            arr_24 [i_1] [20] [i_1] [i_1] = (~(arr_21 [i_0] [i_1] [i_2] [i_1] [i_8] [i_1] [i_8]));
                            var_27 = (max(var_27, (((((var_3 != (arr_1 [18]))) ? (arr_9 [i_7] [i_7] [i_2 - 2]) : (arr_9 [i_0] [i_8 - 1] [i_0]))))));
                            var_28 = (max(var_28, ((((arr_21 [i_2 + 1] [i_2 + 1] [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2 - 2]) ? (arr_14 [i_0] [i_0] [i_0] [i_2 - 1]) : (arr_4 [i_0 - 1] [i_1] [21] [i_7]))))));
                        }
                    }
                }
            }
            for (int i_9 = 3; i_9 < 21;i_9 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        {
                            var_29 = (var_0 ? (arr_18 [i_10] [i_0 + 2] [i_9 - 3]) : (arr_18 [i_0] [i_0 + 2] [i_9 - 3]));
                            arr_31 [i_0] [i_0] [i_0] [0] [i_0] = (((-4666251348580447843 ? 164 : 524912224)));
                            var_30 ^= ((0 ? (arr_14 [i_11] [i_11] [i_11] [i_9 + 1]) : ((((arr_11 [i_11] [i_10] [i_0] [i_0] [i_1] [i_0]) | (arr_25 [i_0]))))));
                        }
                    }
                }
                var_31 = (arr_15 [i_0] [i_1]);
                var_32 = (((arr_8 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1]) & (arr_2 [i_0] [i_0] [i_9 + 1])));

                for (int i_12 = 1; i_12 < 21;i_12 += 1) /* same iter space */
                {
                    var_33 = (min(var_33, var_0));
                    var_34 ^= (((arr_30 [i_12 - 1]) ? (arr_9 [i_0] [i_1] [i_1]) : (arr_32 [i_0] [i_0] [i_9 + 2] [22])));
                }
                for (int i_13 = 1; i_13 < 21;i_13 += 1) /* same iter space */
                {
                    var_35 = ((((var_9 ? (arr_21 [i_0] [i_1] [14] [i_9] [i_9] [i_13 + 2] [i_13]) : (arr_14 [i_0] [i_0] [i_0] [i_0 - 1]))) | (arr_0 [i_1] [i_0 - 2])));
                    var_36 = (max(var_36, ((((arr_4 [i_13 + 2] [i_13 - 1] [i_13 - 1] [i_13]) >= ((((arr_32 [i_0] [i_1] [i_1] [i_1]) ? (arr_32 [i_0] [i_1] [i_1] [i_1]) : (arr_3 [i_0 + 1] [i_1])))))))));
                }
            }
        }
        arr_38 [i_0] = (min((max((arr_20 [i_0] [i_0 + 1] [i_0 - 2] [i_0 + 1]), (arr_6 [i_0] [i_0 + 1] [i_0]))), (arr_20 [i_0] [i_0 - 1] [4] [i_0 + 4])));
    }
    for (int i_14 = 1; i_14 < 13;i_14 += 1)
    {
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 16;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 16;i_16 += 1)
            {
                {
                    arr_46 [i_15] [i_15] = (((arr_18 [i_14 + 2] [i_14 - 1] [i_14 + 3]) ? (arr_18 [i_14] [i_14 - 1] [i_14 + 3]) : (((arr_18 [i_14] [i_14 - 1] [i_14 + 3]) ^ (arr_18 [i_14 + 3] [i_14 - 1] [i_14 + 3])))));
                    arr_47 [i_15] [i_16] = (min(15811, (min((arr_32 [i_15] [i_15] [i_15] [i_15]), (arr_32 [i_15] [i_15] [i_16] [i_16])))));
                }
            }
        }
        arr_48 [9] = (min(((((var_8 ? var_7 : var_11)))), ((((var_10 ? var_3 : (arr_19 [i_14] [i_14] [i_14]))) * (arr_45 [i_14 + 2] [i_14 - 1])))));
    }
    var_37 += var_2;

    for (int i_17 = 3; i_17 < 15;i_17 += 1)
    {
        var_38 ^= ((min((((arr_30 [i_17]) ? var_8 : var_7)), ((((arr_50 [4]) || 49))))) - (((max((arr_7 [22] [22] [i_17 + 1] [2]), (arr_7 [i_17 - 3] [i_17 - 3] [i_17 - 1] [i_17]))))));
        var_39 = var_0;
        var_40 = (max(var_40, (((((((arr_19 [i_17] [i_17] [i_17 - 2]) ? -15813 : 17140157212042388204))) ? (((min((arr_18 [i_17] [i_17 - 2] [i_17 + 1]), (min((arr_21 [i_17] [16] [i_17] [i_17] [i_17] [16] [i_17]), var_7)))))) : var_5)))));
    }
    for (int i_18 = 0; i_18 < 14;i_18 += 1)
    {
        /* LoopNest 3 */
        for (int i_19 = 1; i_19 < 11;i_19 += 1)
        {
            for (int i_20 = 1; i_20 < 11;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 14;i_21 += 1)
                {
                    {
                        var_41 = (min(var_41, var_8));
                        var_42 = var_2;
                        var_43 = (min((min((((arr_3 [i_19 + 1] [i_19 + 1]) / (arr_34 [14]))), (((~(arr_42 [i_18] [i_20 + 3])))))), ((((0 | var_0) && (arr_12 [i_21] [14] [i_19]))))));
                    }
                }
            }
        }
        arr_63 [i_18] = ((~(arr_60 [i_18] [i_18] [i_18])));
    }
    #pragma endscop
}
