/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = 4364989041812636710;
        var_17 = (arr_0 [i_0]);
    }
    var_18 = ((((!(!var_13))) ? var_6 : var_0));
    var_19 = (((((((min(var_1, var_2)) != (!var_10))))) >= (min(((min(var_15, var_5))), var_8))));
    #pragma endscop
}
