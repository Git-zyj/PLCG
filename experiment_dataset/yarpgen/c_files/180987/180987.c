/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_6 ? 14562482678539144528 : var_0));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((((arr_0 [1]) ? var_0 : 2444840100198012018))) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        var_13 = -1;

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_6 [i_0] = (((arr_2 [i_1]) ^ (arr_5 [i_0] [i_0])));
            arr_7 [i_1] [i_1] [i_0] = arr_2 [i_0];
        }
        var_14 = (max(var_14, (((((var_6 < (arr_5 [i_0] [i_0]))) ? 18446744073709551615 : (arr_0 [i_0]))))));
        arr_8 [4] [2] = var_0;
    }
    #pragma endscop
}
