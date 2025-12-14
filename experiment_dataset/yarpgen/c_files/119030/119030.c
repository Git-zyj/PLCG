/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
        {
            arr_5 [i_1] [i_0] [i_0] = var_10;
            var_14 = (max(var_14, -1178020003675060065));
            var_15 |= 28078;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
        {
            var_16 = (arr_8 [i_0] [6] [i_2]);
            arr_9 [i_2] [i_2] = ((arr_4 [i_2]) ? (arr_4 [i_0]) : 37);
        }
        arr_10 [4] = ((-1 ? (arr_2 [i_0]) : (max(3289420964855372265, 1366623458))));
        var_17 = var_5;
    }
    var_18 = var_5;
    var_19 = var_5;
    var_20 += var_0;
    #pragma endscop
}
