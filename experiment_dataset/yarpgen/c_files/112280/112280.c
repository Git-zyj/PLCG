/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((((var_11 ? var_11 : var_13))))) == var_1));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = ((((arr_2 [i_0 + 3]) | (~5))));
        arr_4 [i_0] [i_0] = (((arr_2 [i_0]) ? ((((arr_0 [i_0] [i_0]) ^ (arr_0 [i_0] [i_0])))) : var_14));
        arr_5 [i_0] = (((((var_8 ? 18874 : (arr_0 [i_0] [i_0 + 2])))) ? (((arr_2 [i_0]) ? 226 : var_12)) : var_2));
        var_20 = ((((((!13156323096448258286) ? (!31) : (var_0 && 1821499367)))) <= (((arr_1 [i_0 + 4] [i_0]) ? -1742839323623744022 : var_14))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        arr_8 [i_1] = (var_7 >= 5290420977261293330);
        arr_9 [i_1] = ((!(arr_7 [i_1 - 1] [i_1 + 1])));
        var_21 *= ((((((arr_7 [i_1] [i_1]) & 5290420977261293330))) ? var_16 : var_17));
        arr_10 [i_1] = 3988602633;
    }
    #pragma endscop
}
