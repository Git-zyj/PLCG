/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_18 = (max(var_18, ((~(((!(~var_6))))))));
        var_19 = ((((((arr_0 [i_0]) ^ (arr_0 [i_0])))) && (((arr_0 [i_0]) <= 1))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            {
                var_20 = (max(var_20, (((-((min(7850, (arr_7 [i_2 + 1] [i_2 + 1] [18])))))))));
                var_21 |= ((1371499571 ? (((!(arr_8 [12] [12])))) : (((arr_6 [6] [6]) - (arr_9 [i_2 + 1] [i_2] [i_2 + 1])))));
            }
        }
    }
    var_22 &= var_4;
    var_23 = max(((var_5 ? (var_2 ^ var_0) : (max(var_11, var_13)))), (((((0 ? 18 : 1371499571))) ? var_12 : (max(18368528192235813775, var_7)))));
    #pragma endscop
}
