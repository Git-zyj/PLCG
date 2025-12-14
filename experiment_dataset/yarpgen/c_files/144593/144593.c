/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_10 = (min(var_10, ((((max(8162659406902330545, 8162659406902330545)) ^ (~8162659406902330545))))));
                var_11 = ((((((min(10284084666807221070, var_2))) ? (var_9 ^ var_1) : (max(var_1, 8162659406902330537))))) || ((min(254, (arr_1 [i_1 - 1] [i_0])))));
            }
        }
    }
    var_12 = 0;
    var_13 = ((var_6 % ((2 ? var_9 : ((max(248, -20740)))))));
    #pragma endscop
}
