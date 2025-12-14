/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_9));
    var_11 = 7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (max(var_12, (arr_1 [i_0] [i_0])));
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        arr_5 [i_1] = (min(((94 ? (max(var_8, 94)) : (92 || var_9))), ((~(min(var_1, (arr_4 [i_1] [i_1 + 1])))))));
        arr_6 [i_1] = ((~(((!(((161 ? 144 : 1498000531))))))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_13 -= ((((((arr_4 [20] [20]) ? ((~(arr_7 [i_2]))) : 1))) ? (arr_3 [i_2] [i_2]) : (min(1, (((-2147483647 - 1) / 162))))));
        arr_9 [i_2] = ((((~((~(arr_3 [i_2] [i_2])))))) && (arr_4 [i_2] [15]));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        arr_12 [i_3] |= (((((arr_7 [i_3]) ? ((19 ? 161 : (arr_8 [20] [i_3]))) : 65535)) << (((-976232917 / var_6) - 47410474))));
        var_14 = max((max(var_6, (arr_4 [i_3] [i_3]))), 2147483647);
        var_15 = ((((1 == 1) || 18)));
    }
    #pragma endscop
}
