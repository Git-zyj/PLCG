/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_17 -= (min((((var_9 < var_12) ? var_0 : ((32768 ? var_4 : (arr_2 [i_0]))))), (((-((var_14 ? (arr_2 [i_0]) : -810403778)))))));
        var_18 = -var_14;
        var_19 = (min(var_19, (arr_0 [i_0])));
        arr_3 [i_0] [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = 0;
        var_20 += (((arr_2 [i_1]) >= (min(-1, 7301633144560512327))));
        arr_8 [i_1] = (var_1 <= 1);
    }
    var_21 = ((((((((2595343700 ? -1390969930 : var_3))) ? var_13 : var_16))) ? var_13 : var_11));
    #pragma endscop
}
