/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_16 = ((-((var_11 ? (arr_1 [i_1 - 1] [i_1]) : (arr_1 [i_1 + 4] [i_1])))));
                var_17 = min((((661224566 & -124) ? 127 : ((-123 ? var_4 : (arr_3 [i_1]))))), -var_7);
                var_18 = var_15;
            }
        }
    }

    for (int i_2 = 2; i_2 < 19;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = (31 && -119);
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    arr_16 [i_3] [i_4] [i_4] = 1256341925;
                    var_19 *= ((-((-(arr_9 [i_2 + 2])))));
                    var_20 = ((-(arr_6 [i_2] [i_2 - 2])));
                    var_21 = ((!((var_14 == (arr_15 [i_3 + 3] [i_2 - 1])))));
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 19;i_5 += 1) /* same iter space */
    {
        var_22 |= 1;
        var_23 = ((((((4294967282 && (arr_9 [0])))) % 23251)));
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 19;i_6 += 1) /* same iter space */
    {
        var_24 *= ((-29681 >= (arr_21 [i_6 + 1])));
        var_25 -= (-29668 - -119);
    }
    for (int i_7 = 1; i_7 < 11;i_7 += 1)
    {
        arr_24 [i_7] [i_7] = (((!(arr_15 [i_7 + 2] [i_7 + 1]))));
        var_26 = (((((var_8 ? (arr_13 [i_7 - 1] [i_7 - 1]) : (arr_13 [i_7 - 1] [i_7 + 2])))) ? (arr_21 [i_7]) : (((-1256341917 > 21803) ? (max(211783434328878762, var_15)) : (arr_6 [i_7 + 1] [i_7 + 2])))));
    }
    var_27 = var_11;
    #pragma endscop
}
