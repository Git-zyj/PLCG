/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((((arr_6 [i_2] [i_1] [i_0]) || ((!(arr_4 [i_0] [i_0] [i_0]))))));
                    var_11 &= 0;
                    var_12 = (!(!44507));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            {
                var_13 = (min(var_13, ((min((((arr_12 [i_3 + 1] [i_3 + 1]) ? 62759 : (arr_12 [i_3 - 1] [i_3 - 1]))), (((!(arr_12 [i_3 - 1] [4])))))))));
                var_14 = (arr_12 [12] [i_3]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        {
                            var_15 += (arr_21 [i_8] [i_7] [i_5]);
                            arr_25 [i_7] [i_7] |= ((!((max((7 * 65521), -76)))));
                        }
                    }
                }
                var_16 = (max((arr_13 [i_5]), ((min(65530, 0)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 13;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                {

                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        var_17 = (((arr_19 [i_10] [i_9]) ^ ((((-25451 && (((arr_23 [i_9]) != (arr_18 [i_11] [i_12])))))))));
                        var_18 &= (arr_30 [8]);
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        var_19 = (arr_31 [1]);
                        var_20 = (((arr_20 [i_9]) + (arr_36 [i_9] [i_10] [i_11] [4])));
                        var_21 = (min(var_21, ((((!var_9) <= (arr_6 [i_9] [i_9] [i_9]))))));
                        var_22 -= (((arr_1 [i_13]) % 1));
                    }

                    for (int i_14 = 2; i_14 < 11;i_14 += 1)
                    {
                        var_23 = (((~1224524330) / (23 + 1)));

                        for (int i_15 = 0; i_15 < 13;i_15 += 1)
                        {
                            var_24 = (max(1, (min((arr_41 [i_9] [i_11] [i_9] [i_15]), 157))));
                            var_25 = (max(var_25, ((((((arr_35 [i_14] [i_14] [i_14 - 1] [i_14 - 1]) >> (((max((arr_20 [i_14]), 187)) - 262301777)))) | ((((arr_41 [i_9] [i_14 + 2] [i_14] [i_14 + 1]) != (arr_44 [i_9] [i_9] [i_11] [i_14 + 1] [i_14])))))))));
                        }
                        var_26 = ((!(((arr_41 [i_14 + 2] [i_14 - 1] [i_9] [i_14 - 1]) < (arr_41 [i_14] [i_14 + 2] [i_9] [i_14 + 1])))));
                        var_27 += arr_4 [i_14] [i_10] [i_14];
                    }
                    for (int i_16 = 0; i_16 < 13;i_16 += 1)
                    {
                        var_28 = (min(4, (arr_41 [i_9] [i_9] [i_9] [i_11])));
                        var_29 -= (((((((arr_30 [i_16]) && 253)))) ^ (max((!var_10), (((arr_14 [i_10]) & var_5))))));
                    }
                    var_30 = (((((-(arr_13 [i_11])))) || (((-(max(126976, 120)))))));
                }
            }
        }
    }
    #pragma endscop
}
