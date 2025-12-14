/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = ((!((((arr_0 [i_0]) ? ((((arr_2 [i_0]) ? 0 : var_8))) : (((arr_2 [i_0]) ? var_18 : 3516265446)))))));
        var_20 = (((((((arr_2 [i_0]) <= 778701861)))) | ((11899901592132963176 ? 7324 : 3516265442))));
    }
    var_21 = (((max((var_12 - 7085657241310948802), 3516265446)) < ((max((var_10 != var_17), 3516265446)))));
    var_22 = (max(var_22, (778701865 <= 778701867)));
    #pragma endscop
}
