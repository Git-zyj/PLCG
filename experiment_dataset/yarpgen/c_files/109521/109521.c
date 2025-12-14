/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 0;

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_18 = (-(((-213 == (arr_1 [i_0])))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_12 [16] [i_0] [16] [i_2] [i_3] = ((((max(var_1, (max((arr_9 [i_0]), (arr_5 [0] [0] [i_3])))))) ? var_11 : ((18815 ? (arr_10 [i_0 - 1] [i_0 - 1] [i_1] [i_1 - 1]) : -1))));
                        var_19 = ((((max(-600909115, (((arr_8 [i_3] [i_0] [i_0]) ? 0 : (arr_4 [i_2] [i_0])))))) ? 13858 : ((~(arr_3 [i_0] [i_1 - 1])))));
                        var_20 -= -13858;
                    }
                }
            }
        }
        arr_13 [i_0] = (+((min((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_0])))));
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_21 += (80 / 2113908098);

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_21 [i_4] [i_5] [i_5] = (arr_3 [i_5] [i_5]);
            var_22 = 51410;
        }
        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {

            for (int i_7 = 1; i_7 < 15;i_7 += 1)
            {
                var_23 = ((arr_15 [i_7] [i_6 + 1]) ? (arr_16 [12] [i_6 - 2]) : (arr_16 [i_6 - 1] [i_6 - 1]));
                arr_26 [i_4] [i_6 - 2] [i_6 - 2] [i_6] = (((arr_25 [i_6]) ? (arr_11 [i_4] [i_6]) : 2113908083));
            }
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    {
                        var_24 = 32593;
                        arr_32 [i_4] [i_6] = (arr_8 [i_4] [i_6] [i_4]);
                        var_25 += (((arr_8 [i_4] [i_4] [i_4]) ? (!46720) : 14125));
                        var_26 = ((((((arr_6 [i_6]) - (arr_24 [i_4] [i_6 + 2] [4])))) ? 23128 : (arr_29 [i_6])));
                        var_27 = (min(var_27, (((((((arr_3 [i_4] [0]) ? 1 : (arr_17 [i_6] [i_6 - 2] [i_6])))) ? ((-1402927297 ? (arr_25 [i_4]) : (arr_3 [i_4] [i_4]))) : (arr_18 [i_6 + 2] [i_8 + 3]))))));
                    }
                }
            }
        }
    }
    for (int i_10 = 1; i_10 < 24;i_10 += 1)
    {
        arr_36 [i_10] = var_9;
        var_28 -= 42407;
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        var_29 = 32736;
        /* LoopNest 2 */
        for (int i_12 = 3; i_12 < 9;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 0;i_13 += 1)
            {
                {
                    var_30 = ((~(((arr_15 [i_13 + 1] [i_13]) * (arr_15 [i_13 + 1] [i_13 + 1])))));
                    arr_45 [i_12] [i_12] [2] [i_13] = ((((((arr_28 [i_12]) ? 224 : (arr_27 [i_13 + 1] [i_13 + 1] [i_13 + 1])))) ? (arr_28 [i_12]) : (arr_28 [i_12])));
                    var_31 = ((((~(arr_10 [i_12 + 3] [i_12 + 3] [i_13 + 1] [i_12]))) * (((((-(arr_30 [i_11] [i_13] [i_11] [i_11] [i_11] [i_11])))) ? -0 : ((-1 ? 1584692245 : (arr_18 [15] [15])))))));
                    var_32 += (max((((1 != ((min(1, var_1)))))), ((~(arr_43 [i_11] [i_11] [i_12] [0])))));
                }
            }
        }
    }
    #pragma endscop
}
