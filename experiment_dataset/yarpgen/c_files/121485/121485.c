/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] = var_12;
                    arr_10 [i_1] [i_1] = (((min(31, 2330162590460085977)) - -32539));
                    var_18 -= (-var_0 << (5935708564085478942 - 5935708564085478913));
                }
            }
        }
        arr_11 [i_0] [i_0] = ((((arr_7 [i_0] [6] [i_0] [6]) / 1055531162664960)));
        var_19 = 63790;
    }
    var_20 = (min(var_20, -var_14));
    var_21 = ((var_4 ? (max(((var_7 ? -5480 : var_10)), ((var_6 ? var_13 : var_10)))) : var_5));
    var_22 = var_1;
    #pragma endscop
}
