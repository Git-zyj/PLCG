/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(((((max(var_0, var_11))) ? var_11 : (min(77, 16872794716576868006)))), var_0));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_18 = ((((max((arr_1 [i_0]), (arr_0 [i_0])))) && ((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))))));

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            arr_4 [i_0] = (((arr_2 [i_1] [i_0] [i_0]) ? ((var_9 * (arr_0 [i_0]))) : var_10));
            arr_5 [i_1] [i_0] = 0;
        }
    }
    #pragma endscop
}
