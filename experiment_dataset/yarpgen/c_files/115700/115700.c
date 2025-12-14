/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_13 = ((-(((arr_1 [i_0]) ? 1733115906 : (arr_1 [i_0])))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_14 = (((max(((-(arr_3 [i_1] [i_0]))), (((arr_0 [i_0]) ? (arr_2 [i_0]) : (arr_4 [i_0] [i_1] [i_1]))))) > ((((arr_0 [i_0]) || ((((arr_3 [i_0] [i_0]) << (((arr_2 [i_0]) - 79))))))))));
            arr_5 [i_0] [i_0] = ((max(((max(var_0, (arr_4 [i_0] [i_0] [i_1]))), (min((arr_0 [14]), (arr_1 [i_1])))))));
            var_15 -= (((((min(var_1, (arr_0 [1]))) ? (max(var_0, var_12)) : var_4))));
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_16 &= ((2195517418 ? (arr_6 [17] [1]) : ((((((arr_1 [i_2]) + 2147483647)) >> (var_3 + 3462))))));
        var_17 = (min(var_17, (arr_0 [i_2])));
        var_18 = -32767;
        var_19 = (((((var_1 ? var_10 : var_3))) ? (arr_7 [i_2]) : (arr_0 [i_2])));
    }
    var_20 *= var_3;
    #pragma endscop
}
