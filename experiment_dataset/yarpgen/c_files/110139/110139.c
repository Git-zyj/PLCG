/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_13 = (((((var_3 ? var_1 : var_12))) || (((var_2 ? var_1 : (arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 += (((!(arr_2 [i_2]))));
                    var_15 += (((~var_2) ? (arr_4 [i_0 + 1] [i_2] [0]) : ((var_9 ? -22431 : (arr_4 [6] [i_2] [i_2])))));
                }
            }
        }
    }
    var_16 = (max((min(-var_7, ((var_0 ? var_11 : var_1)))), ((min(var_3, 26367)))));
    var_17 -= ((((min(1450355456, 26367))) ? ((var_11 ? ((var_11 ? var_11 : var_3)) : (var_11 + var_8))) : ((max(var_1, var_1)))));
    var_18 = (((var_6 * var_2) / ((var_7 ? var_1 : (-595 * var_6)))));
    #pragma endscop
}
