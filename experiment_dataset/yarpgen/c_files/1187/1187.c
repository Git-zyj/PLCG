/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 = 137;
        var_18 = (arr_1 [i_0] [i_0]);
        var_19 -= ((((~(arr_1 [i_0] [i_0]))) + (var_8 + var_16)));
    }
    var_20 = ((-(-3153228544 / var_2)));
    var_21 = (min(var_21, var_8));
    var_22 = -var_2;

    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_23 -= ((!((((arr_4 [i_1] [i_1]) ^ ((50331648 ? 50331650 : 1)))))));
        var_24 = (max(var_24, (arr_3 [i_1])));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = (min((((((var_8 ? (arr_6 [i_2]) : -50331649))) ? 1934414964950300578 : ((((arr_4 [i_2] [i_2]) ? var_8 : (arr_4 [i_2] [i_2])))))), (min(-1934414964950300579, (arr_3 [i_2])))));
        var_25 = ((((1877202325 | ((var_4 ? (arr_3 [i_2]) : var_11)))) & -50331654));
        arr_10 [i_2] [i_2] = ((145 || (~var_2)));
        arr_11 [i_2] = ((((arr_5 [i_2]) + 2147483647)) >> (((max(50331665, -1877202326)) - 50331663)));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {
        var_26 = (arr_3 [i_3]);
        arr_15 [i_3] |= (((arr_12 [i_3]) / var_15));
    }
    #pragma endscop
}
