/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_13, (min(var_7, (8968 - var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 += (min((arr_2 [8]), (max((~9223372036854775807), (5486385270222721800 | 2147483647)))));
                var_18 = (max(2221670691, -17940));
            }
        }
    }
    var_19 = (((var_6 & -3656332045) < ((-((var_6 ? var_11 : var_14))))));
    #pragma endscop
}
