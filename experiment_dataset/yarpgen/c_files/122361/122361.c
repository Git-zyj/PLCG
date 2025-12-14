/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_1] [i_0] = (((((min(var_6, var_12)) >> (1682147195 > 2612820110))) & (max(var_5, 2612820100))));
                    var_13 -= (max(1682147194, ((var_10 ? (var_1 ^ var_8) : ((2612820118 ? 1682147178 : var_12))))));
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    arr_12 [i_0] [i_1] [i_1] [i_0] = ((111 ? ((2612820121 ? 0 : var_11)) : 79));
                    var_14 = var_0;
                }
                arr_13 [i_1] [i_1] = ((((max((min(var_8, var_6)), -var_11))) ? ((((var_6 ? var_3 : var_6)) / ((min(1, var_6))))) : var_3));
                arr_14 [i_1] [7] [i_0] = ((!(!111)));
                var_15 = (min(var_6, (((var_9 / var_0) ? (~1) : -var_11))));
            }
        }
    }
    var_16 = (min(((((var_7 || 1) ? var_2 : (max(var_7, 1682147216))))), -var_5));
    var_17 = var_2;
    #pragma endscop
}
