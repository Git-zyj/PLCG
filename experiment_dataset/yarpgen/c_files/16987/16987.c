/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_0 [i_0]) ? 27 : var_1));
        arr_4 [4] = ((-1292018875976822767 ? var_17 : (arr_2 [i_0])));
    }
    var_19 = var_16;
    var_20 = (max(var_18, (((var_13 && (max(var_6, var_13)))))));
    var_21 = 4294967268;
    var_22 = (!18446744073709551615);
    #pragma endscop
}
