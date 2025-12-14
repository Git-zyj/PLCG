/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_18 <= (-32767 - 1)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_21 = (var_10 ^ 18226);
                    arr_7 [i_0] [i_1] = (((~((var_13 ? var_15 : (arr_5 [i_0] [i_1] [i_2] [i_2]))))));
                    arr_8 [i_2] [i_2] [i_2] [i_1] = ((~((~((var_9 ? var_10 : var_8))))));
                }
            }
        }

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_22 = 1;
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    {
                        arr_16 [i_3] [i_3] [i_4] [i_4] [i_5] = (min(1, (1 - 1)));
                        arr_17 [i_0] [i_0] [i_0] [i_3] = var_7;
                    }
                }
            }
        }
        arr_18 [i_0] = ((~(((1 != (-19108 - var_9))))));
    }
    for (int i_6 = 2; i_6 < 24;i_6 += 1)
    {
        arr_21 [i_6] [i_6] = ((~(arr_20 [i_6 - 2])));
        var_23 -= var_5;
        var_24 -= ((~(((((1 >> (var_14 - 25989)))) & var_3))));
        var_25 ^= (((((((var_17 ? 1 : var_13)) * (((var_12 ? var_14 : 1)))))) ? 1 : ((10173 ? (arr_20 [i_6 + 1]) : var_1))));
    }
    var_26 = ((~((~(~var_0)))));
    #pragma endscop
}
