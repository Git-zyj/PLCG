/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_1 + 2] = (((arr_1 [i_0]) ? ((-98 ? var_0 : -27752)) : 49563));
            arr_8 [17] = (arr_4 [i_1 + 2] [i_1 + 2] [i_1 + 2]);
        }
        var_20 = ((+((var_16 ? (!83) : (arr_1 [i_0])))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = (min(((max(var_7, (arr_9 [i_2])))), (max(((var_19 ? 65535 : var_14)), (arr_2 [i_2] [i_2])))));
        var_21 = ((((max((arr_5 [13] [i_2]), -172))) > var_6));
        var_22 = ((((((~97) ^ (!52968)))) ? (((min(0, -98)))) : ((((var_7 && (arr_0 [i_2])))))));
        arr_13 [i_2] = (-84 >= var_18);
    }
    var_23 += (((((var_4 << (var_3 - 30445)))) != (min(((115 ? 6 : 18)), var_14))));
    #pragma endscop
}
