/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_9 <= (!var_2)))) >> (((min(((max(var_10, var_1))), var_0)) - 3228723693))));
    var_12 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = (arr_3 [i_0]);
                var_14 -= arr_5 [i_1];
                var_15 = ((((max(213, 42))) >> (((arr_4 [i_1] [2]) - 31589))));
                var_16 ^= (arr_0 [i_0]);
            }
        }
    }
    #pragma endscop
}
