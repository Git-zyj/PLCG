/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_1 | (((var_10 << ((((((var_11 ? var_5 : var_10)) + 4217381660745546191)) - 22)))))));
    var_14 = (((max(var_5, 25881)) == -14498));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = (var_12 == -3141714772587044068);
        arr_3 [i_0] = 43;
        arr_4 [10] |= 8857033022828599876;
    }
    #pragma endscop
}
