/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -var_7;
    var_11 = ((1 ? ((~(~-1187569248))) : ((-272465071 ? ((var_9 ? var_6 : var_5)) : var_4))));
    var_12 |= 1834336783;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 = (-272465071 ^ 449305758);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_14 = ((~(((arr_1 [i_0]) ? (arr_5 [i_1] [i_1] [i_1]) : (arr_4 [8])))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_15 = 1;
                            var_16 *= (~0);
                            var_17 *= -32;
                            var_18 = 1;
                        }
                    }
                }
            }
            arr_17 [i_0] [i_1] = ((-1541661441 && (arr_8 [i_0] [i_1] [i_1] [i_1])));
            var_19 = ((1 ? 1 : ((-1187569244 ? -125 : 1))));
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_20 += ((arr_23 [i_0] [i_0] [i_6 + 1] [i_7 - 1] [i_8]) % 36528395);
                            var_21 += (((-1187569261 - 0) == -1972109279));
                        }
                    }
                }
            }
            var_22 |= (0 <= 0);
            var_23 = (arr_4 [i_5]);
        }
        var_24 = 1;
    }
    for (int i_9 = 4; i_9 < 18;i_9 += 1)
    {

        /* vectorizable */
        for (int i_10 = 1; i_10 < 18;i_10 += 1)
        {
            arr_37 [i_10 - 1] = ((1 ? -8 : 31));
            var_25 = (6 ? (arr_32 [i_9 - 4]) : -337451685);
            arr_38 [i_9] [i_10 + 1] |= (((((arr_31 [i_10]) ? (arr_33 [i_9] [16]) : (arr_33 [5] [1])))) ? (57 * -61) : (arr_34 [i_10] [i_9]));
        }
        arr_39 [i_9 - 4] = (((((-(((arr_29 [i_9 - 1]) ? (arr_35 [i_9]) : (arr_35 [6])))))) ? ((-50 ? 1513265237 : 1)) : (((((1 ? 66 : (arr_36 [i_9] [i_9] [i_9])))) ? (arr_36 [i_9 - 2] [i_9 + 2] [i_9 - 2]) : (1 / 1)))));
    }
    var_26 = 36528384;
    #pragma endscop
}
