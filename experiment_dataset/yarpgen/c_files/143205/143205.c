/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((!var_1) << (var_5 - 17777964730164668441)));

    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_11 ^= ((var_4 ? (((((arr_0 [0]) ? var_4 : var_1)) & (arr_1 [0]))) : ((max(((min(var_9, (arr_0 [0])))), ((19975948 ? 25192 : (arr_1 [2]))))))));
        var_12 = (((-((max(167, (arr_1 [i_0])))))));
        var_13 = 18446744073709551615;
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] [i_1] = (arr_3 [i_1] [i_1 - 1]);
        var_14 = (((((-((var_4 ? (arr_0 [4]) : (arr_2 [i_1])))))) == -7350392431760402710));
    }
    var_15 *= -7350392431760402682;
    var_16 = (((((min(var_8, 18446744073709551615))) ? var_5 : 11136829900928349533)) - var_1);
    #pragma endscop
}
