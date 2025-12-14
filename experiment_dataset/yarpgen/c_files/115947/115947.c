/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_14 ^= ((!(254 && 72793945717146709)));
                var_15 = arr_7 [i_1] [i_1] [i_0 - 1];
                var_16 ^= (((arr_5 [i_0 + 1]) ? var_4 : (!var_11)));
            }
        }
    }
    var_17 = min(var_1, (max(((4088901547 ? 2048 : 2621531917)), var_13)));
    #pragma endscop
}
