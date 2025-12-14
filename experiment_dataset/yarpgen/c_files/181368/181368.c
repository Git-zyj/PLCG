/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((~((var_5 ? 1509602672 : 38))))) ? ((((16777215 < var_5) << (((min(var_9, 2785364623)) - 2785364606))))) : var_4));
    var_13 &= ((+(((var_9 - var_5) ? var_7 : var_2))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_1] = 1509602672;
                arr_8 [i_0 + 1] [i_0] [i_1] = ((((1032192 ? (arr_6 [i_0] [i_0 + 1]) : 0)) - (arr_6 [1] [i_0 + 1])));
                var_14 = (min(var_14, (((var_7 && (min((arr_3 [i_0] [i_1 + 2] [i_0]), (arr_2 [i_0] [i_1]))))))));
            }
        }
    }
    #pragma endscop
}
