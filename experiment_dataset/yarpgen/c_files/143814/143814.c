/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    var_19 = var_10;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 -= ((((max((max(1280021885651694197, (arr_0 [i_0]))), (((212974978 ? 212974979 : (arr_0 [6]))))))) ? (((arr_1 [i_0]) ? (arr_0 [i_0]) : 18446744073709551615)) : (arr_0 [i_0])));
        var_21 ^= (arr_1 [i_0]);
        arr_2 [i_0] = (((((~-16) ? 212974972 : (arr_0 [i_0]))) < ((-24266 ? (!-102) : ((~(arr_0 [i_0])))))));
        arr_3 [i_0] = arr_1 [i_0];
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_22 = (arr_4 [i_1]);
        arr_6 [i_1] [i_1] = ((((max(176, (arr_0 [i_1])))) ? var_0 : (((min((arr_4 [i_1]), (arr_0 [i_1])))))));
        var_23 = (min(((min(-24263, (arr_1 [i_1])))), (((arr_4 [i_1]) ? -18446744073709551604 : (arr_1 [i_1])))));
        arr_7 [i_1] = (min((min((arr_4 [i_1]), (arr_0 [i_1]))), var_15));
    }
    #pragma endscop
}
