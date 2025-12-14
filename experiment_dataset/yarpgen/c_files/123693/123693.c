/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0] [0] = ((~(((~9223372036854775807) ? var_3 : -9223372036854775807))));
                arr_8 [8] [4] = ((-(((arr_0 [i_0] [i_1]) ? var_4 : 9223372036854775807))));
                var_14 = (~(!var_8));
            }
        }
    }
    var_15 = -var_5;
    var_16 -= var_1;

    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_11 [i_2] |= ((9223372036854775807 ? -9223372036854775807 : -9223372036854775805));

        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            arr_14 [i_3] |= ((var_9 ? var_5 : 14));
            arr_15 [i_2] [13] [i_2] = (((arr_10 [13] [i_3]) ? var_12 : ((((arr_2 [i_2]) ? -9223372036854775807 : -113)))));
            var_17 = ((var_11 ? var_9 : (((-32767 - 1) ? -2147483633 : 5894242545449442995))));
            var_18 = (~var_2);
            var_19 = ((1481790853 ? var_0 : var_3));
        }
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        arr_18 [i_4] = 110;
        arr_19 [6] |= (((((~-9223372036854775801) ? 8 : -9223372036854775792))) ? ((-((-116 ? (arr_3 [i_4]) : (arr_9 [i_4] [i_4]))))) : 22066);
    }
    #pragma endscop
}
