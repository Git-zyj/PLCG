/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_20 = (min(((max(1939132661, 1939132648))), (((~(arr_7 [i_0] [i_0] [i_1] [i_2]))))));
                    var_21 |= (arr_1 [i_0] [i_1]);
                    arr_9 [i_1] [i_0] [i_1] [i_0] = var_7;
                }
                var_22 += (((!var_1) ? (min((arr_7 [i_0] [i_0] [i_0] [i_0]), (arr_0 [i_0]))) : (((arr_0 [i_0]) ? -32 : (arr_0 [i_0])))));
            }
        }
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 16;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        arr_21 [i_3] [i_3] [i_3] [i_3] [i_3] = -523025984;
                        var_23 = ((max(((var_1 % (arr_18 [i_3] [i_5])), ((-(-127 - 1)))))));
                    }
                    var_24 = (min(var_24, (((~(arr_17 [i_3] [i_3] [i_3] [i_4 + 1] [i_3] [i_5 - 1]))))));
                }
            }
        }
        var_25 = (min(var_25, ((((!-523025984) ? ((~((3563817184 ? 1812940358915909412 : (arr_13 [i_3] [i_3]))))) : (max(-17545806735656866115, ((((arr_14 [i_3] [i_3] [i_3]) >= var_4))))))))));
        var_26 = (1 ? (min(3297057550, -523025979)) : (min(4220719261, -var_4)));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_27 ^= ((!(((max((arr_14 [i_7] [i_7] [i_7]), 119))))));
        var_28 += (((((~(~var_11)))) ? var_2 : 0));
    }
    var_29 = ((var_18 - ((var_11 ? var_17 : (!var_8)))));
    var_30 *= var_6;

    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_31 = (max((var_16 ^ var_0), ((min(((((arr_23 [i_8]) >= (arr_15 [i_8])))), (arr_25 [1]))))));
        arr_26 [i_8] = ((((((arr_15 [i_8]) ? (arr_15 [i_8]) : (arr_15 [i_8])))) ? 1939132680 : ((17545806735656866115 & (((~(arr_10 [i_8]))))))));
    }
    /* vectorizable */
    for (int i_9 = 3; i_9 < 14;i_9 += 1)
    {
        var_32 = (((arr_12 [i_9]) ? (arr_12 [i_9 - 1]) : (arr_12 [i_9])));
        var_33 = ((!((((arr_10 [i_9]) % (arr_24 [i_9]))))));
        arr_30 [i_9 + 1] [i_9] = var_5;
        var_34 = (arr_11 [i_9] [i_9 + 2]);
    }
    #pragma endscop
}
