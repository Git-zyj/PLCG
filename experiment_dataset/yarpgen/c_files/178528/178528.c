/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = (((((var_16 - (arr_1 [i_0])))) ? (((arr_1 [i_0]) % var_3)) : ((var_12 * (arr_0 [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_1] [i_2] [i_3] = ((((min(var_11, (arr_5 [i_2 - 1] [i_1] [i_1])))) ? (!var_6) : ((-((var_5 ? var_3 : var_5))))));
                            var_20 = (max((arr_1 [i_0]), (var_2 * var_8)));
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    arr_14 [i_0] [i_1] [i_1] = (((arr_2 [i_0] [i_4]) ? var_12 : (~12097512876638089944)));
                    arr_15 [i_0] [i_0] [i_1] [i_4] |= -255;
                }
                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_21 += (arr_3 [i_6] [i_6]);
                                var_22 = (min(var_22, (((var_12 >= (((((arr_0 [i_0]) >= var_11)))))))));
                            }
                        }
                    }
                    var_23 &= min((min((arr_16 [i_5 + 1]), var_4)), var_16);
                }
                var_24 = -var_16;
                var_25 = ((((((var_15 && (arr_19 [i_1] [i_0] [i_0] [i_0]))))) ? ((((((!(arr_11 [i_1] [i_1])))) != (arr_0 [i_0])))) : (arr_13 [i_0] [i_1] [i_0] [i_0])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 16;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            {
                arr_29 [i_9] = (342171275 != (((((var_13 * (-127 - 1)))) ? (((min((arr_25 [i_8] [i_9]), var_5)))) : ((var_7 ? (arr_24 [i_8] [i_9]) : (arr_28 [i_8]))))));
                var_26 ^= (min(((min((min(1, 1)), (max(var_12, (arr_25 [i_8] [i_8])))))), (((arr_24 [14] [i_8 - 1]) ^ (arr_24 [11] [i_8 - 1])))));
                arr_30 [i_8] = var_0;
                arr_31 [i_8] = -93;
            }
        }
    }
    var_27 = min(var_0, (((((var_2 ? var_3 : 8))) ? var_13 : ((27 ? var_11 : var_2)))));
    #pragma endscop
}
