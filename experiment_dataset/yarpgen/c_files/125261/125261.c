/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((((max(var_5, var_3))))))));
    var_21 &= ((((max(var_13, -94292716))) ^ ((((min(94292716, -94292716))) ? ((1 ? var_11 : 2260806033)) : (((var_19 ? -1261322045 : 1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_22 *= (((!(arr_2 [i_0] [i_0]))));
                var_23 *= ((((((arr_0 [i_0] [i_1]) ? (arr_0 [23] [i_1]) : 3489064307))) ? ((-(!1))) : (((((2147483392 ? -29796 : 0))) ? 1 : var_1))));
                var_24 -= (67108736 - 3);
            }
        }
    }
    #pragma endscop
}
