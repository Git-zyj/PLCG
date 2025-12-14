/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (max(-1583288395, (arr_5 [i_0] [i_0])));
                var_18 = ((((((-(arr_0 [i_0]))))) ? 189782366 : ((((var_12 ? var_7 : -5237471997060848678)) / (arr_1 [i_0])))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_19 ^= (~-1420484857);
        var_20 = (((((~var_3) + 2147483647)) >> ((min((arr_8 [i_2]), (arr_8 [i_2]))))));
    }
    #pragma endscop
}
