/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_18 = ((((83 ? 41 : (arr_1 [i_0]))) < (arr_1 [i_0])));
        var_19 = var_7;
        var_20 = (max((((var_4 ? var_7 : var_15))), -39));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_21 = (min(var_21, ((((((arr_1 [i_0]) ? 22 : (arr_0 [i_0]))) | ((var_15 ? 50 : 33204)))))));
                        var_22 = ((((((var_1 << (28886 - 28883))) & (33196 | var_5))) >> (40 - 19)));

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_23 = (max(var_23, (((((var_5 << (32332 - 32321))) % 40)))));
                            var_24 = 21;
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {

        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            var_25 = ((((((((-74 ? -48 : 255))) ? 21 : (arr_4 [i_6] [i_6])))) ? (((((arr_12 [i_5]) ? -55 : 50)) % 247)) : (234 <= var_2)));
            var_26 = 212;
        }
        var_27 ^= (((((((((66 ? -4 : 17)) + 2147483647)) >> (62 - 54)))) ? (arr_19 [i_5] [0] [i_5]) : (((((arr_4 [i_5] [4]) + 2147483647)) << ((((61 ? 2691 : 117)) - 2691))))));
        var_28 = (max(var_28, ((((((5 ? 91 : 4))) ? 127 : var_9)))));

        for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
        {
            var_29 |= (0 * 54891);
            var_30 = (((53853 << (15793 - 15785))));
            var_31 = 2691;
        }
        for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        {
                            var_32 = 30842;
                            var_33 = (min(var_33, (arr_27 [i_8] [i_9] [7])));
                            var_34 = max(28886, 39188);
                            var_35 = (((((216 ? 35 : 0)) <= (arr_20 [i_5] [i_5] [3]))));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 17;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        {
                            var_36 = (((arr_35 [i_8] [i_13] [i_13] [i_8]) && var_10));
                            var_37 = min(117, 75);
                        }
                    }
                }
            }
        }
    }
    for (int i_15 = 0; i_15 < 15;i_15 += 1)
    {
        var_38 = 124;
        var_39 = ((((max(62831, 62845))) || ((min(var_10, (arr_3 [i_15]))))));
        var_40 = var_13;
    }
    var_41 = ((54741 ? var_1 : (((-3 < 74) ? var_5 : 50810))));
    #pragma endscop
}
