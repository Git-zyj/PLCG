/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (((((-122 % var_14) ? ((((arr_1 [i_0]) > (arr_0 [i_0])))) : (((((-127 - 1) + 2147483647)) >> (arr_0 [i_0]))))) ^ ((((-(arr_0 [1])))))));
        var_17 ^= var_6;
        arr_3 [i_0] = (0 - -86);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_12 [i_2] [i_2] = (((((!(((arr_1 [4]) || 1))))) - ((((arr_6 [i_2] [i_2]) || (arr_5 [i_0]))))));
                        var_18 = var_16;
                        arr_13 [i_2] [i_1] [i_1] [i_1] = ((((-(arr_0 [i_3]))) > ((-(arr_8 [i_1])))));
                        var_19 = ((-(var_12 + 1)));
                    }
                }
            }
        }
        var_20 = (((-122 ^ -117) >> (1 | 31)));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_21 = (min(var_21, (!var_16)));
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 20;i_6 += 1)
            {
                {
                    arr_21 [i_4] [8] [i_6 - 1] [18] = (~74);
                    var_22 = arr_18 [i_4] [i_5 - 3] [1];

                    for (int i_7 = 0; i_7 < 0;i_7 += 1) /* same iter space */
                    {
                        var_23 += ((!((max((arr_25 [i_4] [i_4] [i_4] [i_4]), var_13)))));
                        arr_26 [i_4] [i_4] [i_6] [i_6] = arr_14 [i_7] [i_4];
                        var_24 = (arr_22 [i_4] [i_4]);
                        arr_27 [i_4] [i_4] [i_4] [1] = 1;
                        arr_28 [i_4] = (((((var_10 && 0) + (arr_18 [i_4] [i_5] [i_6]))) ^ (((max(var_14, var_3))))));
                    }
                    for (int i_8 = 0; i_8 < 0;i_8 += 1) /* same iter space */
                    {
                        arr_31 [i_4] [i_5] [i_5] [i_4] [i_5] [i_8] = (1 ^ 1);
                        var_25 = min(((((arr_16 [i_4]) || (arr_25 [i_4] [i_5] [i_6] [1])))), var_14);
                        var_26 = var_6;
                    }
                    arr_32 [i_6] [i_5] [i_4] = var_11;
                }
            }
        }
    }

    for (int i_9 = 2; i_9 < 10;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 1; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {
                        var_27 -= ((var_11 ^ (((var_5 ^ var_1) ? (arr_6 [i_12] [i_11]) : (arr_40 [i_10 - 1] [i_11] [i_12])))));
                        var_28 &= (arr_42 [i_9] [i_12]);
                    }
                }
            }
        }
        var_29 ^= (!((((((arr_37 [i_9 + 2] [i_9] [i_9]) ^ (arr_20 [i_9] [i_9]))) + (((arr_39 [i_9 - 2]) | (arr_15 [i_9])))))));
    }
    for (int i_13 = 0; i_13 < 25;i_13 += 1) /* same iter space */
    {
        var_30 = -102;
        arr_48 [i_13] [i_13] = 116;
    }
    for (int i_14 = 0; i_14 < 25;i_14 += 1) /* same iter space */
    {
        arr_52 [i_14] = arr_51 [i_14] [1];
        var_31 = (((((((((arr_50 [i_14]) ^ (arr_51 [i_14] [i_14])))) ? (arr_51 [i_14] [i_14]) : var_7))) ? ((((-(arr_49 [i_14] [i_14]))))) : (((!(((82 * (arr_51 [i_14] [i_14])))))))));
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 25;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                {
                    var_32 = (max(var_32, (1 - 1)));
                    arr_59 [i_14] |= (arr_49 [i_14] [i_15]);
                }
            }
        }
    }
    #pragma endscop
}
