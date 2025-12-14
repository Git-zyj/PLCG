/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_17 = (!1);
        var_18 *= ((~(!var_4)));
        arr_2 [1] [i_0 - 1] &= 2147352576;
        arr_3 [2] [2] = (arr_1 [i_0] [i_0 + 2]);
    }
    var_19 += (1244802491 > var_6);
    var_20 = 16127501998482726220;
    #pragma endscop
}
