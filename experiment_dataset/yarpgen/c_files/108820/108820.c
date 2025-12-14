/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!var_8);

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_18 = (arr_1 [i_0]);
        var_19 = (min(var_19, (arr_1 [i_0])));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {
                        var_20 = var_14;
                        var_21 = ((((max(var_15, (arr_0 [i_1]))))));
                    }
                }
            }
        }
        var_22 = (!(((~(var_8 * var_8)))));

        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
        {
            var_23 = ((((7189835042782609837 < -1701139712) | (arr_5 [i_1]))));
            var_24 = ((!((((arr_5 [i_1]) / -var_8)))));
            var_25 = var_14;
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 17;i_8 += 1)
                {
                    {
                        var_26 = ((~((((var_3 ? var_14 : (arr_0 [i_1])))))));
                        var_27 = ((((((arr_16 [i_1] [i_6] [i_7]) ? (max(-6539822442093189127, var_11)) : 4070977544))) ? (arr_17 [i_1 - 1] [i_6] [i_7 - 1]) : (((arr_8 [i_1]) ? (min(var_15, var_6)) : 1))));
                        var_28 = max(18446744073709551615, 4070977530);
                    }
                }
            }
            var_29 += (-(arr_20 [i_1 - 1] [i_6] [i_6] [i_1 - 1]));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                var_30 = -42;
                var_31 = ((!(arr_25 [i_1] [i_1] [i_9] [i_1 + 1])));
            }
            var_32 |= (!var_14);
            var_33 = (max(var_33, (!var_7)));
            var_34 = ((((4339 & (arr_12 [i_1 - 1] [i_9]))) & (!var_0)));
        }
        var_35 = (min((arr_23 [8] [i_1] [i_1] [i_1]), var_8));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                {
                    var_36 = var_2;
                    var_37 = var_6;
                    var_38 = (min(var_38, ((((!var_5) ? var_6 : (((arr_3 [i_1 + 1]) ? 3368459059 : var_5)))))));
                }
            }
        }
    }
    for (int i_13 = 1; i_13 < 17;i_13 += 1) /* same iter space */
    {
        var_39 = (max((max(((((arr_1 [i_13]) >= var_4))), (~4294967295))), (arr_3 [i_13 + 1])));
        var_40 ^= ((!((min(((max(var_0, 1701139735))), -4191062810221023617)))));
        var_41 = (((var_0 ? (arr_19 [i_13 + 1] [10] [i_13 + 1]) : ((var_11 ? 4346 : var_12)))));
    }
    var_42 = -4340;
    #pragma endscop
}
