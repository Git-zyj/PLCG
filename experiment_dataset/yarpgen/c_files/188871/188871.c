/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -8429;
    var_15 = (max(var_15, (min(17768, (max(((min(var_13, var_5))), ((var_2 ? 8126464 : 18014398509219840))))))));
    var_16 = var_6;

    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_17 = ((-4208 + ((((~(arr_1 [8]))) << (1291832340 - 1291832339)))));
        var_18 &= (min((min((arr_2 [i_0 - 1]), (arr_0 [i_0 - 1] [i_0 - 1]))), (((min(var_12, (arr_1 [4]))) % (arr_1 [i_0])))));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_19 = ((((-(arr_4 [i_1])))));
        var_20 = (min((arr_2 [i_1]), 1160853530));
        var_21 = ((((~(arr_3 [i_1])))) * (max(9873598121817728433, (arr_3 [i_1]))));
    }
    #pragma endscop
}
