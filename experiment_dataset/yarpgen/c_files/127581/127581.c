/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_10 = var_4;
        var_11 = var_9;
        arr_3 [4] [4] = (arr_1 [i_0] [i_0]);
        arr_4 [18] &= (~var_3);
        var_12 = (min((!var_1), 3117548585));
    }
    var_13 = (max(var_4, 1177418706));
    var_14 = ((~(!var_9)));
    #pragma endscop
}
