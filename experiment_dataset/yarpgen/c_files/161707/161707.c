/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_19 |= ((~(((((~(arr_1 [1] [i_0 + 2])))) ? 1727290598 : 61))));
        var_20 = (max(var_20, var_5));
        var_21 = (+(((arr_0 [i_0]) ? (arr_2 [i_0 - 2]) : var_17)));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        arr_5 [i_1] [i_1 + 1] = (arr_4 [i_1]);

        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            var_22 = ((-(arr_7 [i_2 - 2] [16])));
            var_23 = (arr_2 [i_1 + 2]);
            arr_8 [i_1] [i_1] = (-(arr_4 [i_2 - 1]));
        }
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            var_24 = (arr_6 [i_1 + 1] [i_3 + 1]);
            arr_11 [i_1] = (((arr_4 [i_1 - 1]) ? (!1) : ((88 ? (arr_3 [i_3]) : var_6))));
            arr_12 [i_1] [i_1] [i_3] = 253710061;
            var_25 = (((arr_0 [i_1 - 1]) ^ (arr_0 [i_1 - 1])));
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
        {
            var_26 = (((((var_11 ? var_7 : -116))) ? var_0 : (1 || var_8)));
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 17;i_6 += 1)
                {
                    {
                        arr_20 [i_1] [i_4] [i_5] [i_4] = 5772557273205884133;
                        arr_21 [i_1] [i_1] [i_4] [i_1] = (((arr_16 [i_4]) - (arr_16 [i_4])));
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
        {
            var_27 = (arr_4 [i_1]);
            var_28 = ((-(41530 >= 39267)));
            var_29 = ((1003235419 ? var_6 : (arr_6 [i_1 + 1] [i_1 + 1])));
            var_30 = var_1;
            var_31 = (arr_10 [i_1] [i_7] [i_7]);
        }
        var_32 -= var_16;
        var_33 += (arr_6 [i_1 + 1] [i_1 - 1]);
    }
    var_34 = 1;
    var_35 = (min(var_9, ((((~99) <= -31474)))));
    #pragma endscop
}
