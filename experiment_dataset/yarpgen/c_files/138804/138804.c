/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_19 = (min(var_19, (arr_0 [1])));
        var_20 ^= var_10;
        var_21 = (arr_1 [i_0] [i_0]);
        arr_2 [i_0 + 1] = var_2;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1 + 1] = (((arr_1 [3] [i_1 + 1]) > (arr_4 [i_1 + 1])));
        arr_7 [9] = (var_10 + var_7);
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_20 [i_5] [i_3] [1] [i_5] [8] = -2121786937;
                        arr_21 [i_3] [i_4] = (arr_19 [i_2] [i_3] [i_3] [i_5]);
                        var_22 = (min(var_22, var_8));
                    }
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        var_23 = ((((1 ? 48 : -609452579))) ? 0 : (((16777215 ? 559 : 41194))));
                        var_24 = (max(var_24, (((10 ? (arr_22 [i_2] [i_2] [i_3] [i_3] [i_4] [i_6]) : (arr_22 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))));
                        arr_24 [i_2] [i_3] [i_4] [7] = ((-(-9223372036854775807 - 1)));
                    }
                    arr_25 [i_2] [i_3] [i_3] = (0 | 3587833235975896417);
                }
            }
        }
        var_25 = (max(var_25, var_13));
        arr_26 [i_2] = (((438421362669478109 % var_3) ? (arr_11 [i_2] [i_2]) : (~0)));
        arr_27 [i_2] = ((!(var_17 == 65481)));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 10;i_9 += 1)
                {
                    {
                        var_26 = (min(var_26, 40929));
                        var_27 = 49;
                    }
                }
            }
        }
    }
    #pragma endscop
}
