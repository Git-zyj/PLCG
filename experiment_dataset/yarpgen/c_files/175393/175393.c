/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;
    var_19 = var_17;
    var_20 = ((var_5 ? ((((0 ? var_10 : var_1)) & var_11)) : 6049163306679931156));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = (max(6950085403256749892, 2872685189783459872));
        arr_4 [i_0] = ((arr_1 [i_0]) ? (((max(var_4, (arr_1 [i_0]))))) : ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : 1))) - (max(var_2, (arr_1 [i_0]))))));
        arr_5 [14] = (arr_1 [8]);
    }
    #pragma endscop
}
