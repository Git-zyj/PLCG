/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= -var_1;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = 1;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_16 = (max(var_16, (((((-95 - var_1) == var_6)) ? var_5 : -997595370))));
                        var_17 = ((-(min(997595369, (arr_1 [i_1] [i_2 - 2])))));
                    }
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_18 ^= 1;
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {
                        var_19 &= (((!var_11) ? ((max(1, 1))) : (((17 / 63108) ? ((min(-22884, (arr_11 [i_7])))) : (((arr_18 [i_4] [i_5] [i_4]) - (arr_6 [i_4] [i_4] [i_4])))))));
                        var_20 = 1;
                        arr_21 [i_6] [i_4] [0] [i_6] [i_7] [8] = ((var_2 ? ((var_8 ^ (155 == var_3))) : (((var_0 ? 1 : var_9)))));
                        var_21 = -997595388;
                        var_22 = (var_9 > 52098);
                    }
                }
            }
        }
    }
    var_23 = (((max(((1 ? 13425 : 22509)), ((max(var_5, 999))))) != var_1));
    #pragma endscop
}
