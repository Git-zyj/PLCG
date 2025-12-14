/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_8 [i_1] [i_1] [i_1] = 2619444223;
            arr_9 [i_1] = ((((-((-(arr_1 [i_1] [12]))))) * (((-(arr_0 [i_0 + 3]))))));
        }
        arr_10 [i_0 - 1] = (~-2143072288);

        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            var_16 = (((arr_4 [i_2] [i_2]) ? (arr_2 [i_0 + 4]) : (max(var_15, (arr_7 [i_2 + 2] [i_0 + 1])))));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        var_17 = (max(var_17, (arr_0 [i_0 - 2])));
                        arr_18 [i_0] [i_2 + 2] [i_0] [i_3] = ((min((arr_1 [i_2 - 2] [i_0 + 1]), (arr_1 [i_3 + 2] [i_4]))));
                        var_18 = ((min((arr_13 [i_3] [i_3 + 1] [i_2 + 1] [i_0 + 4]), (arr_13 [i_4] [i_3 + 1] [i_2 + 1] [i_0 + 1]))));
                    }
                }
            }
        }

        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 15;i_7 += 1)
                {
                    {
                        arr_27 [i_0 + 1] [i_6] [i_5] [i_6] [i_6 - 2] [i_7 - 2] = var_6;
                        arr_28 [i_7] [i_6] [15] [15] = (((((arr_6 [i_0] [i_5] [0]) ? (arr_1 [i_6] [i_5]) : (~var_15))) < (arr_1 [2] [i_5 - 1])));
                        var_19 = -var_4;
                        var_20 &= ((4279155061 || (((((arr_15 [i_0 + 3] [1] [i_0] [i_0]) ? var_0 : (arr_21 [1])))))));
                    }
                }
            }
            arr_29 [i_5] [i_0] = (((!65532) ? ((3082286622 ? (arr_23 [1] [i_0 + 4]) : (arr_23 [0] [i_0 + 1]))) : (min(var_6, (arr_23 [12] [i_0 + 1])))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
        {
            var_21 &= (((arr_19 [i_0 - 1] [i_8]) ? (arr_19 [i_0 - 2] [i_0 - 2]) : var_2));
            var_22 = 50;
            arr_32 [i_8] [i_0] &= (arr_3 [i_0 + 1]);
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_10 = 1; i_10 < 16;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 15;i_12 += 1)
                    {
                        {
                            arr_44 [i_0 + 4] [i_0] [i_10] [i_0] [i_10] = 3082286622;
                            var_23 = ((1 ? (var_14 + 33753081) : var_3));
                            arr_45 [i_0] [i_0 + 1] [i_10] = ((((var_14 <= (arr_17 [i_10] [i_12] [1] [i_10] [i_12] [i_12]))) || (arr_31 [i_10 + 1] [i_10 + 1] [1])));
                        }
                    }
                }
            }
            arr_46 [i_0 + 1] [i_9] = (((arr_14 [i_0 - 1] [1]) ? (arr_14 [i_0] [14]) : (arr_14 [12] [0])));
        }
    }
    for (int i_13 = 2; i_13 < 13;i_13 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            var_24 = (((arr_42 [i_13] [i_13] [i_13] [1] [i_14] [i_14] [i_13]) && (arr_14 [i_13 - 1] [10])));
            arr_52 [i_13] [i_14] [2] = (arr_42 [i_13 - 1] [i_13] [i_13 - 1] [i_13 + 3] [i_13] [i_13] [i_13 - 2]);
        }
        var_25 = (min((((arr_41 [i_13 + 1] [i_13 - 2] [5] [i_13 - 2]) | (arr_41 [i_13 - 2] [i_13 + 4] [i_13 + 1] [i_13 + 3]))), (min((arr_41 [i_13 - 2] [i_13 + 1] [i_13] [i_13 + 2]), var_11))));
        arr_53 [15] [15] = 15812235;
    }
    var_26 = var_8;
    #pragma endscop
}
