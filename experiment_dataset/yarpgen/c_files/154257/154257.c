/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 *= (min((arr_1 [1] [i_0]), ((27 ? 4294967284 : 3228069779922201479))));
        arr_4 [i_0] |= (min((((!(((~(arr_2 [16]))))))), ((((min((-32767 - 1), -13909))) ? (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [7]))) : 159))));
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        arr_7 [i_1] [22] = 4294967278;
        arr_8 [1] = (arr_6 [6]);
        arr_9 [i_1] [i_1] = (((~-23) % (arr_5 [i_1 + 1] [i_1])));
    }
    var_18 = var_15;
    #pragma endscop
}
