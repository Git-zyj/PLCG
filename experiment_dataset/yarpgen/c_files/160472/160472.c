/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0 - 1] = ((arr_0 [i_0 + 2]) % -518480524);

        for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_12 [i_1] = ((~(arr_11 [i_0 + 1] [i_2 - 1] [i_3 - 1])));
                        var_14 = -518480523;
                        arr_13 [i_1] = (arr_1 [i_0] [i_0]);
                        arr_14 [i_0] [i_1] [i_1] = 2936538371848059019;
                        var_15 = ((!(arr_11 [i_0 + 2] [i_2 - 1] [i_3 - 1])));
                    }
                }
            }
            var_16 ^= (arr_1 [i_0] [17]);
            arr_15 [i_1] = ((arr_5 [i_0 + 1] [i_1 - 1] [i_0] [i_1 + 2]) < 518480523);
        }
        for (int i_4 = 1; i_4 < 17;i_4 += 1) /* same iter space */
        {
            var_17 |= (arr_16 [i_0 - 1] [i_0]);
            arr_18 [2] [i_4] |= (((-518480523 / 255) && 0));
        }
        for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
        {
            arr_22 [i_5] [i_5] = (arr_4 [i_0 + 2]);
            arr_23 [i_5] [i_0] [i_5] = arr_21 [i_5] [i_5] [i_5];
            var_18 = (arr_5 [16] [i_5 + 2] [i_5 + 1] [i_5 - 1]);
        }
        var_19 -= (((arr_7 [i_0 + 1]) + (arr_7 [i_0 + 1])));
    }
    var_20 = ((55843 ? (-9223372036854775807 / var_5) : -var_6));
    var_21 = ((var_6 ? var_12 : -14));
    #pragma endscop
}
