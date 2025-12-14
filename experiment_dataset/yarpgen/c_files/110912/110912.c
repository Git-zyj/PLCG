/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (var_5 ? (((var_4 != var_4) % (~var_10))) : var_11);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 = ((((max((((!(arr_3 [11])))), ((~(arr_0 [i_0] [i_0])))))) ? (((~(arr_0 [i_0] [i_0])))) : ((+((var_11 << (((arr_1 [i_0]) - 3117494369))))))));
        arr_4 [19] = var_6;
        arr_5 [i_0] |= (((((~(arr_0 [i_0] [i_0])))) ? (min(((var_3 ? var_7 : var_0)), (~var_9))) : (((~((((arr_0 [i_0] [15]) < 7080382838882156602))))))));
    }
    #pragma endscop
}
