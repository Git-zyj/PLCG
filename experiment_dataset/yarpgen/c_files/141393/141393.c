/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((!(+-968895698)));
        var_20 = -1;
        var_21 = 4969071640512209226;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        var_22 = (max(var_22, 968895698));
        var_23 += 13477672433197342399;
    }
    var_24 = (max((((13477672433197342390 ? -28 : var_3))), (((-26 + 2147483645) ? (!var_12) : ((968895703 ? 3326071597 : 968895708))))));
    var_25 = (min(var_25, (((((!((min(26, 39262))))))))));
    #pragma endscop
}
