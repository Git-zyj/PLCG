/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_16));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0]) & ((((arr_0 [i_0]) != (arr_0 [i_0]))))));
        var_21 = var_7;
        arr_3 [i_0] [i_0] = ((-115 ? (arr_1 [i_0]) : (arr_0 [i_0])));
        arr_4 [i_0] [i_0] = -var_8;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = (max((min(((var_14 * (arr_5 [i_1]))), (arr_6 [i_1]))), var_16));
        arr_8 [i_1] [20] |= ((arr_6 [i_1]) + (min(3580787314, 127)));
        arr_9 [i_1] [i_1] = (((((var_10 % (arr_5 [i_1])))) || var_4));

        /* vectorizable */
        for (int i_2 = 3; i_2 < 18;i_2 += 1)
        {
            arr_13 [i_2] = (var_19 && 225);
            var_22 = (min(var_22, -230592340));
            var_23 = (min(var_23, (arr_12 [i_2] [i_2 + 3])));
            var_24 = ((3178633713 ? -1 : -230592340));
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_25 ^= var_17;
            var_26 = (((((((((arr_16 [i_1] [i_1] [i_3]) ? var_3 : 26))) ? (arr_12 [i_1] [i_1]) : (((var_4 || (arr_10 [i_1] [2] [i_1]))))))) <= (((var_12 / var_18) + (var_3 != var_18)))));
            arr_17 [16] = min((((((max(var_3, (arr_10 [i_1] [i_1] [i_1])))) > (((arr_15 [17] [i_3] [i_1]) ? (arr_12 [i_1] [i_1]) : (arr_12 [5] [i_1])))))), var_5);
            arr_18 [16] [i_3] = (arr_12 [i_1] [i_1]);
            arr_19 [i_3] = ((127 ? ((max((arr_5 [20]), var_2))) : (~22321)));
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 23;i_7 += 1)
                {
                    {
                        var_27 += ((((((arr_24 [i_5] [i_5 + 3]) ? var_3 : -230592353))) ? (arr_27 [i_4] [i_5 - 1] [i_6] [i_7] [i_4] [i_7]) : (arr_27 [2] [i_5] [i_6] [i_7 + 2] [i_5 + 4] [2])));
                        arr_29 [i_6] [i_4] = (((arr_26 [i_4] [i_5 + 2] [i_5 + 2]) & (arr_23 [i_4] [8])));
                    }
                }
            }
        }
        arr_30 [8] [i_4] = (arr_22 [i_4] [i_4]);
        var_28 = (((arr_24 [i_4] [i_4]) + 1));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 8;i_8 += 1)
    {
        var_29 = (min(var_29, 0));
        arr_33 [i_8] = ((((1 << (4546964214061040763 - 4546964214061040740))) % -1));
        arr_34 [i_8] [i_8 - 1] = var_17;
        arr_35 [i_8] = ((arr_14 [i_8 - 1] [i_8 + 3]) ? 4294967295 : ((var_3 ? var_18 : (arr_32 [1] [i_8]))));
    }
    var_30 = var_12;
    var_31 = var_13;
    var_32 = (((var_0 - 8863) ? -var_7 : var_16));
    #pragma endscop
}
