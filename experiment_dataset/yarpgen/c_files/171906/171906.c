/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (((((arr_1 [0] [i_0]) | (arr_1 [i_0] [i_0])))) ? ((max(248, 1751401240))) : (max(var_9, (arr_1 [i_0] [i_0]))));
        var_17 ^= (((!17845423724178197713) ? (min(((323100065407872369 ? var_7 : var_11)), (((~(arr_1 [i_0] [i_0])))))) : (!536868864)));
        arr_4 [i_0] [i_0] = (min((max(8160, (arr_1 [i_0] [i_0]))), ((max(-622521488, ((var_14 ? var_0 : var_15)))))));
        arr_5 [i_0] = (min(((7936 ? 17845423724178197700 : var_0)), (arr_0 [i_0] [1])));
        var_18 = (max(var_18, (min(var_16, var_15))));
    }
    var_19 = (max(var_19, var_13));
    var_20 = var_15;
    #pragma endscop
}
