/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_1 ? var_1 : ((((var_1 ? var_13 : var_3)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_15 = (min(var_15, (((-(!713152479))))));
        arr_2 [8] = ((((var_10 - (arr_1 [2])))) ? var_2 : (var_4 - var_10));

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            var_16 = (((558 ? var_4 : 1073741808)));
            arr_6 [14] [1] = ((!(arr_0 [2])));
            var_17 ^= ((var_1 ? var_11 : -21097));
            arr_7 [1] = (arr_0 [i_0 + 1]);
            arr_8 [5] [7] [16] = ((9223372036854775807 ? 1 : 3581814817));
        }
    }
    #pragma endscop
}
