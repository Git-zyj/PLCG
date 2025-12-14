/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += var_1;
    var_15 = var_3;
    var_16 = var_2;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 = arr_1 [14];
        var_18 = (((!4294967280) && -1));
    }
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1 + 1] = (arr_3 [i_1]);
        var_19 = ((((((((137170518016 << (-29882 + 29884)))) ? 65535 : (arr_4 [i_1 + 2] [i_1 + 1])))) ? (((~(arr_2 [i_1])))) : -var_0));
    }
    var_20 = var_12;
    #pragma endscop
}
