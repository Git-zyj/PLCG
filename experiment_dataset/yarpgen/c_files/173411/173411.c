/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = (((arr_1 [i_1]) ? 1 : (((63845 && (var_4 || -948252376))))));
                arr_4 [i_1] [i_1] = var_0;
            }
        }
    }
    #pragma endscop
}
