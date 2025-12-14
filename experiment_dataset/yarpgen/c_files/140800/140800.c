/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((var_14 & -3529688882), ((((126 | -1) ? (~var_6) : (var_7 && var_0))))));
    var_19 = (~var_11);

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_20 = (max(var_20, (((var_5 ? (min((!1579689230), (max(var_7, (arr_0 [i_0] [i_0]))))) : (max((max(var_4, 3385526355)), var_10)))))));
        arr_2 [i_0] = (arr_0 [i_0] [8]);
    }
    var_21 = ((!((min(var_11, var_4)))));
    var_22 = (~var_12);
    #pragma endscop
}
