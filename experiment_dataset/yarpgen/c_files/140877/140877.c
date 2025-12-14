/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = ((!(((107 ? var_9 : 481001221)))));
                var_19 = (((((var_17 ? 160710488 : (max(1566252972, (arr_2 [i_0 + 3])))))) ? ((-(arr_4 [i_0] [i_0]))) : (((~(arr_2 [i_0 - 2]))))));
            }
        }
    }
    var_20 = var_3;
    #pragma endscop
}
