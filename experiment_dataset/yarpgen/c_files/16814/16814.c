/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [10] [i_0] = (((arr_0 [i_0]) ? 3225530102060180743 : 17968645513191540136));
        var_17 ^= var_13;
    }

    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_18 = 18446744073709551615;
        arr_7 [i_1] = var_11;
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_19 = (max(var_19, 15221213971649370873));
        arr_10 [2] [9] = var_4;
    }
    var_20 = (max(841548482, (min(478098560518011459, ((max(var_12, var_11)))))));
    #pragma endscop
}
