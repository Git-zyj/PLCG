/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_8;
    var_20 = ((-var_9 ? 121 : var_10));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] &= (max((arr_0 [i_0]), (((((max(0, (arr_0 [i_0])))) ? 0 : (1 > 1))))));
        var_21 = (((arr_1 [i_0]) | (-95 | 1)));
        var_22 = var_11;
        var_23 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (max(((((max(123, (arr_4 [7])))) ? (7128732341206514510 * 0) : var_17)), var_17));
        arr_6 [i_1] |= (((((1 * (arr_4 [i_1])))) ? 127 : ((((arr_3 [i_1] [4]) ? -2889192916039536839 : (arr_3 [i_1] [12]))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_24 = (!127);
        arr_10 [i_2] [i_2] = ((~(arr_7 [i_2])));
    }
    var_25 = var_1;
    var_26 = ((((((-19817 == 1) << ((0 << (-103 + 156)))))) ? 0 : 1));
    #pragma endscop
}
