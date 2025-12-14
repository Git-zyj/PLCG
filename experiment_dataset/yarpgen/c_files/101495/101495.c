/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (-83 != 1736590277);
    var_19 = (~-5113);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_20 = (((((((arr_1 [i_0]) != (arr_0 [i_0])))) == (arr_0 [i_0]))));
        arr_2 [14] = (((var_5 ? var_8 : ((~(arr_0 [i_0]))))));
        var_21 = (1736590260 ^ -1736590282);
        var_22 = ((~(((((arr_0 [2]) <= var_3)) ? var_13 : (arr_1 [i_0])))));
    }
    #pragma endscop
}
