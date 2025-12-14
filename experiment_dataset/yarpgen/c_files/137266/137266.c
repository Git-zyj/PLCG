/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_19 *= 1;
            var_20 = 38590395;
            var_21 = (arr_3 [i_0] [i_0] [4]);
            arr_5 [i_1] |= (arr_2 [i_0]);
        }
        arr_6 [3] [i_0] = 32767;
        var_22 = ((-((~(arr_3 [i_0] [i_0] [i_0])))));

        for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
        {
            var_23 = (arr_3 [i_2] [i_2] [i_2]);
            var_24 ^= ((arr_3 [i_0] [i_2] [i_2]) ? (arr_3 [i_0] [i_0] [i_2]) : (arr_3 [i_2] [i_0] [i_0]));
            var_25 = (((arr_2 [i_0]) | (arr_9 [i_2])));
            var_26 = (max(var_26, (arr_7 [2])));
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    {
                        var_27 = 0;
                        var_28 = (((1 ? 1 : var_13)));
                    }
                }
            }
            var_29 |= (((arr_2 [i_0]) ? (arr_12 [i_3] [i_3] [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
        }
        for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
        {
            var_30 = (arr_9 [i_0]);
            var_31 -= (arr_7 [i_6]);
            var_32 |= (((arr_4 [i_0]) ? var_17 : (arr_3 [i_6] [i_0] [i_0])));
            var_33 = ((1 ? -791467967 : (-127 - 1)));
            var_34 *= (((((3391366532 ? 91 : 791467966))) ? (arr_7 [i_6]) : (var_11 % 112)));
        }
        for (int i_7 = 1; i_7 < 10;i_7 += 1)
        {
            var_35 = ((2679472800162199351 ? -791467967 : -1745240587));

            for (int i_8 = 2; i_8 < 8;i_8 += 1)
            {
                arr_26 [i_7] = (((arr_12 [i_8 + 2] [i_7] [i_7] [i_7 + 2]) ? ((-(arr_7 [i_8]))) : (arr_19 [i_7])));
                var_36 -= var_6;
                var_37 = (1 ? (arr_0 [i_7 + 2] [i_8 + 2]) : (arr_3 [i_0] [i_7 - 1] [i_8 + 3]));
            }
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                var_38 = (max(var_38, 0));
                var_39 = ((-(arr_11 [i_7 - 1])));
            }
            var_40 = ((2099222246 ? 107 : 4828918447064588924));
            var_41 = (~var_9);
        }
    }
    #pragma endscop
}
