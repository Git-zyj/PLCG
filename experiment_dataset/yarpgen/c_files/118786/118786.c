/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_10 [i_2] [i_1] = arr_8 [i_3] [i_2] [i_1] [i_0];
                            var_15 += 110;
                            var_16 = ((var_4 % (((((var_14 + (arr_2 [i_1 + 1]))) <= (arr_9 [i_0] [i_3] [1] [i_3]))))));
                            var_17 = (arr_7 [i_0] [i_0] [i_2] [i_0]);
                            var_18 ^= 10047086387086515774;
                        }
                    }
                }
                arr_11 [i_1] [i_1] = var_7;

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_19 ^= (((((var_4 < var_8) % (arr_6 [i_0] [2] [i_4] [i_4]))) % (((var_0 << (-105 + 105))))));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_20 -= ((var_4 / (arr_17 [i_0] [i_1 + 1] [i_1 + 1] [i_0] [i_6])));
                                var_21 = (max(var_21, var_11));
                                var_22 -= (arr_0 [i_5 - 3]);
                                var_23 = (min(var_23, (((0 && ((((arr_4 [2]) | var_6))))))));
                            }
                        }
                    }
                }
                for (int i_7 = 3; i_7 < 17;i_7 += 1)
                {
                    var_24 -= (arr_14 [i_0] [i_7]);
                    arr_24 [i_0] [i_7 - 2] [1] = (arr_5 [i_0] [i_0 + 1] [i_0 + 1]);
                    var_25 = (min(var_25, (arr_21 [1] [16] [i_7] [1] [i_7])));
                }
                /* vectorizable */
                for (int i_8 = 2; i_8 < 16;i_8 += 1)
                {
                    var_26 = var_13;
                    var_27 = var_6;
                    var_28 = (min(var_28, ((((2038276710 < 56) > 10047086387086515774)))));
                    var_29 ^= (((arr_7 [16] [16] [i_8] [16]) % var_0));
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_30 = (arr_27 [i_0] [i_0] [i_0 + 1]);
                                var_31 *= 6295917995946719532;
                                var_32 -= (((var_7 > var_6) % 2256690594));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_11 = 4; i_11 < 8;i_11 += 1)
    {
        var_33 *= 1;
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                {
                    var_34 = (max(var_34, (((((39890 * ((((arr_32 [i_11]) && (arr_12 [i_11] [15] [i_12] [i_13])))))) % var_3)))));
                    var_35 = (min(var_35, (((((((((arr_34 [i_12] [7]) && var_4))) | (arr_39 [1] [10])))) < var_1))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_14 = 3; i_14 < 11;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 12;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 12;i_16 += 1)
                {
                    {
                        var_36 *= (((((arr_29 [i_11 - 4] [i_16] [i_11 - 4]) / 3093652920)) * (((1 * var_13) * 2097212467))));
                        var_37 = (((((arr_49 [i_11] [i_14] [i_16]) - var_12)) - (((((arr_30 [16] [3] [i_14 - 3] [i_11]) <= (((1 & (arr_44 [5] [5]))))))))));
                        var_38 = (arr_38 [i_11] [i_14 + 1]);
                        var_39 = (arr_39 [8] [10]);
                    }
                }
            }
        }
        var_40 = (min(var_40, (7504888244736221568 % 3825026968)));
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 12;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 12;i_18 += 1)
            {
                {
                    var_41 += 1;
                    var_42 = ((((((39887 > (1 | -4874269915622861007))))) / (-945951012377182794 ^ var_12)));
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 12;i_20 += 1)
                        {
                            {
                                arr_61 [i_11 + 4] [i_18] [i_18] [i_11 + 4] = (2256690586 >= var_7);
                                var_43 = var_1;
                                var_44 = (max(var_44, var_5));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_21 = 0; i_21 < 21;i_21 += 1)
    {
        for (int i_22 = 2; i_22 < 19;i_22 += 1)
        {
            {
                var_45 ^= ((arr_65 [0]) || (arr_62 [i_22]));
                arr_68 [i_21] = 61120;
                arr_69 [i_21] [i_21] = var_3;
            }
        }
    }
    #pragma endscop
}
