/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_18 = (max(var_18, var_12));
        arr_4 [i_0 - 1] = ((!(arr_3 [i_0 + 1])));
        var_19 = ((-(arr_0 [i_0 + 1])));
        var_20 = ((-(~2366654036)));
    }
    var_21 = ((((min((var_8 % var_10), var_2))) * (min((!var_5), var_0))));
    var_22 -= var_5;
    var_23 = (--926);
    #pragma endscop
}
