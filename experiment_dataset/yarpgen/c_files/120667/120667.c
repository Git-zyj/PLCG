/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((min(var_11, var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                arr_8 [i_1] = ((var_2 ? ((-(max((arr_7 [i_0] [i_0]), var_9)))) : (1040153895 <= 34643)));
                var_14 = (-127 - 1);
                var_15 = ((((((((max(var_1, var_11))) > var_10)))) != (max((max(var_8, var_0)), ((min(87, 143)))))));
                arr_9 [i_0] [i_1] [i_1] = ((min(1023, (var_8 ^ var_8))));
            }
        }
    }
    var_16 |= (((min(var_2, var_10)) / var_1));
    #pragma endscop
}
