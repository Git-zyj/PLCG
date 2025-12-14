/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((42071 ? ((max(1023, 4001496895))) : ((var_1 ? var_9 : var_7))))) ^ (((~26783) ? ((32498 ? var_0 : var_10)) : (~var_5)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 = ((~((~((1 ? 1562592408 : -1033))))));
        arr_2 [i_0] [i_0] = (max(215, (!var_7)));
        arr_3 [i_0] = (+(min((arr_1 [i_0]), (arr_1 [i_0]))));
        arr_4 [i_0] = 12267869724463759546;
    }
    var_13 -= min(((var_0 & (-997 & 13106850370028860125))), (((var_10 ? (max(1561196313, var_6)) : 255))));
    #pragma endscop
}
