/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (min((1 > 1), ((-((23921 ? 1 : 1))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_11 |= (arr_0 [i_0] [i_0]);
                var_12 &= ((((((arr_1 [i_1 + 1]) * (arr_1 [i_1 - 2])))) ? ((2529402280 ? 1 : 176)) : ((75 ? 1 : 1))));
            }
        }
    }
    var_13 -= ((1 < ((-((var_2 ? var_5 : 2147483638))))));
    #pragma endscop
}
