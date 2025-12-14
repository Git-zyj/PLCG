/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_11 += ((50781 ? 76 : var_6));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_12 = (max(var_12, (var_8 + var_8)));
                        var_13 -= ((~(arr_4 [i_0])));
                        var_14 = (!var_9);
                    }
                }
            }

            for (int i_4 = 4; i_4 < 10;i_4 += 1) /* same iter space */
            {
                var_15 &= var_4;
                var_16 = (!-var_6);

                for (int i_5 = 1; i_5 < 9;i_5 += 1)
                {
                    var_17 -= (((arr_15 [i_5 - 1] [i_1] [i_1] [i_0]) ? (arr_15 [i_1] [i_1] [i_1] [i_1]) : (arr_15 [i_1] [i_4 - 2] [i_1] [i_0])));
                    var_18 = (var_2 & var_6);
                    var_19 = (((((arr_1 [i_0]) || (arr_2 [11])))) | (arr_15 [6] [i_1] [i_5] [i_1]));
                }
                for (int i_6 = 1; i_6 < 11;i_6 += 1)
                {
                    var_20 = (min(var_20, ((((((((arr_5 [2]) ? var_4 : 34503)) + 9223372036854775807)) >> (-var_6 + 7095))))));
                    var_21 = (arr_1 [i_1]);
                }
                arr_19 [i_0] [i_1] [i_0] = var_1;
            }
            for (int i_7 = 4; i_7 < 10;i_7 += 1) /* same iter space */
            {
                var_22 -= var_4;
                var_23 = 534773760;
                var_24 += (((var_4 + var_8) ? (arr_10 [1] [i_7 + 1] [i_7 + 1] [i_7 - 4]) : 50781));
            }
            for (int i_8 = 2; i_8 < 8;i_8 += 1)
            {
                var_25 = ((-var_9 ? (arr_14 [i_8 - 1] [8] [i_1] [i_0] [i_0]) : (arr_24 [i_8] [i_0])));
                var_26 = (arr_18 [i_8] [i_0]);
                var_27 = ((-(arr_4 [i_8 + 1])));
            }
            var_28 = (max(var_28, (arr_1 [i_1])));
        }
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            var_29 = ((!(arr_30 [i_0] [i_0] [i_9])));
            arr_31 [i_0] [i_0] = (arr_17 [i_0] [i_0] [i_0]);
            var_30 = ((((46755 ? -67 : 26385)) / -var_1));
            var_31 = (!50770);
        }
    }
    var_32 = (min((((((1573420975 ? var_2 : var_7))) ? (var_2 || var_1) : var_0)), var_7));
    var_33 = (((max(var_4, (~var_0))) < var_2));
    var_34 = var_7;
    #pragma endscop
}
