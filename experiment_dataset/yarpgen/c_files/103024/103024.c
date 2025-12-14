/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= ((((var_13 ? ((var_14 ? 104 : var_15)) : (var_15 * var_3))) + (var_1 * var_9)));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0 + 1] = var_4;
        var_20 = (max(var_20, (arr_1 [i_0] [i_0])));
    }
    var_21 = var_3;
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            {
                arr_9 [i_1 + 1] [6] |= (((~(var_10 | 1963878626925892363))));
                arr_10 [i_1] = (((arr_6 [i_2]) > (arr_4 [i_1 - 1])));
                var_22 = (min(var_22, var_6));
            }
        }
    }
    #pragma endscop
}
