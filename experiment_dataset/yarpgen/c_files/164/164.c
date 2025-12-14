/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 |= (arr_1 [i_0] [i_0]);
        var_13 += ((1 >> (((arr_0 [i_0]) + 371775565))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_14 = (!var_0);
        var_15 = (max((min(((((arr_1 [i_1] [i_1]) < (arr_0 [i_1])))), (max((arr_3 [i_1]), var_5)))), 0));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_16 = (max(var_16, (((((((arr_1 [i_2] [i_2]) ? var_7 : (arr_1 [i_2] [i_2])))) ? (arr_1 [i_2] [i_2]) : ((1 ? var_2 : var_5)))))));
        var_17 = (arr_1 [i_2] [i_2]);
        var_18 ^= (max(6874602762923489168, 2147483642));
        var_19 = var_1;
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
    {
        var_20 = (((arr_5 [i_3]) ? var_3 : (((((arr_3 [i_3]) >= (arr_8 [i_3] [i_3])))))));
        var_21 = (max(var_21, (((-((max(var_5, ((((arr_6 [i_3] [i_3]) < -11)))))))))));
    }
    var_22 = max((((var_6 | ((var_4 ? var_5 : var_9))))), (var_7 ^ var_7));
    var_23 = (((((((var_4 ? -8360051012116228942 : var_5))) ? var_4 : -var_11)) << 1));
    #pragma endscop
}
