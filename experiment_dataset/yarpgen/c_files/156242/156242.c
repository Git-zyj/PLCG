/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_14 = ((~(arr_8 [i_4] [i_1])));
                                arr_12 [i_4] [i_0] [i_2] [i_0] [i_0] = ((max(var_10, ((-2 ? 65535 : 4159747478)))));
                                var_15 = (max(var_15, ((var_7 ? ((2 ? var_9 : (arr_1 [i_2] [i_4]))) : (max((max(var_13, 2)), (arr_3 [i_4] [6] [i_2])))))));
                            }
                        }
                    }
                    arr_13 [i_0] [i_0] [i_2] = (var_6 || var_5);
                }
            }
        }
    }
    var_16 ^= var_13;

    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_17 += ((((max(var_10, (arr_4 [16] [i_5] [i_5])))) & (((!(arr_0 [i_5]))))));
        var_18 = ((((!((max((arr_1 [i_5] [i_5]), 4))))) ? ((max((arr_1 [i_5] [i_5]), var_7))) : (max(((9 << (((((arr_15 [i_5]) + 31)) - 15)))), 20))));
        arr_18 [i_5] = ((((var_5 ? ((31 ? 9168190653192004171 : var_8)) : 5420)) >> (((((max((arr_10 [i_5] [i_5] [i_5] [i_5] [i_5]), (arr_7 [i_5] [i_5] [i_5] [22] [i_5] [i_5])))) && (11 + 4))))));
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        var_19 = var_7;
        var_20 = ((~(((((2 ? 9007198986305536 : var_4))) ? (max((arr_7 [i_6] [i_6] [8] [i_6] [i_6] [i_6]), var_3)) : (arr_7 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))));

        /* vectorizable */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            var_21 = (arr_16 [i_6]);
            arr_24 [i_6] = (((arr_10 [i_6] [i_7] [i_7] [i_6] [i_6]) & (~2)));
            arr_25 [i_6] [i_7] = ((var_3 ? ((((199 && (arr_5 [i_6] [i_6]))))) : (((arr_7 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) ? (arr_19 [i_6] [i_6]) : var_6))));
            var_22 = var_12;
        }
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            arr_28 [i_6] [i_8] [i_6] = -79;
            var_23 = (arr_16 [i_6]);
            var_24 -= var_2;
        }
        for (int i_9 = 3; i_9 < 6;i_9 += 1)
        {
            var_25 = (max((max((arr_15 [i_6]), ((((arr_30 [i_9] [5]) ? var_7 : (arr_8 [i_6] [i_6])))))), (((((max(var_10, (arr_19 [i_9] [i_9])))) ? (arr_26 [i_9 - 3] [i_9 - 3]) : (max((arr_26 [i_9] [i_9]), -46)))))));
            arr_33 [i_6] = max((arr_5 [i_6] [i_6]), (max(var_9, -7166357631504914472)));
            var_26 = (arr_20 [i_6] [i_9]);
            arr_34 [i_6] [i_6] [i_6] = var_6;
        }
    }
    var_27 = (var_9 ^ var_3);
    #pragma endscop
}
