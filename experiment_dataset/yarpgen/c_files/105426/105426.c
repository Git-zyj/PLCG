/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_9;
    var_11 = (min(var_11, ((((max(-7804433110867429561, (((var_5 ? var_0 : var_2))))) <= ((((var_9 ? 7804433110867429560 : var_1)) | var_7)))))));
    var_12 = (((1 ? (max(274877906943, 568913053) : 3892561598))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_13 = (min(var_13, (((1023 | ((max((!3766093401051255886), 0))))))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = 14680650672658295730;
            var_14 += ((!((((-100418533 ? (arr_0 [i_1]) : var_8))))));
        }
        arr_6 [0] &= (min((min(1661038649, ((min((arr_2 [10] [i_0]), 206))))), (arr_3 [i_0])));
        arr_7 [i_0] [i_0] = (arr_3 [i_0]);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_15 = (min(var_15, (arr_10 [i_2])));
        var_16 *= ((~(arr_8 [i_2])));
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        arr_13 [i_3] [i_3] = ((max((var_8 - var_8), 16361015336327671283)));
        var_17 += (max(-8976701042122997377, -7804433110867429556));
    }
    #pragma endscop
}
