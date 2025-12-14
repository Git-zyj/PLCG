/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_11 = (max(var_11, (((((min(var_6, var_1))) ? (((((1 ? 1 : 1))))) : ((var_0 ? (max(var_2, var_4)) : var_2)))))));
                var_12 = var_4;
            }
        }
    }
    var_13 = var_3;

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_9 [i_2] = (((((((var_8 ? var_7 : var_3))) ? ((min(var_5, var_7))) : ((var_6 ? var_4 : var_6))))) ? (max(var_1, ((var_4 ? var_6 : var_8)))) : (((var_1 ? var_7 : var_7))));
        var_14 = var_7;
        var_15 = ((((((((var_3 ? 9052549986509992690 : 1325303660))) ? (min(4194303, 1)) : 12961417811387227531))) ? 0 : ((((max(-30595, 7))) ? 1 : 15849))));
    }
    for (int i_3 = 4; i_3 < 21;i_3 += 1)
    {
        arr_12 [i_3] [i_3] = (var_5 && var_7);
        var_16 = (min(var_16, (((-3838209710819326204 ? 17000 : 16)))));
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                {
                    var_17 = (max(var_17, ((((var_10 ? var_3 : (max(var_10, var_2))))))));
                    var_18 += var_8;
                }
            }
        }
    }
    #pragma endscop
}
