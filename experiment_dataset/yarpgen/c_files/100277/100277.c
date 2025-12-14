/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_10 = (max(var_10, (((((!(~var_6))) ? ((-(arr_0 [i_1 - 1] [i_0]))) : (((((3343708226 ? var_2 : 12367))) ? ((3384700983043170807 ? 10 : 128)) : (max((arr_0 [i_1 - 1] [i_0]), (arr_1 [i_1]))))))))));
                var_11 = (var_5 / (((arr_2 [i_0]) ? (arr_5 [i_0] [i_1 + 1]) : (((max(var_6, (arr_0 [i_0] [i_1 - 1]))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 23;i_3 += 1)
        {
            {
                var_12 = (max(var_12, 7));
                var_13 = (max(var_13, ((min(var_3, (max(((28 ? 10 : 175)), ((-(arr_7 [i_2] [i_3]))))))))));
                arr_14 [i_2] [14] = (arr_11 [i_2] [i_2] [i_3]);
                var_14 = var_6;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            {
                var_15 = (((((~27312) + 2147483647)) >> (((arr_2 [i_4]) - 107))));
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_16 = (3052360557125795166 >> 11);
                                arr_31 [i_4] = (((((max(-127, 0)) ? (((((arr_2 [i_4]) || (arr_21 [i_4] [i_6]))))) : (max(10, -2440132153279432058))))));
                                var_17 = -13;
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    var_18 = (arr_3 [i_4] [i_4] [i_9]);
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 14;i_10 += 1)
                    {
                        for (int i_11 = 4; i_11 < 12;i_11 += 1)
                        {
                            {
                                var_19 += (((((510 ? -97 : 10))) ? 21663 : (7734792314707888109 != 31615)));
                                var_20 = (417846914 ? var_0 : var_5);
                            }
                        }
                    }
                    arr_41 [i_4] [i_4] [i_5 + 2] [i_9] = (((-(arr_6 [i_9]))));
                }
                var_21 = var_5;
            }
        }
    }
    #pragma endscop
}
