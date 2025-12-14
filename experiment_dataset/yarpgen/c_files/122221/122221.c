/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 = (max(var_14, ((((((8332100068555034816 << (((((arr_0 [i_0]) ? var_9 : var_6)) - 10264769457565957767))))) ? (((((1282301260 << (3706557168 - 3706557168))) & (arr_0 [23])))) : (((((var_9 | (arr_0 [i_0])))) ? (arr_1 [i_0]) : (arr_1 [i_0]))))))));
        var_15 ^= (max(var_12, -8586218015961908138));
    }
    var_16 = var_12;
    var_17 = var_0;
    #pragma endscop
}
