/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_11 &= ((((((-5996 ? var_9 : (arr_1 [i_0]))))) ? ((-(arr_2 [i_0] [i_1] [i_1]))) : (((((158 ? -1339803952 : (arr_3 [i_0])))) / ((~(arr_2 [8] [3] [3])))))));
                var_12 = ((0 <= ((-(min(var_5, -1682177415))))));
            }
        }
    }
    var_13 = var_3;
    var_14 -= ((var_10 ? (min(-var_7, var_10)) : var_6));
    var_15 -= ((((((((181 << (var_5 - 27433)))) && var_3))) << (var_0 + 17933)));
    #pragma endscop
}
