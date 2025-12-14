/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        arr_11 [i_0] [i_3] = var_9;

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            arr_15 [6] [i_3 + 1] [i_3] [i_3] [i_1 - 1] [i_0] = (((-114591282051283768 - var_8) ? -3972874036569000200 : (((arr_8 [i_3]) ? (arr_5 [i_0] [15] [1] [15]) : (((arr_13 [i_2] [i_2] [i_2] [i_1 + 1]) ? (arr_4 [i_1] [i_2 - 2] [i_4]) : (arr_10 [i_0] [i_1] [i_2 - 2] [i_3] [i_4])))))));
                            var_18 = (min(var_18, (((((arr_13 [i_3] [i_1 - 2] [i_1 - 2] [i_0]) ? ((21378 ? (arr_7 [i_0] [i_1 + 1] [i_0] [i_3]) : (arr_9 [14] [2] [1]))) : (arr_12 [i_1 - 2])))))));
                            var_19 = 0;
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            arr_20 [i_0] [i_1] [i_1] [i_3] [i_3] = (arr_4 [i_0] [18] [i_2 - 3]);
                            arr_21 [8] [2] [i_1] [i_2 + 1] [i_3 + 1] [i_3 + 1] [12] |= var_2;
                        }
                        var_20 -= ((((min(23207, var_4))) ^ (arr_13 [i_1 - 1] [i_0] [i_0] [i_0])));
                    }
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        arr_24 [i_6] [i_2] [i_6 - 1] = (23208 <= 0);
                        arr_25 [i_0] [i_6] [i_2 - 3] [i_6] = (arr_5 [i_6 - 1] [i_2] [i_1] [i_0]);

                        for (int i_7 = 1; i_7 < 17;i_7 += 1)
                        {
                            var_21 = var_13;
                            arr_29 [i_6] [i_6 - 1] [i_6 - 1] [i_2 - 2] [18] [i_1] [i_6] = (-(max((arr_12 [i_7 + 2]), (arr_12 [i_7 + 1]))));
                            var_22 = ((2797820504 ? (arr_16 [i_0] [i_0] [i_2 + 1] [i_6] [i_2 - 2]) : (min((arr_9 [i_0] [i_1] [i_2]), 136471619))));
                        }
                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 17;i_8 += 1)
                        {
                            arr_33 [i_6] = 42329;
                            var_23 ^= (arr_18 [i_8] [1] [i_2] [1] [i_0]);
                            var_24 += (arr_27 [i_1] [i_6 - 1]);
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            {
                                arr_40 [i_0] [i_1 + 1] [i_2 - 3] [i_9] [i_1 + 1] = (49419 < 16117);
                                var_25 = (arr_32 [i_0]);
                                arr_41 [i_10] [i_10] [i_9] [i_0] [5] [i_0] |= (((!var_8) < (~-136471628)));
                                arr_42 [i_0] [i_1] [i_9] [i_10] |= (arr_4 [10] [i_10] [i_2 + 1]);
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_11 = 2; i_11 < 12;i_11 += 1)
    {
        var_26 = 27;
        var_27 = (max(var_27, ((max(var_9, (arr_17 [i_11 + 1] [i_11 + 1] [i_11]))))));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            for (int i_13 = 3; i_13 < 12;i_13 += 1)
            {
                {
                    arr_52 [12] [i_12] [i_12] [i_11 - 2] = (((min(-2408770330498782940, (((!(arr_43 [i_11] [i_12])))))) != (arr_51 [1] [i_12])));
                    var_28 ^= 1;
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 0;i_15 += 1)
                        {
                            {
                                arr_57 [i_15] = ((((max((arr_18 [i_13 - 3] [10] [i_13] [6] [7]), (arr_18 [i_13 - 3] [i_13 + 1] [i_13 - 2] [i_13] [i_12])))) && (((var_15 ? (max((arr_45 [i_15]), var_13)) : ((~(arr_49 [i_12]))))))));
                                var_29 = (min(var_29, (((((((1 << (var_10 - 12322)))) ? (arr_28 [i_15 + 1] [i_15 + 1] [i_14] [i_14] [i_15 + 1]) : (arr_22 [i_12] [i_15] [6] [i_15] [i_11] [i_15 + 1])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_30 = var_2;
    var_31 = var_9;
    var_32 &= var_14;
    #pragma endscop
}
