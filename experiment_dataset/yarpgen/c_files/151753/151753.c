/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((((min(var_4, var_1)) & (var_9 ^ var_1)))) ? var_3 : (-27548 & 2457846273)));
                var_19 = ((!((((((3119666851 ? (arr_2 [i_1] [i_1]) : 6946696615729479334))) ? var_18 : var_1)))));
            }
        }
    }
    var_20 |= ((((min(var_12, ((min(-1, var_5)))))) ? ((var_7 ? (((2147483647 >> (var_12 - 53720)))) : 0)) : (((((var_8 ? 34 : 4294967295)) >> ((((var_0 ? var_13 : 11037165252265187293)) - 11936354957098756342)))))));
    #pragma endscop
}
