/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_2 [11] = min(((min((arr_1 [i_0 - 2]), ((3 ? (arr_1 [i_0]) : 1802046043066874097))))), (max((((544061504 ? -103 : 544061504))), 1087676634453464481)));
        arr_3 [i_0] = max((((arr_0 [i_0 + 1]) ? 2132820068 : (arr_0 [i_0 - 1]))), (3494099692 + 4266641787));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        var_14 &= (arr_0 [i_1 + 3]);
        var_15 = (~24);
        var_16 = var_9;
    }
    var_17 = (max((((1 * (!var_5)))), 1704796755658654684));
    #pragma endscop
}
