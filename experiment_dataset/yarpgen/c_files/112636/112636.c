/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (max((arr_0 [i_0]), (((max(3195148160388006775, 14281)) / ((max(var_0, var_0)))))));
        var_17 = ((-1121653140 / ((1121653131 ? -1121653158 : (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = var_13;
        arr_6 [i_1] = 1121653121;
        var_18 = (3685825421 % -1121653122);
        var_19 = (min(var_19, ((max((((48 ? 74 : 181))), (arr_0 [i_1]))))));
    }
    var_20 = (max(var_20, (min(255, 3563724303))));
    #pragma endscop
}
