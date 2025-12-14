/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = 15964099490446401157;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_20 = (max(var_20, ((((max(var_4, 16260234902677455420))) ? 169 : var_17))));
                        arr_13 [i_0] [i_0] [i_2] [i_0] = (((!(!2482644583263150479))) ? (((((var_12 ? var_1 : 15964099490446401137))) ? var_18 : (arr_8 [i_1 - 1] [i_1 + 1] [i_1 + 1]))) : (((((var_13 ? var_0 : (arr_9 [i_1] [i_2] [i_3]))) >> (156 - 137)))));
                        var_21 *= ((arr_1 [i_0] [i_1]) <= ((15964099490446401118 ? 2186509171032096195 : 15964099490446401137)));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                {
                    var_22 = ((var_16 ? 0 : var_16));
                    var_23 = (arr_16 [i_5 - 1] [i_5 + 2]);
                }
            }
        }
        var_24 = (min(var_24, 167));
    }
    #pragma endscop
}
