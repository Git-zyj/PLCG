/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = (arr_0 [i_1]);
                arr_8 [i_0] [i_0] [i_0] = (((var_1 * var_6) ? (arr_3 [i_1]) : ((-432345564227567616 ? (((((arr_3 [i_1]) >= (arr_6 [i_0] [i_1 - 1]))))) : (max(32767, 3128165151))))));
            }
        }
    }
    var_19 = ((~((var_8 ? (min(var_4, var_15)) : var_9))));
    var_20 = (max(var_16, ((-0 ? var_0 : (((var_1 ? var_10 : var_1)))))));
    #pragma endscop
}
