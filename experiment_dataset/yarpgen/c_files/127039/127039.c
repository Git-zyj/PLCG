/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (((((arr_1 [i_0]) < (((arr_2 [i_0] [9]) ? (arr_1 [1]) : (arr_1 [i_0]))))) ? (-213647442 < var_14) : (arr_1 [1])));
        var_20 ^= 1;
        arr_4 [10] [7] = ((56 << ((((~(arr_1 [i_0]))) + 11052))));
    }
    var_21 = var_4;
    var_22 = (!var_14);
    var_23 = (!1);
    #pragma endscop
}
