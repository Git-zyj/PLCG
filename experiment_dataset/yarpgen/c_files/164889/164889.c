/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(0, var_5));
    var_13 ^= ((((max(var_3, (var_10 && var_9)))) < var_1));
    var_14 &= var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((((((min(var_9, 0))) ? 759277944 : -var_3)) >= ((min(var_8, (var_1 >> 0))))));
                var_15 = (((arr_1 [2]) & (((((arr_1 [i_1]) << (18446744073709551615 - 18446744073709551594))) - 53716))));
                var_16 = ((((max((((arr_1 [i_0]) * var_3)), (arr_0 [i_0] [i_1])))) ? (arr_0 [i_0] [i_0]) : (arr_3 [i_0] [i_1])));
            }
        }
    }
    #pragma endscop
}
