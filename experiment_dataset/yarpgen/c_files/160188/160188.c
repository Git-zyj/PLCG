/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, -var_19));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [1] [i_2] [i_2] [i_0] = var_8;
                    var_21 = var_15;

                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_2] = 1;
                        var_22 = (max(var_22, (((((1 ? 1 : -7302729424874594297))) ? (--1) : ((var_16 ? (((arr_3 [i_1] [i_2] [i_3]) ? 6984053081244318266 : (arr_7 [0] [i_2] [i_1] [5]))) : 3098261339934128833))))));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [13] [i_0] = -6990059545376050965;
                            var_23 = (max(var_23, (min(6984053081244318285, var_2))));
                            var_24 ^= ((-((-((max(var_13, 1)))))));
                        }
                        var_25 = (max(var_25, 7302729424874594297));
                        var_26 = min((((((var_2 * (arr_13 [i_0] [6] [i_0] [2] [i_0])))) ? 5165732793145188560 : -1)), ((((arr_6 [i_0] [i_1] [i_2]) ? ((6990059545376050964 ? var_10 : var_15)) : (arr_7 [i_0] [i_1] [i_2] [i_3])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
