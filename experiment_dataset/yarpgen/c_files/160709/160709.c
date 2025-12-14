/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 = 32764;
        arr_2 [i_0] [1] = -32764;
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_19 = ((((((var_4 + var_3) ? (arr_3 [i_1]) : (((-32764 ? -32764 : -32764)))))) - ((-32764 ? 17796271695782835788 : 32749))));
        var_20 = (max(var_20, ((((((((arr_0 [i_1 - 1] [14]) && (((var_5 ? -32749 : var_16))))))) ^ (max((min((-9223372036854775807 - 1), 18446744073709551615)), var_6)))))));
    }
    for (int i_2 = 1; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_21 = ((~(max((arr_5 [i_2 - 1] [i_2]), (arr_5 [i_2 - 1] [i_2])))));
        arr_8 [i_2] [i_2] = (max((((var_9 | (arr_5 [i_2] [i_2])))), ((-((30 ? -987208103 : 18446744073709551604))))));
        arr_9 [i_2] [i_2] = var_16;
    }
    var_22 *= (min((0 | 6741), var_11));
    var_23 = ((((~((1 ? var_14 : 1397388143177295151))))) ? ((-(min(var_9, var_10)))) : var_12);
    #pragma endscop
}
