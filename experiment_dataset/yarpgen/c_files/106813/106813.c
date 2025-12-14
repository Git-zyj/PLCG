/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_18 = (arr_1 [3] [3]);
        var_19 = (arr_1 [i_0 - 1] [i_0]);
        var_20 = (min(((141863388262170624 ? (((0 ? 63 : 7))) : 14054943141386011961)), 16384));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_21 = ((51667 - (((((40228 ? (arr_0 [i_1]) : var_7))) ? (((arr_1 [i_1] [i_1]) ? var_7 : (arr_1 [15] [10]))) : ((var_8 ? (arr_3 [12]) : (arr_1 [i_1] [i_1])))))));
        var_22 = (arr_2 [i_1]);
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_23 |= (!40242);
        var_24 = ((-((max((arr_6 [i_2]), (arr_6 [i_2]))))));

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_25 = var_10;
            var_26 = ((~(arr_9 [i_3])));
        }
    }
    var_27 = ((var_7 ? var_6 : 40226));
    var_28 = -31669;
    #pragma endscop
}
