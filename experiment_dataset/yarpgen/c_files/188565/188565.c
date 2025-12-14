/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((~(arr_2 [i_0] [i_0])));
        var_10 = (9275 >= 21958);
        var_11 = -21958;
        var_12 = min(21958, 1326753137);
    }
    var_13 = max((-var_6 || var_7), 21958);
    var_14 = ((var_6 ? ((((var_8 ? 45351 : var_4)) * ((var_5 ? var_7 : var_4)))) : var_7));
    #pragma endscop
}
