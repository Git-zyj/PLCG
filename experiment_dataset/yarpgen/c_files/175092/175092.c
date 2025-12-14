/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            arr_5 [i_0] = (arr_1 [i_1]);
            var_16 = var_9;
        }

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_17 = (max(var_17, (7 == -114397345)));
            var_18 = (((arr_2 [i_0] [i_0]) ? 32767 : (min((arr_7 [i_0] [i_2]), 9225204106795097439))));
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_10 [i_3] = ((-(((var_5 != (arr_0 [i_0]))))));
            arr_11 [i_0] = (206357308061933189 / var_11);
            var_19 = (min(var_19, (((1565397586 ? -368355843 : 0)))));
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_20 += ((~(((max((arr_8 [i_0] [i_0]), var_3))))));
            var_21 ^= ((657350054 ? -1565397586 : 1));
        }
        var_22 = (max(var_22, (2071865061 && 33632)));
        var_23 = 1;
    }
    var_24 = ((var_3 ? (((~-1985574961367142131) ? ((var_2 ? var_3 : var_1)) : var_2)) : (max((~37), 1))));
    #pragma endscop
}
