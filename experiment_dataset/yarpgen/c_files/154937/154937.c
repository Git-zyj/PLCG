/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= var_6;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_5 [i_1] [i_1] = var_7;
            var_15 = (((((~(arr_2 [i_0])))) ? (((max((arr_2 [i_0]), (arr_2 [i_0]))))) : (~2644839377)));
            arr_6 [24] [24] = ((((1650127919 ? ((max(27388, var_10))) : (~var_9))) >= (arr_0 [i_1])));
        }
        for (int i_2 = 2; i_2 < 24;i_2 += 1)
        {
            arr_9 [i_0] = 812530751;
            var_16 = ((~(!2644839375)));
            var_17 = (-(((min(var_3, var_4)) + (~var_11))));
            var_18 = (!((max((-64 & var_11), ((var_10 ? var_3 : var_12))))));
        }
        arr_10 [i_0] = (!var_5);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_19 = (arr_1 [i_3]);
        var_20 = (~27384);
    }
    var_21 = (~1);
    #pragma endscop
}
