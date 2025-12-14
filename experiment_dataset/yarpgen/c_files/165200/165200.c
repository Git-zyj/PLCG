/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_13 - (~var_7));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_16 = (min(var_16, ((((arr_1 [i_0]) ? (arr_0 [i_0]) : var_7)))));
        arr_2 [i_0] [i_0] = -1964904250995132078;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_17 = (min(var_17, 0));
        arr_7 [i_1] = (((arr_4 [i_1]) ? (~131040) : (((((arr_0 [i_1]) && 7))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                var_18 ^= (((((arr_11 [i_2] [9] [i_2]) ? (arr_11 [i_2] [i_2] [15]) : (arr_11 [i_2] [i_2] [i_3])))) - ((14236 ? (((var_12 ? 57343 : var_6))) : ((-8 ? 9 : var_5)))));
                arr_12 [i_2] [i_2] = ((((((~(arr_10 [7]))))) ? var_8 : (((((arr_11 [1] [i_3] [i_3]) != var_0))))));
            }
        }
    }
    #pragma endscop
}
