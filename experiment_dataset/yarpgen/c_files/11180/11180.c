/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= var_7;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = ((~(-7802372474541891337 ^ 20216)));
        var_15 = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            var_16 = (arr_6 [i_1]);
            var_17 *= ((var_10 - (arr_5 [i_1] [i_2 - 2])));
            arr_7 [i_2] [12] |= ((var_7 * (arr_1 [i_2 - 1] [i_2 + 1])));
            var_18 = (arr_5 [i_2 - 1] [i_2 - 1]);
        }
        var_19 = (((arr_1 [i_1] [i_1]) ? (((-7802372474541891321 + 9223372036854775807) >> (1052495953 - 1052495912))) : (arr_1 [i_1] [i_1])));
    }
    #pragma endscop
}
