/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((~(((arr_2 [0] [1]) ? var_9 : 16))))) ? 125 : ((((min((arr_1 [i_0]), var_2))) ? (((arr_1 [10]) ? (arr_1 [i_0]) : 116)) : 14))));
        var_11 = ((-(~var_9)));
        arr_4 [i_0 - 1] [i_0] = 3731;
        var_12 += (min((((arr_0 [2]) ? (740851074 && -1556176206) : 14)), 121));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_13 = ((-(arr_6 [i_1])));
        arr_8 [i_1] = (((arr_7 [i_1] [i_1]) == (arr_6 [i_1])));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    arr_16 [i_3] [i_3] [i_4] [i_4] &= (arr_15 [i_3] [i_3] [20] [i_3]);
                    arr_17 [i_2] = (min(((((var_0 ? (arr_7 [i_2] [i_2]) : var_5)) != (arr_6 [i_2]))), ((!(arr_6 [i_2])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_14 = min((((-1 % (arr_14 [6] [i_4] [i_5])))), (((var_7 >= (arr_15 [i_2] [i_2] [i_4] [i_2])))));
                                var_15 = (arr_10 [i_5]);
                            }
                        }
                    }
                    var_16 = ((~(((arr_13 [i_4] [i_3]) ? (((arr_13 [i_3] [i_4]) ? (arr_9 [i_3]) : (arr_11 [i_2] [i_2] [i_3]))) : (arr_12 [i_3])))));
                    var_17 = (((arr_12 [i_2]) ? ((((arr_7 [i_2] [i_2]) ? (arr_6 [i_2]) : (1 || 15122013761313239412)))) : ((((min((arr_15 [i_2] [i_2] [i_3] [i_4]), (arr_11 [i_2] [i_2] [12])))) ? (arr_7 [i_2] [i_2]) : 9223372036854775802))));
                }
            }
        }
        arr_24 [i_2] [i_2] = (max((arr_5 [i_2]), ((!((!(arr_21 [i_2] [i_2] [i_2] [i_2] [i_2])))))));
        /* LoopNest 3 */
        for (int i_7 = 3; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        arr_34 [i_2] [i_2] [i_2] [i_2] [1] = var_3;
                        arr_35 [18] [i_9] [i_2] [i_7] [i_2] = -131;
                        arr_36 [i_2] [i_2] [1] = (min(9223372036854775802, 124));
                        arr_37 [i_2] [i_2] [i_2] [i_2] = ((!(((((max((arr_28 [i_2] [i_7] [i_2]), (arr_12 [i_9])))) ? 740851073 : (min(740851073, var_0)))))));
                        var_18 = ((!((((-6 == 9367) ? (arr_30 [i_8] [i_2] [i_8] [i_8]) : var_0)))));
                    }
                }
            }
        }
        var_19 ^= (!(((((!(arr_23 [i_2] [20] [i_2] [i_2] [i_2]))) ? 3554116215 : ((((!(arr_31 [i_2] [i_2] [i_2] [i_2])))))))));
    }
    var_20 = (((~var_1) / -1455594302));
    #pragma endscop
}
