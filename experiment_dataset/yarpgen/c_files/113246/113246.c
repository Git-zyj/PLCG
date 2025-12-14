/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1 + 2] [i_1 - 2] = (min(var_11, var_5));
                var_16 += var_1;
                var_17 = (arr_1 [i_0 - 1]);
            }
        }
    }
    var_18 = var_14;
    var_19 = (var_7 >> (((max(var_7, (1 ^ 1))) - 3240479702)));
    #pragma endscop
}
