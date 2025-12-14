/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    var_16 = var_10;

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_17 = (max(var_17, 1));
        var_18 = arr_1 [i_0];
        arr_4 [i_0] = (max((1 / 1), (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_19 = ((((!(arr_0 [i_1] [i_1]))) ? 1174057214 : (((arr_6 [i_1]) ? (max(var_4, 1174057221)) : (1 * 0)))));
        var_20 *= 1050729484;
    }
    var_21 *= (var_4 == var_13);
    #pragma endscop
}
