/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;
    var_17 = var_0;
    var_18 = -22926;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_19 |= (((((var_3 & (arr_1 [i_0]))) < (arr_1 [i_0]))) ? (((arr_0 [i_0]) & 11557246006004280564)) : (((11557246006004280565 ? (var_0 < 6889498067705271043) : (arr_0 [i_0])))));
        arr_3 [i_0] [i_0] = arr_0 [i_0];
        arr_4 [i_0] = (((7452243276646648714 ? 1 : 1645470912)));
        var_20 = (-32767 - 1);
        var_21 = (((arr_2 [i_0] [i_0]) ? ((~(arr_2 [i_0] [i_0]))) : ((((arr_2 [i_0] [i_0]) == (arr_2 [i_0] [i_0]))))));
    }
    var_22 = (((!-1) ? var_7 : (~var_3)));
    #pragma endscop
}
