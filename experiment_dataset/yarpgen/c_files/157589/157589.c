/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_19 = ((var_8 || (((~((((arr_1 [i_0]) <= 4294967295))))))));
        arr_2 [i_0] = (max((arr_1 [i_0]), (((arr_0 [i_0] [i_0]) | (0 ^ 0)))));
        var_20 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_21 = var_8;
        var_22 = (max((arr_4 [i_1] [i_1]), ((1073741568 << (-14 + 17)))));
    }
    #pragma endscop
}
