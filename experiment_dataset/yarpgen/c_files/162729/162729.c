/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = ((+((((arr_5 [i_0]) && (arr_5 [i_0]))))));
                var_15 = ((((min(3758096384, 536870912))) ? (((68719476734 ^ (((var_11 ? (arr_5 [i_0]) : var_3)))))) : (arr_4 [i_0] [i_1] [9])));
            }
        }
    }
    var_16 = var_2;
    #pragma endscop
}
