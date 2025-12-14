/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            arr_5 [i_0] [0] = var_8;
            var_17 = (((((var_10 ? var_12 : var_14) / ((((arr_2 [i_0] [i_1]) || (arr_3 [i_0] [i_1] [5]))))))));
        }
        arr_6 [i_0] [6] = (!var_2);
    }
    var_18 = (min(var_18, (((((((var_7 ? var_2 : var_15))) ? -73 : (var_6 != var_10)))))));

    /* vectorizable */
    for (int i_2 = 1; i_2 < 24;i_2 += 1)
    {
        var_19 ^= (((arr_7 [i_2]) ^ (arr_8 [i_2] [i_2 - 1])));
        var_20 = (arr_10 [1] [i_2 - 1]);
        var_21 = ((!((((arr_9 [i_2 + 1]) & var_1)))));
        var_22 = ((!(((~(arr_10 [4] [i_2]))))));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_14 [15] [i_3] = (arr_0 [i_3]);
        arr_15 [i_3] = ((!(((((max((arr_0 [i_3]), (arr_0 [i_3])))) ? (arr_13 [i_3] [i_3]) : (1 / 66))))));
    }
    var_23 = (min((!var_16), var_7));
    #pragma endscop
}
