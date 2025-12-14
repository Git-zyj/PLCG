/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((1 ? (max(var_3, var_11)) : ((max(19, var_5)))))) || ((max(-8, var_8)))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_14 = (((max(((-8 ? 0 : 1)), -8))) ? var_12 : 35551);

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_0] = ((((arr_2 [i_0 + 2] [i_1]) ? (arr_2 [i_1 - 1] [i_0 + 3]) : (arr_2 [i_0] [i_1 - 1]))));

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                arr_8 [i_2] [i_1] [i_0] = 0;
                arr_9 [i_0] [i_0] [i_0] = var_1;
            }
        }
        arr_10 [i_0] = ((((max(1, (((arr_1 [i_0] [i_0]) ? 55970 : (arr_0 [i_0 + 3])))))) ? var_6 : (min(42, (1 | var_6)))));
    }
    var_15 = (min(-108, -var_1));
    #pragma endscop
}
