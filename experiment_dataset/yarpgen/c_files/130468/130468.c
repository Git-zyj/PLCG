/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = ((240 ? ((min((arr_1 [i_0 - 1] [i_0 - 1]), (arr_1 [i_0 + 1] [i_0])))) : (arr_0 [i_0])));
        arr_3 [i_0] = 1;
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        var_15 = var_0;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_16 &= ((((((arr_7 [i_1 + 3]) ? 18446744073709551615 : (arr_7 [i_1 + 2])))) ? (((arr_7 [i_1 - 2]) ? (arr_7 [i_1 - 1]) : 56)) : (arr_7 [i_1 - 1])));
                        arr_15 [i_1] [i_1] [i_1] [i_1] = ((1 != (~0)));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_17 *= (arr_16 [i_5]);

        for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
        {
            arr_22 [6] = ((~(((((arr_1 [i_6 + 1] [i_5]) ? 0 : var_12))))));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        {
                            var_18 = (arr_23 [i_7] [11]);
                            var_19 = (arr_21 [i_6 - 1] [i_6 + 1] [i_6 - 1]);
                        }
                    }
                }
            }
            var_20 += (arr_6 [i_5] [17]);
        }
        for (int i_10 = 1; i_10 < 17;i_10 += 1) /* same iter space */
        {
            var_21 = (arr_12 [i_5] [i_10 - 1] [1]);
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    {
                        arr_40 [i_12] [i_11] [i_10] [i_5] [1] = ((-(((18446744073709551615 ? 1 : 23)))));
                        arr_41 [4] [i_10] [i_11] [9] [i_10] [i_5] = (((arr_14 [i_10] [i_10] [i_10]) && ((!(!-427198089042608851)))));
                        var_22 &= (arr_6 [i_10 - 1] [i_10 - 1]);
                        var_23 = (arr_34 [i_5] [i_5] [i_5] [i_10 - 1]);
                    }
                }
            }
            arr_42 [i_10] = 127;
        }
        arr_43 [1] [1] = (arr_19 [i_5] [3]);
    }
    #pragma endscop
}
