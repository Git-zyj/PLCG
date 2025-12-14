/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~(max(((max(-24366, var_6))), (max(var_12, 56888))))));
    var_19 = (min(var_19, var_16));
    var_20 = (min(((max(var_12, var_8))), ((((min(var_2, 8639))) ? (var_8 % var_2) : var_0))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_21 = ((-2551404751 ? ((max(var_17, var_1))) : ((((((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : 63)) | (arr_1 [9] [i_0]))))));
        arr_3 [i_0] = (min((min((arr_0 [i_0]), (arr_0 [i_0]))), 24373));
        var_22 = (min(var_22, (24366 | 11613000398901963071)));
    }
    var_23 = var_14;
    #pragma endscop
}
