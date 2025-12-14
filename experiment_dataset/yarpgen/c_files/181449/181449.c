/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 18446744073709551615;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 = max((((arr_1 [i_0] [14]) ? (min(17365532047734945455, 36028788429029376)) : (((arr_1 [i_0] [i_0]) ? (arr_0 [11]) : 18446744073709551592)))), (((!(arr_0 [i_0])))));
        var_19 = 12248388949562245882;
        arr_2 [i_0] = max((((((~(arr_1 [4] [i_0])))) ? (min(17365532047734945451, (arr_1 [i_0] [i_0]))) : (arr_0 [i_0]))), ((max(14983575896914691235, 36028788429029360))));
    }
    #pragma endscop
}
