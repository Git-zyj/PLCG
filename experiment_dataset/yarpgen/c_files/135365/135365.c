/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((min(var_7, var_3))) ? (1073741823 % 3221225488) : (~var_1))));
    var_12 = (((var_0 / var_7) ? ((max((max(14946, 4294967295)), (max(var_4, 3221225472))))) : ((((min(var_2, 65535))) ? 8622989877105243400 : 0))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 = (((arr_1 [i_0] [i_0]) | (arr_1 [i_0] [i_0])));
        arr_4 [i_0] [11] = (arr_1 [i_0] [i_0]);
        arr_5 [2] = (arr_1 [12] [i_0]);
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        var_14 = (max(var_14, (((~(((arr_2 [i_1 - 2] [i_1]) - (arr_2 [i_1 + 2] [i_1]))))))));
        arr_10 [i_1] = (max((((~((~(arr_9 [i_1])))))), (min(((~(arr_6 [3]))), 1073741823))));
        var_15 = 755886961;
        arr_11 [10] = (min(((~(max(-115, var_8)))), (max(14946, (min((arr_7 [i_1 - 2]), 4294967295))))));
        var_16 = var_7;
    }
    #pragma endscop
}
