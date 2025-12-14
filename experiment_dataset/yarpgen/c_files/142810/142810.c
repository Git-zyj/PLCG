/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;
    var_19 = (max(5, 1519472565));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 = (~-1519472566);
        arr_2 [i_0] = (max((((((max(8771060122679153718, var_16))) || ((max(-8771060122679153718, var_3)))))), var_4));
        arr_3 [i_0] = ((((max(166, (arr_0 [i_0] [i_0])))) ? (((82 && (arr_0 [i_0] [i_0])))) : ((((arr_1 [i_0]) || (arr_0 [i_0] [i_0]))))));
        var_21 = var_10;
        var_22 = min(0, ((((arr_1 [i_0]) || (arr_1 [i_0])))));
    }
    #pragma endscop
}
