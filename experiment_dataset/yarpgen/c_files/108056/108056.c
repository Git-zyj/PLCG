/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        arr_2 [1] = (((~49793) ? (((!((max(34820, 30696)))))) : (!16460022096200285963)));
        var_17 = (min(var_17, ((((((arr_1 [i_0 - 2]) || (arr_1 [i_0 - 1]))) ? ((var_6 ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 1]))) : (((!(arr_1 [i_0 - 2])))))))));
        var_18 = (max(((min((arr_0 [i_0 - 1] [i_0 - 1]), (arr_0 [i_0 - 2] [i_0 - 2])))), (min((arr_1 [i_0]), (max(30716, 0))))));
        var_19 = ((((((-(arr_0 [i_0] [i_0]))) + (((51365 && (arr_0 [7] [i_0])))))) - ((-(arr_1 [i_0 - 2])))));
    }
    var_20 = var_9;
    var_21 |= (min(((var_4 ? ((var_8 ? var_5 : var_16)) : var_13)), -var_0));
    var_22 = (((-(21 * 4294967295))));
    #pragma endscop
}
