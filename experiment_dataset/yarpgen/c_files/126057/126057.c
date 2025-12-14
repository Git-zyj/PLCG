/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_10 = (min((((~(arr_0 [13])))), (min(var_6, var_8))));
        var_11 = ((+((max((arr_0 [i_0]), (arr_0 [i_0]))))));
        arr_2 [i_0] [i_0] = arr_1 [i_0];
        var_12 = (min(11586230129893927992, (((~(arr_1 [i_0]))))));
    }
    var_13 = ((-((6597495599988317493 ? 776658515 : 229240531))));
    var_14 &= -97;
    var_15 = ((-(min((!35803), ((var_3 ? var_1 : var_9))))));
    var_16 = (max(var_16, var_3));
    #pragma endscop
}
