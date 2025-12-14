/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = ((((((((min((arr_1 [i_0]), var_8))) ? (min(-2025804299, var_4)) : var_2)) + 2147483647)) >> ((((-2025804318 ? (arr_4 [i_0 + 2]) : (arr_4 [i_0 + 1]))) - 4769553760240235547))));
                var_13 = (max(var_13, ((min((arr_3 [i_0 - 1] [i_1]), (((~var_4) ? ((~(arr_0 [i_1] [i_0]))) : ((((arr_1 [i_0]) ^ var_5))))))))));
            }
        }
    }
    var_14 = var_8;
    var_15 *= (-3001174734588674274 ? 3274004895804763930 : 0);
    #pragma endscop
}
