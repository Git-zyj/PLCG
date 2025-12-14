/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    var_18 = (var_10 + var_0);

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (max(((+(((arr_0 [i_0] [8]) ? var_8 : var_10)))), var_3));
        arr_5 [i_0] = 3574176968;
        var_19 = ((((max(1, 1128746216))) ? ((((36383 != (arr_2 [i_0]))))) : (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_20 &= (((~(arr_14 [i_1] [5] [i_3]))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_21 = (((!0) / ((~(arr_12 [17])))));
                                var_22 |= ((~(720790328 ^ var_0)));
                            }
                        }
                    }
                    arr_20 [i_1] [14] [i_3] = ((((((arr_6 [i_2] [i_2]) > var_1))) * (!-24659)));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                arr_27 [i_1] [i_2] [i_3] = (((arr_11 [i_2 + 1] [i_2 + 1] [i_2 + 1]) && (arr_18 [i_2] [i_2] [i_2] [1] [i_2 + 1] [i_2 + 1])));
                                var_23 += (((arr_6 [i_2 + 1] [i_2 + 1]) ? (arr_18 [i_2 + 1] [i_2] [i_2 + 1] [i_2] [i_2] [i_2 + 1]) : 41044));
                                var_24 = (max(var_24, (arr_12 [i_1])));
                            }
                        }
                    }
                    var_25 = (max(var_25, ((((arr_24 [i_2 + 1] [i_1] [i_1] [i_1] [i_2 + 1] [i_2] [i_2]) || 1)))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 18;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    {
                        var_26 = (((arr_31 [i_9 - 1] [i_9] [i_9] [i_9 - 1]) >= (arr_31 [i_9 + 1] [i_9] [i_9] [i_9 - 1])));
                        var_27 ^= (!2246949394788017220);
                    }
                }
            }
        }
    }
    #pragma endscop
}
