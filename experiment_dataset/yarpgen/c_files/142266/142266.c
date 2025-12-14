/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -10531463;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 = ((~((~(3457374583645352542 ^ var_0)))));
        arr_4 [1] = (((((var_4 <= ((24302 ? var_14 : var_11))))) > ((((((arr_3 [i_0] [i_0]) != (arr_2 [9]))) || -19728)))));
    }
    var_17 = ((var_14 > (((var_13 ^ var_4) ? ((min(var_14, var_14))) : ((var_5 ? var_4 : var_11))))));
    #pragma endscop
}
