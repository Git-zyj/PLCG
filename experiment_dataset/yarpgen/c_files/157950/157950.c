/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, 15));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 = (((((((min(0, 3060127925))) ? ((4186222700 ? 1 : 234)) : (((235 || (arr_6 [i_0] [i_0] [i_0] [i_2]))))))) ? (min(((var_2 ? 237 : var_0)), (var_3 && 0))) : var_7));
                    var_13 = (min(var_13, (((((min(((var_3 ? (arr_5 [i_1] [i_1]) : 86)), 118))) ? ((((var_10 ? 14 : 3994507050)) / ((((arr_2 [i_1] [i_2 - 1]) ? 109 : (arr_1 [i_2])))))) : (((1 ? 153 : var_7))))))));
                    var_14 = 33538048;
                    var_15 = var_0;
                }
            }
        }
    }
    var_16 = ((((min((max(2225995772, var_9)), var_1))) ? var_9 : ((max(((var_0 ? 1 : 1)), (1 * var_4))))));
    #pragma endscop
}
