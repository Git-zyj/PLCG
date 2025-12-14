/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -var_8;
    var_13 = (((((((min(var_6, -46))) && -46))) < var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_14 ^= (((arr_3 [i_1 + 2] [i_1 + 2]) >= ((1915280864 ? (var_11 / var_1) : (max(1567333765683971867, (arr_4 [i_1 - 1])))))));
                var_15 = -46;
            }
        }
    }
    #pragma endscop
}
