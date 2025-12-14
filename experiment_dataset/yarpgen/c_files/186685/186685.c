/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = (((((var_6 ? (arr_1 [i_0]) : var_3))) ^ var_10));
                arr_8 [i_0] = ((((max(var_9, 92))) ? (arr_4 [i_0] [i_1 + 1]) : 61440));
            }
        }
    }
    var_17 = ((!((((var_5 ? var_14 : var_8))))));
    #pragma endscop
}
