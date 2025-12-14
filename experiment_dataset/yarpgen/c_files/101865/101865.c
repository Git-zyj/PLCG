/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_18 ^= var_8;
                arr_6 [i_1] [i_1] = ((-1 - (arr_3 [i_0] [i_1])));
                var_19 &= (((arr_0 [i_0]) ? 8252950443617496368 : ((((!((((arr_4 [i_0] [i_0]) + -860380717)))))))));
                var_20 += -860380706;
            }
        }
    }
    var_21 = ((-((-1 ? (var_15 <= var_14) : -var_12))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 22;i_3 += 1)
        {
            {
                var_22 = (max(var_22, (((-(((!(arr_5 [i_3] [i_3 - 1] [i_3])))))))));
                arr_15 [i_3] [19] [i_3] = ((-860380717 ^ (((~var_5) ^ (~var_16)))));
                var_23 += ((((((arr_12 [10] [i_2]) ? var_0 : (9 | 860380717)))) ? ((~((-860380709 ? var_14 : var_13)))) : 63115));
                arr_16 [i_3] [i_3] [i_2] = ((((((var_17 + 2147483647) >> (var_10 - 61659)))) * var_17));
            }
        }
    }
    #pragma endscop
}
