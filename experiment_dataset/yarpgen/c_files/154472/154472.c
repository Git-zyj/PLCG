/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += 1970805180141527407;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = var_10;
        arr_4 [i_0] = (!var_6);
        var_20 += (1 ? var_13 : 3736413263);
        var_21 += (arr_0 [i_0] [1]);
        arr_5 [i_0] = ((var_1 * (!4294967292)));
    }
    var_22 = var_5;
    #pragma endscop
}
