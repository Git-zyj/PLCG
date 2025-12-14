/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (((var_14 ? var_8 : (max(-2622474114969371948, (177 >= var_17))))))));
    var_19 |= (max(var_16, (((((var_14 >> (32966 - 32958)))) ^ var_3))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0 + 1] = (3178 - 20984);
        var_20 = (((arr_2 [i_0 - 1] [i_0 + 1]) ? 42 : (arr_2 [i_0 + 1] [i_0 - 1])));
    }
    #pragma endscop
}
