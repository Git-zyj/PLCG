/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = ((-1073582969 ? 8137 : (arr_1 [18] [i_0])));
        var_18 = ((7119973264610688934 ? -24074 : 2573605097366958901));
        arr_2 [i_0] |= (((!var_11) ? (!25203) : (-1 != var_14)));
        arr_3 [i_0] [i_0] = (!var_1);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        arr_7 [i_1] = ((~(arr_0 [i_1 - 1])));
        var_19 = ((-(arr_6 [0])));
        var_20 += (((arr_5 [i_1 - 1]) & (arr_5 [i_1 + 1])));
    }
    var_21 = (!10990297681918928313);
    var_22 = (min(var_22, var_10));
    #pragma endscop
}
