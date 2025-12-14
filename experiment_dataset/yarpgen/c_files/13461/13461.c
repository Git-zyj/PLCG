/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((0 ? 670586981 : var_1));
    var_16 = (min(var_16, ((max((3110109726 & var_5), var_10)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (!var_5);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 = (((min(-1, (((arr_0 [i_1]) | 0)))) ^ (min(var_8, var_14))));
                    arr_8 [i_1] [i_1] [i_1] = (arr_3 [i_1]);
                    var_19 = (min((((arr_6 [i_0] [i_0] [i_1] [i_2]) ? 237 : ((var_13 ? (arr_4 [i_1] [i_1]) : 1)))), ((((arr_4 [i_1] [i_1]) || (((-790249635 ? (arr_6 [7] [i_1] [i_1] [14]) : var_8))))))));
                }
            }
        }

        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            arr_12 [i_0] [2] = -2;
            var_20 ^= (min(var_10, (arr_5 [21] [i_3 - 2])));
        }
        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            var_21 = 59952;
            var_22 = (min(var_22, ((((var_0 ? (var_10 - var_6) : 11577707171809068988))))));
            var_23 = (max(var_23, ((max(((105 ? (arr_6 [i_0] [i_0] [13] [i_0]) : 1)), (((max(1780353872, 7075371480206254670)))))))));
            var_24 = (min(var_24, ((((((max(var_8, (arr_7 [16] [20] [i_4 + 2] [8]))))) ? ((var_11 ? (var_13 | var_2) : (min(var_0, -2838721374890073444)))) : (~0))))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            var_25 = 452771909;
            var_26 = -0;
        }
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 20;i_7 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 21;i_8 += 1) /* same iter space */
                    {
                        var_27 = ((-106 | (arr_2 [i_7 - 1] [6])));
                        var_28 += (((8 == var_8) ? -12833 : var_5));
                    }
                    for (int i_9 = 1; i_9 < 21;i_9 += 1) /* same iter space */
                    {
                        var_29 = ((arr_27 [0] [i_6 - 1] [i_6 - 1] [4]) ? 6599 : var_6);
                        var_30 = (max((((((var_6 << (var_14 - 13823011933532281214))) & (((arr_26 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 - 1]) >> (-400186183 + 400186184)))))), (max((8128 ^ 400186186), 561591174))));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 19;i_11 += 1)
                        {
                            {
                                arr_32 [i_0] [14] [i_6 - 1] [i_11] [i_10] [i_11 + 2] &= (var_8 || 8);
                                var_31 = (var_0 < 65535);
                            }
                        }
                    }
                }
            }
        }

        for (int i_12 = 1; i_12 < 20;i_12 += 1)
        {
            var_32 |= arr_34 [i_0];
            var_33 *= (max(61455, 780173408));
        }
        /* vectorizable */
        for (int i_13 = 1; i_13 < 21;i_13 += 1)
        {
            var_34 = (min(var_34, ((((((arr_19 [i_0] [i_13 + 1]) ^ 52698)) % 186)))));
            var_35 = (((arr_1 [8]) & ((var_5 ? var_5 : -1))));
        }
        for (int i_14 = 2; i_14 < 19;i_14 += 1)
        {

            for (int i_15 = 0; i_15 < 23;i_15 += 1)
            {
                arr_44 [i_14] = (arr_0 [i_14 + 4]);
                var_36 = -var_13;
            }
            var_37 = (max(3, ((max(2398573808, (0 / 127))))));
            var_38 = 1;
            var_39 += ((var_1 < (arr_40 [i_0] [i_0] [i_0])));
        }
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 15;i_16 += 1)
    {
        var_40 = var_5;
        /* LoopNest 3 */
        for (int i_17 = 0; i_17 < 15;i_17 += 1)
        {
            for (int i_18 = 4; i_18 < 13;i_18 += 1)
            {
                for (int i_19 = 2; i_19 < 12;i_19 += 1)
                {
                    {
                        var_41 = 2398573819;
                        arr_55 [i_19] = var_5;
                        var_42 = (arr_48 [i_18 - 1] [i_17] [i_18 - 1]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
