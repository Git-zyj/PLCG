/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        var_17 *= (7984580649366712580 <= -49);

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                arr_10 [i_2] [i_2] [i_0] [i_2] |= var_10;
                arr_11 [i_1] = (((arr_5 [i_0 + 2] [i_0 - 1] [i_0 - 3]) ? (arr_5 [i_0 + 2] [i_0 - 1] [i_0 - 3]) : -9));
                var_18 -= (arr_5 [3] [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        {
                            arr_16 [i_0] [i_0 - 2] [i_1] = ((114 ? 7930 : -1067740891987448984));
                            var_19 ^= ((+(((-2147483647 - 1) * 1))));
                            var_20 += ((((((arr_12 [i_0] [i_2] [i_0] [i_2]) / (arr_0 [7])))) && (!var_13)));
                        }
                    }
                }
            }

            for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 16;i_7 += 1)
                    {
                        {
                            arr_25 [i_0] [4] [4] [i_0] [i_7] |= ((var_16 * ((((arr_7 [i_0 + 1]) * var_6)))));
                            var_21 = (min(var_21, ((((arr_12 [i_0] [i_0] [i_7 + 3] [i_7 - 2]) ? (arr_3 [i_1] [9]) : var_2)))));
                            arr_26 [i_7 - 2] [i_7] [i_7 + 1] [i_1] [i_7] [i_7] = (((arr_20 [i_1] [i_5] [i_6]) == var_13));
                        }
                    }
                }
                arr_27 [i_0] [i_0] [i_0] [i_1] = (arr_24 [i_0] [10] [i_5] [i_5] [i_0 - 3] [i_0 - 2] [i_5]);
                var_22 = (min(var_22, ((((var_2 ? (arr_5 [i_1] [i_1] [i_5]) : var_13)) <= (((var_1 ? 4294967295 : 175)))))));
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
            {
                arr_31 [i_1] [i_0 - 1] [i_1] = (((arr_28 [i_1]) ? (arr_30 [i_0 - 1] [i_1]) : (~861857131)));
                var_23 = (((arr_28 [i_0 - 2]) > ((((var_14 > (arr_5 [i_0] [i_0] [i_0])))))));
            }
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            arr_35 [i_9] = (arr_0 [i_0]);
            var_24 += -24;
            /* LoopNest 2 */
            for (int i_10 = 2; i_10 < 18;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 18;i_11 += 1)
                {
                    {
                        var_25 ^= (arr_21 [i_11 + 1] [i_11 + 1] [i_9] [i_9] [i_0]);
                        arr_41 [i_0] [i_9] = (((arr_17 [i_0 - 4] [i_10] [i_10 + 1] [i_11 + 1]) ^ (arr_5 [i_0] [i_0 - 1] [i_0])));
                        arr_42 [i_9] [i_9] = -var_1;
                        arr_43 [i_0] [i_9] [i_9] [i_11 + 1] [i_11 + 1] = (((arr_30 [i_10 + 1] [i_11 - 1]) / (arr_30 [i_10 - 2] [i_11 + 1])));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 19;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 19;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {
                    {
                        var_26 += (arr_0 [i_0 - 3]);
                        var_27 ^= (((arr_46 [i_0 - 1] [i_0 + 2] [i_0 - 3] [i_0]) ? (arr_19 [i_0 - 2]) : (arr_8 [i_12] [i_13] [0])));
                        arr_51 [i_0] [i_0] [6] [i_0] = (((arr_47 [i_0] [i_0 - 1] [i_0] [i_0 - 4]) ? (arr_21 [i_0 - 3] [i_0 - 3] [i_14] [i_14] [i_13]) : var_5));
                        arr_52 [i_0] [i_12] [i_13] [i_0] = ((-7919 ? 4394308821844858234 : 73));
                    }
                }
            }
        }
        var_28 *= (arr_0 [i_0 - 1]);
    }
    for (int i_15 = 1; i_15 < 17;i_15 += 1)
    {
        arr_55 [i_15] [i_15] = (arr_46 [i_15] [i_15] [i_15] [i_15]);
        arr_56 [i_15] = (+-12186969708990387444);
    }
    /* LoopNest 2 */
    for (int i_16 = 3; i_16 < 20;i_16 += 1)
    {
        for (int i_17 = 1; i_17 < 22;i_17 += 1)
        {
            {

                for (int i_18 = 0; i_18 < 23;i_18 += 1)
                {
                    var_29 = (max(var_29, var_5));
                    arr_66 [i_16] [i_16] [i_16] = (arr_65 [i_18] [i_18] [i_17 - 1] [16]);
                }
                arr_67 [i_16] [i_17] = (max(((((arr_60 [i_16 + 2]) < (arr_64 [i_16 - 1] [i_17 + 1])))), 127));
                var_30 = -17428;
            }
        }
    }
    var_31 = (max(var_9, -1067740891987448982));
    var_32 = var_16;
    #pragma endscop
}
