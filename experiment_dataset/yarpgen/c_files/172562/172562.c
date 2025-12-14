/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((var_3 ? var_10 : (~0))) + var_10));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_15 = 16606987731627621674;
        arr_2 [i_0 + 1] = (arr_0 [i_0 - 2]);
    }
    var_16 = var_1;
    var_17 = (max(var_8, ((((var_5 != 10287307823304005519) ? var_10 : 251)))));
    var_18 |= (((5620406248905405515 || var_7) ? (((~(~233)))) : var_11));
    #pragma endscop
}
