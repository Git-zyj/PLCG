/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((~62828), var_12));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_16 = ((-((var_7 ? (((-98 > (arr_0 [i_0] [i_0])))) : (!4908948937510845529)))));
        var_17 = ((var_4 ? -199620158 : 0));
        var_18 = (max((arr_0 [10] [i_0]), (((1 ? 2040 : -19)))));
    }
    #pragma endscop
}
