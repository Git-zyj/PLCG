/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = var_2;
                    var_18 = (max(var_18, -var_8));
                    arr_8 [18] [18] &= -32024;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            {
                arr_16 [i_3] [i_3] |= (arr_12 [i_4]);
                var_19 |= (arr_14 [i_3] [i_3] [i_4]);
            }
        }
    }
    var_20 = ((((var_0 ? -1 : (((var_12 + 2147483647) >> (var_5 + 8368037256686703437))))) / 28));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            {
                arr_22 [i_5] [i_5] = ((var_16 ? ((-(arr_13 [i_5]))) : var_6));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 13;i_8 += 1)
                    {
                        {
                            var_21 = (~1);
                            var_22 &= (~var_0);
                        }
                    }
                }
                var_23 = var_14;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 2; i_9 < 13;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            {
                arr_33 [i_9] = var_15;
                var_24 = 49;
                /* LoopNest 3 */
                for (int i_11 = 2; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 13;i_13 += 1)
                        {
                            {
                                var_25 = (min((~var_2), (arr_40 [i_9] [i_9] [i_9] [i_9])));
                                arr_43 [i_9] = ((((var_0 ? (arr_5 [i_9] [i_9 - 2] [i_9 + 1] [i_9]) : -26)) >> (((max(var_5, (arr_36 [i_13 + 2] [i_11 - 2] [i_9 + 1] [i_9]))) - 18))));
                            }
                        }
                    }
                }
                var_26 = (min(var_26, (arr_12 [i_9 + 2])));
                var_27 = ((max(8, 1)));
            }
        }
    }
    #pragma endscop
}
