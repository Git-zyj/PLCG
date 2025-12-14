/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 ^= (!((((var_3 ? var_4 : var_7)))));
                    arr_8 [i_0] [i_2] = arr_1 [i_0];
                }
            }
        }
    }
    var_13 = (((((min(var_11, var_2))) == ((294536197472922150 ? var_1 : 0)))) ? (((max(var_9, var_5)))) : ((~(min(var_5, var_0)))));
    var_14 = (var_2 > var_2);
    #pragma endscop
}
