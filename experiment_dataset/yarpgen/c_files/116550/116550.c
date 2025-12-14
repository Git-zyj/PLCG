/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((var_2 * var_2), (min((min(var_7, var_0)), (var_8 != 6687557990146619338)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_8 [1] = (((18446744073709551605 >= 6687557990146619338) ? 10 : (min(10810906335697970128, 5609852030156074031))));
                var_16 = var_12;
                var_17 = ((var_13 > (-9223372036854775807 - 1)));
            }
        }
    }
    #pragma endscop
}
