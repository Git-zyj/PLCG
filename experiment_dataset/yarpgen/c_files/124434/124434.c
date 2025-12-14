/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (-121 > var_14);
    var_21 = ((!((((var_12 > var_3) ? (~87457797) : var_19)))));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_22 = (((min(var_7, (~121))) - -125));
        var_23 = var_9;
        var_24 = (max(((((arr_1 [i_0 + 2]) && (!var_13)))), (~126)));
    }
    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {
        var_25 = ((((min((arr_2 [i_1 - 3] [i_1 - 3]), (arr_2 [i_1 - 2] [i_1 - 2])))) ? (max(var_16, (arr_2 [i_1 - 3] [i_1 - 3]))) : (arr_2 [i_1 - 2] [i_1 - 1])));
        arr_5 [i_1] = (((max(((var_1 ? -24361 : (arr_2 [8] [17]))), (((arr_2 [7] [i_1]) << 32))))) ? ((max((var_4 && var_18), 1))) : ((0 ? (((min((arr_4 [i_1 - 2]), 0)))) : (arr_3 [i_1 - 1]))));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_26 = (((arr_7 [i_2] [i_2]) ? -117 : ((-(arr_3 [i_2])))));
        var_27 = ((-(((max(1, 1))))));
        var_28 = ((!((max(var_4, var_13)))));
    }

    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_29 = 1016;
        var_30 = (((max(4294967295, var_6)) % 124));
        var_31 = (127 | ((((max((arr_9 [i_3]), (arr_8 [i_3] [i_3])))) ? -var_2 : (arr_9 [i_3]))));
        arr_10 [i_3] = 1;
    }
    #pragma endscop
}
