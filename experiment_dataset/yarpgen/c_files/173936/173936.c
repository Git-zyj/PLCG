/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = ((!((((arr_2 [i_0]) + 29294)))));
        var_13 = (min(var_13, (((7834 << (((arr_1 [i_0]) - 2306)))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] = (min(((((min((arr_1 [i_1]), 7849))) ? (min((arr_4 [i_1] [2]), 36446)) : (min(var_9, (arr_4 [i_1] [i_1]))))), ((((arr_0 [i_1]) && (((32755 ? -14614 : 2650556397))))))));
        var_14 += ((!((max(((764868750399524189 - (arr_2 [i_1]))), var_2)))));
    }
    var_15 = ((((((-1 + 2147483647) << (36443 == 11657333210942848592)))) - (22561 + 4294967295)));
    #pragma endscop
}
