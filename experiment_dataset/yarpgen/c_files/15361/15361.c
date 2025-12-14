/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_14 ? var_5 : (((var_7 ? ((var_0 ? var_6 : var_8)) : (~var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = ((((min(((min(var_1, (arr_1 [i_0])))), (arr_2 [i_0])))) != (~16636578676644272698)));
                arr_7 [i_0] = (max(1810165397065278918, 65533));
                var_17 = ((max(var_9, var_11)));
                arr_8 [i_0] [18] = (arr_3 [i_1] [i_1] [8]);
            }
        }
    }
    var_18 = var_5;
    var_19 = var_1;
    #pragma endscop
}
