/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= (-1962940162532999844 <= var_13);
    var_20 = (max(var_20, (((235 ? -1111805930 : var_13)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_1] &= 484657427;
                arr_7 [i_0] [i_1] [i_0] = 925;
                var_21 = (max(var_21, ((((925 || 64611) * ((-62 ? ((908 >> (3953954190 - 3953954177))) : (924 % 64611))))))));
                arr_8 [i_0] &= 1188973426;
            }
        }
    }
    #pragma endscop
}
