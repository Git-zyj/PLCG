/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += ((((max(1039901858, (((var_7 ? 0 : var_1)))))) && -var_11));
    var_13 = (!var_8);
    var_14 = var_3;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_15 &= ((-(max(1, (arr_0 [i_0 + 1])))));
        arr_2 [i_0] = (((((1 % (arr_0 [i_0 - 1])) / -6343))));
    }
    #pragma endscop
}
