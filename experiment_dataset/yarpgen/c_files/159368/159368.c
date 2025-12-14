/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= ((var_5 ? (max(var_6, var_10)) : var_3));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_12 ^= 22132;
                arr_7 [i_1] [1] = ((max(((((arr_3 [i_0] [1]) - 43394))), (min((arr_5 [i_0]), -4498721809375225574)))));
                var_13 -= (arr_1 [i_1]);
            }
        }
    }
    #pragma endscop
}
