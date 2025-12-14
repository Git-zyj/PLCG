/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (min(var_8, (((((min(140737479966720, var_8))) ? var_7 : (~var_5))))));
    var_13 = (min(((max((var_8 < 122), var_3))), ((((min(var_8, var_5))) ? (~var_11) : 18080931426521420543))));
    var_14 = (max(var_14, (((((((var_10 ? var_1 : (max(var_5, var_2)))) + 2147483647)) << (140737479966708 - 140737479966708))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 = ((!(arr_1 [2] [i_0])));

        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {
            var_16 = (((((arr_5 [i_1] [i_0]) ? var_2 : 66)) + (arr_2 [i_0])));
            var_17 = (min(var_17, var_10));
            var_18 -= ((140737479966718 ? (arr_2 [i_0]) : (((arr_2 [i_0]) ? var_9 : 3840))));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            var_19 = (max(var_19, (((-18446603336229584889 == (18446603336229584895 || var_2))))));
            var_20 = (max(var_20, ((((arr_3 [i_0] [i_2]) ? 64 : (arr_3 [i_2] [i_0]))))));
        }
        for (int i_3 = 2; i_3 < 10;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 9;i_5 += 1)
                {
                    {
                        var_21 = ((-42 ? (arr_7 [i_0] [i_3 - 2] [i_3 + 1]) : var_1));
                        var_22 = var_10;
                        var_23 = ((var_7 >> (((arr_7 [i_5 - 2] [i_4 + 1] [i_3 - 2]) - 4078309653634202004))));
                        var_24 = ((arr_1 [i_0] [i_3 - 2]) ? (arr_1 [i_5] [i_3 + 1]) : (arr_1 [i_4] [i_3 - 2]));
                    }
                }
            }
            var_25 -= ((!(((7340032 ? 62 : 21)))));
        }
        for (int i_6 = 2; i_6 < 10;i_6 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        {
                            var_26 = (min(var_26, ((((255 == var_3) ? (arr_8 [i_0] [i_6] [i_8]) : var_6)))));
                            var_27 = (arr_3 [i_6 - 2] [i_6 + 1]);
                            var_28 = (-var_11 || -var_6);
                            arr_27 [i_9] [i_7] = var_4;
                            arr_28 [i_8] [i_8] [i_0] [i_7] = 9;
                        }
                    }
                }
            }
            arr_29 [i_0] [i_6] = -3840;
            var_29 = (~var_0);
            /* LoopNest 3 */
            for (int i_10 = 1; i_10 < 9;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 9;i_12 += 1)
                    {
                        {
                            var_30 ^= var_10;
                            var_31 = -3840;
                            var_32 = ((-(arr_19 [i_0] [i_0])));
                        }
                    }
                }
            }
            var_33 += (arr_19 [i_6 + 1] [i_0]);
        }
        arr_36 [i_0] = ((arr_13 [i_0] [i_0]) ? (arr_13 [i_0] [i_0]) : (arr_13 [i_0] [3]));
        var_34 = -3;
    }
    for (int i_13 = 0; i_13 < 24;i_13 += 1)
    {

        for (int i_14 = 0; i_14 < 24;i_14 += 1)
        {
            var_35 = ((((min((max(0, -125)), 241))) ? (max(((var_6 ? (arr_39 [11]) : var_3)), 125)) : (arr_42 [i_14] [i_14] [i_13])));
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 24;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 24;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 24;i_17 += 1)
                    {
                        {
                            arr_51 [i_13] [i_15] [i_16] = (min((var_1 + -140737479966693), (max(-41, 3234735570202969052))));
                            var_36 = (min(1785823382, 125));
                        }
                    }
                }
            }
            arr_52 [i_14] [i_14] [i_13] = ((-2130706432 ? 22859 : (arr_40 [i_13] [i_13])));
        }
        var_37 ^= (max((arr_44 [i_13] [i_13] [i_13]), (((+(((arr_48 [i_13] [i_13] [i_13] [i_13]) ? (arr_39 [i_13]) : var_0)))))));
        var_38 = ((max((max((arr_49 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]), 14336)), (!58089))) - ((min((min(var_2, var_11)), (max((arr_44 [i_13] [i_13] [i_13]), (arr_45 [i_13] [i_13] [i_13] [i_13])))))));
    }
    #pragma endscop
}
