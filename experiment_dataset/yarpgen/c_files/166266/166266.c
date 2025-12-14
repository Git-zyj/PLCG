/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((max(-32652, var_0))) ? var_10 : (max(-679782514, var_8)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_12 &= ((167 >> (((var_10 || (arr_0 [i_0]))))));
        var_13 = var_4;
    }
    #pragma endscop
}
