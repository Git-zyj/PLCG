/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = max(((var_13 ? (var_12 || 2147483647) : (arr_0 [i_0]))), (2147483647 & 2147483647));
                arr_5 [5] [i_0 + 2] [i_0] = (min(((~(((arr_3 [i_0] [i_0 + 2] [i_1]) ? (arr_1 [i_0]) : 42)))), (((17718935418557498536 ? 6057 : 2147483622)))));
            }
        }
    }
    var_21 ^= ((0 ? (((var_13 ? var_4 : 281337537757184))) : (((var_11 / var_4) ? var_5 : (min(var_2, var_1))))));
    var_22 = (~1);
    #pragma endscop
}
