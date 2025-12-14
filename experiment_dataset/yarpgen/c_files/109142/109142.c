/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(16773932782447800701, (min((min(10574409254417331185, var_8)), var_1))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] &= ((var_3 % (arr_0 [i_0 - 1])));
        var_20 &= ((1770477200930824265 ? 250 : (arr_2 [i_0 - 1])));
    }
    var_21 -= 11810638879917997500;
    var_22 += (max(((min(var_7, 111))), (!var_4)));
    #pragma endscop
}
