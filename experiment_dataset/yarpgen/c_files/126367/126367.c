/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = ((var_5 ^ (arr_0 [i_0])));
        arr_3 [i_0] = ((-460853766 ? ((var_7 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) : -6904));
        var_14 = (((arr_0 [i_0]) ? -20065 : 18725));
        arr_4 [i_0] = ((var_13 ? -460853765 : (arr_0 [i_0])));
    }
    var_15 = (max(var_0, (((6890 | -31342) ? (((var_10 ? var_13 : 1))) : ((var_5 ? var_9 : 4188251475))))));
    #pragma endscop
}
