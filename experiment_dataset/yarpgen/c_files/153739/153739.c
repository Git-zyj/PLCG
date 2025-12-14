/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_11 ? var_9 : var_13)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_19 = ((((arr_2 [i_0]) ? var_9 : (arr_1 [i_0] [i_0]))));
        arr_3 [i_0] = ((6249387464735716595 ? 6249387464735716612 : 0));
    }
    var_20 = ((var_6 | (1030752524 & 1555516473)));
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            {
                var_21 = ((((max(-8931708049255668618, 1555516473))) ? (((((arr_2 [i_1]) ? 1897246422 : 0)))) : -82));
                arr_11 [i_1] = (((arr_9 [i_1 + 1] [i_2] [i_1 + 1]) ? (((arr_9 [i_1 + 1] [i_1 + 1] [i_2]) ? (arr_9 [i_1 + 1] [i_1 + 1] [i_1 + 1]) : (arr_0 [i_1 - 1]))) : (((arr_0 [i_1 - 1]) + (arr_0 [i_1 + 1])))));
            }
        }
    }
    var_22 = (var_13 != var_13);
    #pragma endscop
}
