/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((var_8 ^ ((min(-1, 235)))))) ? (arr_0 [i_0 - 1]) : (((~var_1) ? ((var_3 ? (arr_1 [i_0 - 1] [i_0]) : (arr_1 [i_0] [i_0]))) : (arr_0 [i_0])))));
        var_10 = max((((arr_1 [i_0 - 1] [i_0 - 1]) ? (arr_1 [i_0] [i_0 - 1]) : 255)), (-23 != 65525));
        var_11 = (min(var_11, (((+(min(((((arr_1 [i_0 - 1] [i_0 - 1]) ? 4294967294 : (arr_1 [i_0] [1])))), (((-9223372036854775807 - 1) ? 549739036672 : (arr_1 [i_0] [i_0 - 1]))))))))));
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_12 *= 941119310;
        var_13 -= (((((18446743523970514943 / (arr_4 [i_1])))) ? -4294967295 : var_9));
    }
    for (int i_2 = 2; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_14 -= (((-(min(-1360473936, var_3)))));
        var_15 = 9223372036854775807;
    }
    var_16 = var_2;
    #pragma endscop
}
