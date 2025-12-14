/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 6;i_4 += 1)
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_3] [i_0] |= (max((max(-588496046, 216)), (241 / 255)));
                            var_12 = (min(var_12, ((-((min(var_6, var_6)))))));
                            var_13 = 123;
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_14 = (i_1 % 2 == 0) ? ((-220968266 ? (((((max((arr_9 [i_0] [i_1] [i_0] [i_2] [i_1] [i_5]), var_10)) + 2147483647)) << (220968266 - 220968266))) : 1413128514)) : ((-220968266 ? (((((((max((arr_9 [i_0] [i_1] [i_0] [i_2] [i_1] [i_5]), var_10)) - 2147483647)) + 2147483647)) << (220968266 - 220968266))) : 1413128514));
                            arr_15 [i_2] [i_2] [i_2] [i_1] = (((((arr_8 [i_1]) ? var_9 : (arr_14 [i_0] [i_0] [i_2] [i_3] [i_5]))) != -460004541));
                            var_15 = (min(var_4, var_5));
                        }
                        for (int i_6 = 2; i_6 < 7;i_6 += 1)
                        {
                            arr_18 [i_1] [i_2] [i_1] = arr_17 [i_0] [i_0] [i_0] [i_0] [i_1];
                            arr_19 [6] [i_1] [i_1] [i_1] [i_6] = (min(((-(min(var_5, (arr_17 [i_0] [i_1] [i_2] [i_2] [i_1]))))), (min((arr_3 [i_0] [i_1]), (((arr_2 [i_0]) << (var_1 + 1265868679)))))));
                            arr_20 [i_0] [i_0] [i_1] [i_1] [i_1] [i_3] [i_1] = var_7;
                            var_16 = var_3;
                        }
                        arr_21 [i_0] [i_1] [i_2] [i_0] = -1622132943;
                    }
                }
            }
        }
        var_17 = 133;
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 8;i_7 += 1)
    {
        var_18 = var_11;
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                {

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_19 -= ((!(arr_22 [i_7 + 1])));
                            arr_34 [i_7] [i_7] [9] [i_7] [i_7] = var_1;
                            var_20 -= (var_5 / 193);
                        }
                        for (int i_12 = 2; i_12 < 7;i_12 += 1)
                        {
                            arr_38 [i_7] [i_12] = (~var_2);
                            arr_39 [i_7] [i_12] [5] [i_12] [i_7] = var_0;
                            var_21 = ((arr_24 [i_7 + 2]) ? var_3 : var_6);
                        }

                        for (int i_13 = 0; i_13 < 10;i_13 += 1)
                        {
                            var_22 ^= arr_36 [i_13] [i_7] [i_7] [i_7 + 1] [0] [i_13];
                            var_23 = var_5;
                            arr_43 [i_7] [i_8] [i_9] [i_10] [7] = 242;
                            var_24 ^= (arr_16 [i_7 + 2] [i_8] [6]);
                            arr_44 [i_7] [i_8] [i_8] [i_10] [i_7] = ((~(arr_8 [i_7])));
                        }
                        var_25 = var_1;
                    }
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        arr_47 [i_7 - 1] [i_7] [i_9] |= 13;
                        var_26 &= (((17 / 1532988978) + (-2147483647 - 1)));
                        var_27 = (((!var_4) ? var_4 : (49341 << var_6)));
                    }
                    var_28 = ((((var_2 ? var_3 : (arr_2 [i_9]))) < (arr_24 [i_7 - 2])));
                }
            }
        }
        var_29 &= (var_6 ? 1 : 1);
        var_30 = (var_7 - (((arr_45 [i_7] [i_7] [i_7] [i_7 - 1]) / var_0)));
    }
    var_31 = var_10;
    var_32 = ((var_3 == (min(var_5, var_2))));
    #pragma endscop
}
