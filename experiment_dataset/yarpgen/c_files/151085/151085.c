/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (var_5 ^ 17602)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_11 ^= ((var_4 ? 12770 : (50 < -8629587422291326924)));
        var_12 = (max(var_12, -51));
        var_13 = (arr_0 [i_0]);
    }
    var_14 = 15637111885839585062;
    var_15 = ((((1884113377 < (-50 & -51))) && 50942));
    #pragma endscop
}
