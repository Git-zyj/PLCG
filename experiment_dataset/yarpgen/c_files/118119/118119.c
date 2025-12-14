/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!4294967295);
    var_16 = (((((61 ? -1 : 6))) ? (!434925317) : var_4));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_17 = var_13;
        var_18 = -12;
        var_19 = (arr_0 [i_0 - 1]);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_6 [5] = ((61 ? var_6 : (!-1)));
        var_20 = (arr_2 [8]);
    }
    var_21 = 1820458840;
    var_22 = ((var_10 ? var_5 : (min((~0), var_0))));
    #pragma endscop
}
