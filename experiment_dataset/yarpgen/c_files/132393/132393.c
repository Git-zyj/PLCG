/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~-1);
    var_16 = (((((max(var_10, 3389310400))) ? var_4 : 255)));
    var_17 = var_6;
    var_18 = var_7;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_19 -= (~-var_3);
        arr_2 [i_0] [i_0] = (52798 + -5332376557053671712);
        arr_3 [i_0] [i_0] = var_2;
    }
    #pragma endscop
}
