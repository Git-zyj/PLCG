/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_20 ^= (~-1289560482);
                var_21 ^= (arr_5 [i_0] [i_0]);
                var_22 = (min(var_22, ((min((((arr_3 [i_1 + 1] [i_1 - 1]) ? 2139095040 : var_7)), (((arr_2 [i_0]) ^ (arr_3 [i_0] [i_0]))))))));
            }
        }
    }
    var_23 = (~28123);
    #pragma endscop
}
