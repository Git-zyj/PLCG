/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -var_12;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((!((min(1, (((arr_0 [i_0]) % 1360069675)))))));
        var_20 = (((arr_1 [i_0]) ? (arr_1 [i_0]) : ((31652 << (2622494306 - 2622494295)))));
        var_21 = (max(var_5, (arr_1 [i_0])));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_22 *= var_16;
            arr_5 [i_1] [i_0] = (((arr_0 [i_0]) ? -1360069676 : 255));
            arr_6 [i_0] [i_0] [i_0] = (((-1 & 60) | -var_15));
            var_23 = ((var_1 % (arr_1 [i_1 - 1])));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
        {
            var_24 = ((-(arr_8 [i_0] [9] [i_0])));
            var_25 -= ((((((!(arr_0 [i_2]))))) > 9890954204272975940));

            for (int i_3 = 1; i_3 < 16;i_3 += 1) /* same iter space */
            {
                var_26 += (var_0 != -1360069676);
                arr_12 [i_3] [i_3] [i_2] [7] |= var_17;
                var_27 += -1;
            }
            for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
            {
                arr_16 [i_4] [0] [i_4] = (~(arr_9 [i_4 - 1] [i_4 + 1] [i_4 + 1]));
                var_28 = ((~(((!(arr_13 [i_4] [i_4] [8]))))));
                var_29 = var_17;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 13;i_6 += 1)
                    {
                        {
                            arr_21 [i_4] [i_2] [16] = (((((var_18 ? var_11 : var_0))) ? (arr_1 [i_2]) : ((447816578 * (arr_9 [i_6 + 2] [i_5] [i_0])))));
                            arr_22 [i_0] [i_2] [6] [i_6] &= (!(((1068844491 / (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            arr_23 [i_6] [2] [4] [i_4] [4] [i_2] [i_0] |= (((((var_0 ? var_16 : 447816587))) ? (arr_10 [i_6 + 1] [i_6] [i_6 + 4] [i_4 + 1]) : (-1360069675 || var_9)));
                            arr_24 [1] [12] [12] [1] [i_2] [12] [i_4] = (((arr_10 [i_0] [i_5] [i_4 - 1] [i_0]) ? (arr_10 [i_0] [i_2] [i_0] [1]) : var_4));
                        }
                    }
                }
                var_30 = ((-((var_7 ? -405560523 : var_16))));
            }
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                var_31 -= (((~-123) ? 248 : 447816574));
                var_32 = -69;
            }
            for (int i_8 = 1; i_8 < 15;i_8 += 1)
            {
                arr_31 [i_2] = ((~(var_16 - 1125899873288192)));
                var_33 = ((!(((1052871623 | (arr_13 [i_0] [2] [0]))))));
                var_34 = (arr_1 [i_0]);
            }
            var_35 = 1941670269;
        }
        for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
        {
            var_36 -= (((((arr_19 [i_0] [i_0] [i_0] [i_9] [i_9]) ? -168021691 : (arr_19 [i_0] [i_9] [i_0] [i_9] [i_9]))) ^ ((~(arr_19 [i_0] [i_0] [i_0] [i_9] [i_9])))));
            var_37 = (max(var_37, 7599249718968629351));
            var_38 = (((arr_28 [i_0]) ? (((arr_19 [i_0] [i_0] [i_0] [i_9] [i_9]) << var_0)) : ((-1 + (arr_28 [i_0])))));
        }
    }
    #pragma endscop
}
