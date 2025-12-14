/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = ((~(((arr_0 [i_0]) / 56))));
        arr_3 [i_0] = 56;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_11 += ((((max(47, 1814677692))) ? (arr_6 [i_1] [1]) : 24570));
        var_12 = (min(var_12, (((arr_6 [i_1] [i_1]) & (((((arr_5 [i_1] [i_1]) ? 21 : var_5)) & var_2))))));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {
                        var_13 = (59 / 149);
                        var_14 = (-5 && 6710);
                    }
                }
            }
        }
        var_15 = (((44 ? var_0 : (((arr_8 [i_2]) - 56)))) - (((arr_8 [i_2]) % var_1)));
        var_16 -= ((~((min(var_7, var_2)))));
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        {
                            var_17 *= (((((arr_13 [i_6] [i_9] [i_8]) * var_7)) * (((!(var_9 ^ 255))))));
                            arr_27 [2] [2] [i_8] [i_6] [i_7] [i_6] = (arr_10 [i_9] [10] [10]);
                        }
                    }
                }
                var_18 = var_7;
            }
        }
    }
    #pragma endscop
}
