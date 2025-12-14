/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((var_3 != ((((max(var_4, var_12))))))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = var_2;
        var_18 = (arr_1 [i_0] [i_0]);
        var_19 &= (arr_0 [7]);
        var_20 -= (!(((~(arr_0 [i_0])))));
    }
    var_21 = (min(var_21, ((((((((max(var_10, var_14))) ? var_13 : var_14))) ? var_15 : -16)))));
    var_22 = (min(var_22, (((var_10 ? ((~((max(var_2, var_8))))) : ((1890618805009116926 ? var_10 : var_7)))))));
    var_23 = var_11;
    #pragma endscop
}
