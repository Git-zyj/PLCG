/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((min(-1982098950, -122))) ? -1253493557 : (max((var_9 / var_7), var_8))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [10] = (min(((((arr_3 [i_1]) >= ((min(var_11, var_4)))))), (min((((var_7 + 2147483647) << (112 - 112))), (max(var_6, var_6))))));
                arr_6 [i_0] [i_0] = (((((var_12 ? (arr_4 [i_0] [i_0]) : var_13))) ? (((((var_5 ? 1 : var_4))) ? var_5 : ((max(var_12, (arr_3 [i_0])))))) : (((-113 + 2147483647) << (var_13 - 49)))));
                var_16 = (max(var_16, (arr_3 [6])));
            }
        }
    }
    #pragma endscop
}
