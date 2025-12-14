/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;
    var_21 = var_0;
    var_22 = (((~-1) ? (((-68 ? -1199878574 : var_17))) : var_18));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_23 = (min(var_23, (((!((max(433962628, 3307077512648976615))))))));
        arr_3 [i_0] = (max((max(-957492067, (arr_1 [i_0]))), (min((arr_2 [i_0]), (arr_1 [i_0])))));
        arr_4 [i_0] [11] = 171667017;
        var_24 = -var_5;
        var_25 = (arr_1 [i_0]);
    }
    #pragma endscop
}
