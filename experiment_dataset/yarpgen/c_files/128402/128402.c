/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (((min(var_13, -91117823)) == (((var_11 ? var_2 : (max(73699223, var_2)))))));
                arr_5 [1] &= var_16;
                arr_6 [0] [i_1] [i_1] = var_10;
                arr_7 [i_0] &= (((((~((-11028 ? 4221268101 : 16440579414368893371))))) ? (~242) : (!73699223)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {
                arr_13 [i_3] = (((arr_9 [i_3]) != var_13));
                arr_14 [7] [i_3] [i_3] = (min((max((arr_12 [i_3 - 1] [i_3] [i_2 - 2]), var_1)), 234));
                arr_15 [i_2] [i_3] [i_3] = 2772782871;
            }
        }
    }

    for (int i_4 = 2; i_4 < 20;i_4 += 1)
    {

        for (int i_5 = 3; i_5 < 19;i_5 += 1)
        {
            arr_22 [15] [0] [i_5] = (-((var_12 ? 536838144 : 8380061158325186577)));
            arr_23 [7] [4] = (((2772782871 ? -1136530294 : (arr_19 [i_4 - 2] [i_5 + 1]))));
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 18;i_8 += 1)
                    {
                        {
                            var_22 -= var_12;
                            var_23 = (max((((!-108) ? ((var_16 ? var_0 : 16440579414368893365)) : -16)), -651854288));
                        }
                    }
                }
            }
        }
        for (int i_9 = 2; i_9 < 20;i_9 += 1)
        {
            var_24 = (-((((47629 ? var_0 : (arr_20 [i_4] [i_9]))))));
            arr_35 [i_9] = ((!((!(-125 & var_11)))));
            var_25 = ((((min(((22 ? 1136530293 : var_18)), (!var_10)))) ? 0 : 16440579414368893365));
        }
        for (int i_10 = 3; i_10 < 19;i_10 += 1)
        {
            arr_38 [5] [18] [13] = (min(-485532855, (((arr_29 [i_10 - 2] [7]) ? 1237233676 : var_2))));
            /* LoopNest 3 */
            for (int i_11 = 2; i_11 < 20;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 20;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 20;i_13 += 1)
                    {
                        {
                            var_26 *= (~34);
                            var_27 -= (arr_31 [1] [1]);
                            arr_46 [i_11] [10] [i_13] [1] [6] = (arr_18 [i_4]);
                            var_28 = var_19;
                        }
                    }
                }
            }
            arr_47 [12] [i_10] = (((((-(min(-202726262, -9223372036854775797))))) ? -1136530306 : var_6));
        }
        arr_48 [1] = ((((9142678183331437651 != (arr_18 [11])))));
        arr_49 [i_4] = ((((!(arr_20 [i_4 - 2] [i_4 - 1])))) | 666965531);
    }
    /* vectorizable */
    for (int i_14 = 2; i_14 < 20;i_14 += 1)
    {
        /* LoopNest 3 */
        for (int i_15 = 2; i_15 < 22;i_15 += 1)
        {
            for (int i_16 = 3; i_16 < 19;i_16 += 1)
            {
                for (int i_17 = 4; i_17 < 21;i_17 += 1)
                {
                    {
                        var_29 += var_7;
                        arr_62 [i_14] [6] [22] [1] = ((!((((arr_58 [14] [i_16] [i_17]) ? var_8 : 569605914)))));
                    }
                }
            }
        }
        arr_63 [1] = -1237233654;
        var_30 = (arr_59 [13] [i_14] [i_14] [i_14] [i_14] [14]);
    }
    for (int i_18 = 2; i_18 < 13;i_18 += 1)
    {
        var_31 |= 228;
        arr_67 [i_18] [i_18] = 124;
    }
    #pragma endscop
}
