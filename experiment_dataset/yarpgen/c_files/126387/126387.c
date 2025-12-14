/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = max((max(((max(var_4, var_5))), var_0)), var_2);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_15 += ((((max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1])))) / (max((arr_1 [i_0 - 2]), 617251371))));
                var_16 |= var_11;
                var_17 = 8875686192333515860;
                var_18 += ((max((arr_0 [i_0]), (((61768 ? (arr_2 [1] [i_0]) : (arr_5 [13] [i_1] [1])))))));
            }
        }
    }
    #pragma endscop
}
