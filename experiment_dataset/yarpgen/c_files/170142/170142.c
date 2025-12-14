/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = min((max((var_14 || var_12), ((var_2 ? 1611312546428190360 : var_13)))), ((min((min(4727084148027160197, var_12)), var_7))));
    var_16 = (max(var_16, ((((var_2 % var_11) ? (min(-602655429082471742, 18446744073709551602)) : ((-(max(-137718624, 12288005752149049806)))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0] [i_0]);
        var_17 = ((var_6 <= (arr_0 [i_0])));
        arr_4 [i_0] = ((((~(arr_2 [i_0] [1]))) ^ (((((max((arr_0 [1]), -1046672624)) + 9223372036854775807)) >> (((2879740179218161237 & 899112305) - 832003129))))));
    }
    #pragma endscop
}
