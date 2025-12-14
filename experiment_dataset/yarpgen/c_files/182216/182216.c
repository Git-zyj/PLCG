/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((var_14 ? -1960015951978019680 : 13426) * (52 < var_5)))));
    var_18 = (min(var_1, (((((var_1 ? var_4 : var_2)) < ((var_4 ? -1318662904 : var_3)))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = -1318662903;
        arr_5 [0] [i_0] = (((((var_8 >= -100) & -47))) ? (((-var_4 | (!var_7)))) : (min((-1246463173 & 18446744073709551591), (arr_3 [i_0] [i_0]))));
    }
    var_19 = var_11;
    #pragma endscop
}
