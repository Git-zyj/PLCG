/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_18 = -2491604664794193235;
        var_19 = (((arr_0 [i_0]) & var_9));
        var_20 = arr_1 [i_0];
        var_21 = (((1238 + 2147483647) >> (9089 - 9058)));
    }
    var_22 &= 5662492024896702095;
    var_23 = ((12784252048812849520 - var_5) ? (max(var_13, (min(3169542777780727571, var_5)))) : var_0);
    var_24 = (min(var_13, 12784252048812849506));
    #pragma endscop
}
