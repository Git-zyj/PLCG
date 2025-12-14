/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-((0 | ((-1260899257 ? 11419 : 11419))))));
    var_14 -= ((791213555 ? ((-(!var_5))) : -1));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_4 [20] |= (!var_1);
        arr_5 [i_0] = 3503753740;
        var_15 |= (min((min((arr_2 [i_0 + 1]), ((max((arr_3 [i_0] [2]), var_9))))), ((((-(arr_1 [i_0 - 1])))))));
    }
    var_16 += (((max(18446744073709551615, var_12)) % (((-((var_11 ? var_2 : var_0)))))));
    var_17 = var_2;
    #pragma endscop
}
