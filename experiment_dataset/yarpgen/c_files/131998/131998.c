/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((32513 + ((max(33023, 20196))))) | ((((var_14 ? 255 : 32513))))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_21 = 4294967295;
        arr_3 [i_0] = (max(1, (((33023 <= (arr_0 [i_0] [i_0]))))));
        var_22 = ((~(-21550 & 17951886745456809484)));
    }
    var_23 = ((9055556597182754261 / (min(807094563162940542, var_7))));
    #pragma endscop
}
