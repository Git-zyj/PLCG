/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(((((((var_13 ? var_1 : var_4))) ? 214 : ((min(var_14, 9)))))), (max((min(var_7, var_17)), 0))));
    var_20 = (((((var_12 / 245) * 0)) != (((!((min(1, var_11))))))));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_21 |= 486801808;
        var_22 = (max(var_22, var_17));
        arr_2 [12] = (arr_1 [i_0 + 1] [i_0 + 1]);
    }
    #pragma endscop
}
