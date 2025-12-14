/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = (min((((((arr_6 [i_0] [i_1]) || var_8)))), (((arr_4 [i_1] [i_1] [i_0]) ^ var_8))));
                    var_13 = ((min(49, 1)));
                    var_14 |= (((max((arr_6 [i_0] [i_2]), (arr_7 [16] [i_1])))));
                    arr_9 [i_0] [14] [14] |= ((var_7 > ((-132183664 ? 1099511627712 : 33554400))));
                }
            }
        }
    }
    var_15 = ((((((((var_2 ? var_9 : var_0))) ? var_5 : (32767 ^ 1449057079)))) ? (((max(8131, var_0)))) : var_8));
    var_16 = var_1;
    #pragma endscop
}
