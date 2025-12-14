/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    var_13 = min((((((97 ? var_10 : var_7))) ? 97 : var_0)), var_5);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0 + 2] [i_0 + 2] = (arr_0 [i_0 - 1]);

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_14 = (arr_1 [i_0 + 3] [i_0 + 2]);
            var_15 = var_11;

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                var_16 |= ((-74 ? -96 : 13));
                arr_9 [i_0] [i_1] [i_1] [i_2] = var_9;
                var_17 *= 268435200;
            }
            var_18 *= -var_11;
        }
        var_19 = ((~(arr_8 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 3])));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = (!13);
        var_20 = (max(var_20, (!6917529027641081856)));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            {
                                var_21 ^= ((var_6 ? var_10 : (arr_18 [i_7])));
                                var_22 = ((-490894559 ? ((((arr_25 [i_5] [i_7] [i_7] [i_7 - 1] [i_7] [i_5]) > var_4))) : (min(var_11, (arr_29 [i_6] [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 + 2] [i_7] [i_7 - 1])))));
                                var_23 = (min(43, 72));
                            }
                        }
                    }
                }
                var_24 = (((((min(var_7, var_4))) ? ((var_4 ? -27 : var_2)) : (arr_21 [i_4] [i_4] [i_4] [i_5]))));
            }
        }
    }
    #pragma endscop
}
