/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_16 = (((arr_2 [i_0]) < (arr_3 [i_0] [0])));

                    for (int i_3 = 1; i_3 < 16;i_3 += 1) /* same iter space */
                    {
                        var_17 = 0;
                        var_18 = ((((((arr_9 [i_0] [8] [i_2] [i_2] [i_2] [i_3 - 1]) ? -1241771367 : var_14))) ? (arr_1 [i_0] [1]) : ((13310581790191737623 ? (arr_7 [12] [i_1] [11] [i_3] [12] [0]) : (arr_9 [i_0] [1] [1] [i_2] [i_2] [i_3])))));
                        var_19 = 65;
                    }
                    for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [14] [i_0] [i_0] [i_0] [14] = -40;
                        var_20 = (((2918220150 % 65) * (((((arr_2 [i_0]) != 58720256))))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_21 = (arr_11 [i_0] [i_1] [i_5 + 1] [i_0]);
                                var_22 = var_9;
                            }
                        }
                    }
                }
            }
        }
        var_23 = (max(var_23, ((((arr_7 [i_0] [1] [i_0] [i_0] [i_0] [i_0]) == 22872)))));
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
    {
        arr_21 [i_7] [i_7] = -65;
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                {
                    var_24 = (max(var_24, (((-var_4 > ((((arr_20 [i_8] [i_7]) >= var_4))))))));
                    var_25 -= arr_20 [i_9] [i_7];
                }
            }
        }
        var_26 = (min((((arr_23 [i_7] [i_7]) + (arr_23 [i_7] [i_7]))), ((min((arr_23 [i_7] [16]), (arr_23 [i_7] [6]))))));
    }
    for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            for (int i_12 = 4; i_12 < 23;i_12 += 1)
            {
                {
                    var_27 = (((arr_20 [i_10] [i_12 - 4]) + (arr_32 [i_10])));
                    var_28 = (arr_27 [i_10] [i_10]);
                    arr_36 [i_11] [i_11] [i_12] |= (arr_31 [i_11] [i_11]);
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 23;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 21;i_14 += 1)
                        {
                            {
                                var_29 = max((min(((((arr_33 [i_10] [i_10]) ? (arr_41 [i_14] [i_10] [22] [9] [i_14]) : (arr_23 [3] [i_12])))), (arr_30 [i_10] [i_10] [i_13]))), (((var_0 ? 262112 : (arr_42 [i_10] [i_10] [i_12 + 1] [i_14 - 1] [i_14 + 1])))));
                                var_30 = 52891;
                                var_31 = (((min(var_9, var_7)) + (127 >> 0)));
                                arr_44 [i_10] [i_10] [1] [1] [i_10] [i_13 - 1] [11] = (((58720267 / var_6) ? 12383111427927560420 : (((-(arr_41 [i_13 + 1] [i_10] [11] [i_12 - 4] [i_14 - 1]))))));
                                arr_45 [i_10] [i_10] [i_10] [i_10] = ((-0 ? (arr_42 [i_10] [i_10] [21] [i_13] [i_10]) : (((var_14 < var_10) | (arr_43 [i_14 - 1] [i_13] [13] [i_11] [3])))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 24;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 24;i_16 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 24;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 24;i_18 += 1)
                        {
                            {
                                arr_54 [i_10] [i_15] [i_16] [i_16] [i_16] = ((((min((((-(arr_32 [i_10])))), -4186112))) ? -65528 : (((arr_22 [10] [i_10]) ? var_5 : ((-(arr_46 [i_10] [i_10])))))));
                                var_32 = (((65530 * -145) * 1770121415));
                            }
                        }
                    }
                    var_33 |= (0 == 15035852153189225086);
                }
            }
        }
        var_34 = (arr_23 [i_10] [i_10]);
    }
    #pragma endscop
}
