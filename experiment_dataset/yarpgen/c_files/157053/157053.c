/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_20 = (max(10178, ((~(arr_1 [i_0])))));
        var_21 = var_3;
        var_22 = var_1;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            {
                arr_8 [i_1] = 65533;
                var_23 ^= ((~(min(-555759370289362431, (arr_7 [i_1] [i_1] [i_1])))));
            }
        }
    }

    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_24 = (((((var_15 ? (arr_1 [i_3]) : (arr_10 [i_3])))) ? -555759370289362431 : (arr_10 [i_3])));
        arr_11 [i_3] = ((var_7 ? var_8 : (((arr_0 [i_3] [i_3]) - (!555759370289362431)))));
    }
    #pragma endscop
}
