/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (arr_1 [i_0]);
        arr_4 [i_0] [i_0] = var_1;
        var_15 *= -2074699180000969253;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_16 = -2074699180000969253;
        var_17 = ((arr_1 [i_1]) ? ((+((((arr_7 [i_1]) && (arr_6 [i_1] [i_1])))))) : (!var_6));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_18 = (arr_9 [i_2] [i_2]);
        arr_11 [i_2] [i_2] = min((((-2074699180000969253 ? (((240 >= (arr_9 [i_2] [i_2])))) : ((((arr_10 [i_2]) >= -1)))))), (min(((min(202, 3279037471))), 0)));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_15 [i_3] = ((((((((arr_12 [i_3]) ? (arr_12 [i_3]) : (arr_12 [i_3])))) || -681761204)) || (arr_12 [i_3])));
        var_19 |= 0;
    }
    var_20 = ((((((max(7, var_2))) ? var_9 : ((1825309367 ? var_6 : -7594))))) ? var_0 : ((var_6 ? var_5 : ((var_2 ? var_6 : var_13)))));
    #pragma endscop
}
