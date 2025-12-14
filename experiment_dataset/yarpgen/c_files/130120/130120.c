/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(((var_4 - (min(var_7, var_9)))), (max((3138029278 + var_1), ((min(var_11, var_4)))))));
    var_13 = (((((((max(0, -1806024799))) ? (var_6 - 14680064) : var_7))) ? (var_4 - var_8) : ((-(max(var_3, var_10))))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = (var_7 ^ var_11);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1 - 1] [i_0] = var_3;

                        for (int i_4 = 4; i_4 < 17;i_4 += 1)
                        {
                            var_14 |= 1731209860;
                            var_15 = (max(var_15, (arr_1 [i_0] [i_3])));
                            arr_15 [i_1] [i_1] [i_1] [i_1] [i_4] [i_4] = (var_10 || 959725827);
                            var_16 = (arr_9 [i_1] [i_1 + 1] [i_1] [i_4 - 4]);
                            var_17 = (1128306580635819398 ^ 3211798821);
                        }
                        for (int i_5 = 3; i_5 < 15;i_5 += 1)
                        {
                            var_18 = (((arr_14 [4] [i_1] [i_2 - 1] [i_3 - 1] [i_3 - 1] [i_5]) <= (((arr_7 [i_0] [15] [15]) ? var_0 : (arr_1 [i_2] [i_3])))));
                            arr_19 [i_0] [i_0] [i_5] [11] [0] = (((arr_2 [i_0]) & (arr_11 [i_0] [i_1 - 1] [i_0 - 1] [i_1 - 1] [i_0] [i_2 - 1])));
                            var_19 *= (((var_6 | var_8) ? ((((arr_14 [i_0] [17] [i_2] [1] [i_5 + 4] [i_5]) || (arr_8 [4] [12] [i_3])))) : (arr_2 [i_5])));
                            var_20 ^= 1;
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_21 = (arr_21 [i_0] [i_1] [17] [i_7]);
                                arr_24 [i_7] [1] [i_0] [1] [i_0] &= (arr_20 [i_2] [i_1] [i_0 - 1] [i_0 - 1]);
                                var_22 &= (((arr_1 [i_1 + 1] [i_1 + 1]) >= 179));
                            }
                        }
                    }
                }
            }
        }
        arr_25 [i_0] = (arr_21 [i_0] [i_0 - 3] [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                {
                    var_23 = ((var_8 ? 17 : -var_4));
                    arr_33 [i_8] = 27;
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 13;i_12 += 1)
            {
                {
                    arr_42 [5] = ((((((var_0 || (arr_29 [i_12 + 2] [i_12 + 1] [i_12 + 1]))))) % (max((arr_29 [i_12 - 1] [i_12 + 1] [i_12 + 2]), (arr_29 [i_12 - 1] [i_12 + 1] [i_12 + 1])))));

                    for (int i_13 = 1; i_13 < 1;i_13 += 1)
                    {
                        var_24 += (max((arr_14 [7] [i_11] [i_13 - 1] [i_13] [16] [i_12]), ((159 & (arr_16 [6] [i_12 - 1] [i_13 - 1] [i_11] [i_12 - 1] [i_10])))));
                        var_25 = (max(-827899417, ((((!var_5) || ((!(arr_5 [3] [16]))))))));
                    }
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        var_26 = (arr_30 [1]);
                        var_27 = ((var_6 ^ (arr_47 [i_11] [i_11] [i_12 + 2] [i_12 + 1])));
                    }
                    for (int i_15 = 2; i_15 < 13;i_15 += 1)
                    {
                        var_28 = (arr_37 [i_10]);
                        var_29 = ((~((var_1 ? (min(18446744073709551606, 14)) : -14291))));
                        var_30 &= var_0;
                        var_31 = var_0;
                    }
                    for (int i_16 = 4; i_16 < 13;i_16 += 1)
                    {
                        arr_54 [i_16] [i_16] [i_12] [i_16] = (min((arr_23 [i_10] [i_16] [i_12 - 1] [15] [i_12 - 1]), ((min(11936, (min((arr_44 [i_12] [i_16] [i_12 + 2] [i_16] [i_11] [i_12]), var_8)))))));
                        arr_55 [0] [i_11] [i_12 + 1] [i_16] [i_12 + 1] = ((min((max(29339, var_10)), 0)));
                        arr_56 [i_10] [i_10] [i_10] [10] [i_16] [i_16] = (1 + 2966994655);
                    }
                }
            }
        }
        var_32 -= ((max(var_9, ((var_2 & (arr_48 [i_10] [3] [1] [i_10]))))));
    }
    var_33 = var_5;
    #pragma endscop
}
