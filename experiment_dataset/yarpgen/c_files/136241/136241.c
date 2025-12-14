/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= var_0;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_21 = (arr_2 [i_0 - 3]);
                                var_22 = ((!(((-14 << (((arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] [i_4]) - 6858)))))));
                                var_23 = ((((((arr_4 [i_4 + 1] [i_0 + 1]) ? -1000524203 : (arr_4 [i_4 - 1] [i_0 + 1])))) <= 114));
                            }
                        }
                    }
                }
                var_24 = (arr_2 [i_1]);
            }
        }
    }

    for (int i_5 = 1; i_5 < 18;i_5 += 1) /* same iter space */
    {
        var_25 = ((((((1329670330 ? 63 : -98)))) & (((1087928784 <= 702936505) ? -64 : -98))));
        arr_16 [i_5] = 137;
        arr_17 [15] = (arr_14 [i_5]);
        var_26 = (min(var_26, (arr_13 [i_5])));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 18;i_6 += 1) /* same iter space */
    {
        var_27 = ((-14 + (arr_1 [i_6] [i_6])));
        var_28 = 3560388239;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 16;i_8 += 1)
            {
                {
                    var_29 = (min(var_29, (arr_15 [i_7])));
                    var_30 -= (((arr_4 [i_6 + 1] [i_6 + 1]) != 21205));
                }
            }
        }
        var_31 |= (((arr_4 [i_6 + 2] [i_6 - 1]) ? (arr_4 [i_6 + 2] [i_6 + 1]) : (arr_21 [i_6 - 1])));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 17;i_11 += 1)
                {
                    {
                        var_32 = ((-3965862936834199684 << (arr_22 [i_11 + 2])));
                        arr_35 [i_6] [i_6] [i_10] [i_11] [i_9] |= (((-127 - 1) & 85));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_12 = 1; i_12 < 18;i_12 += 1) /* same iter space */
    {
        var_33 = (min(var_33, 2790839930));
        /* LoopNest 3 */
        for (int i_13 = 4; i_13 < 18;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 19;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 20;i_15 += 1)
                {
                    {
                        var_34 = ((-728642505 ? (arr_39 [i_12] [i_12] [i_12]) : (arr_39 [i_14] [i_13 - 2] [i_14])));
                        var_35 *= (arr_27 [i_12 + 1]);
                        arr_49 [16] [i_12] [i_12] [10] [i_12] [i_12] |= (arr_37 [i_12]);
                    }
                }
            }
        }
        var_36 = (arr_23 [i_12] [i_12] [1]);
        arr_50 [i_12] = ((!(85 + 1)));
    }
    #pragma endscop
}
