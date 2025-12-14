/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_14 ^= ((~(~8840)));
                            arr_10 [i_0] [i_1] [i_1 - 1] [8] [i_3] = (79 <= 115);
                            arr_11 [i_3] [i_1] [0] [i_1] [0] = ((!1) ? (max((max(0, -1541417782)), -var_11)) : (arr_1 [i_0]));
                            arr_12 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = 158;
                        }
                    }
                }

                for (int i_4 = 3; i_4 < 8;i_4 += 1)
                {
                    var_15 = (max(var_4, var_4));
                    arr_15 [i_1] [i_1] = ((-((((~177) > -0)))));
                    var_16 = ((((max(30147, 0))) ? 7183 : ((var_7 * (arr_6 [i_1] [i_1 + 1] [i_1 + 1])))));
                }
                arr_16 [i_1] = ((!(((79 - ((63 + (arr_8 [i_0] [4] [i_1] [i_1] [i_1] [9]))))))));
                arr_17 [i_1] = (((max(var_10, (arr_7 [i_0] [i_1] [i_1] [i_1 - 1]))) + ((-(min(1, (arr_7 [i_0] [i_0] [i_0] [i_1])))))));
            }
        }
    }
    var_17 = (max(var_17, (min(var_3, (var_3 / var_1)))));

    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                {
                    var_18 = (((arr_20 [i_5] [i_6]) ? (arr_21 [i_5]) : (max((~var_10), (~716658359)))));
                    arr_28 [i_5] [i_5] [i_5] [i_5] = ((-(((!220184632336755012) ? 1305290919 : 1454772414))));
                }
            }
        }
        var_19 = ((~(arr_23 [i_5] [i_5] [i_5])));
        var_20 = (((((var_2 & (arr_24 [i_5] [i_5] [i_5] [i_5]))) >> (arr_18 [i_5] [i_5]))));
        arr_29 [i_5] = max(((((var_8 >> (((arr_22 [i_5] [i_5]) + 839498319)))) / (arr_27 [i_5] [i_5] [i_5] [i_5]))), (var_3 < 3653258127310416822));
        arr_30 [8] = (16785 - 235);
    }
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        var_21 = (min(-30231, -823612190));
        arr_35 [i_8] = (((32763 ? (min(0, -23941)) : (arr_31 [i_8]))));
        /* LoopNest 3 */
        for (int i_9 = 3; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 4; i_10 < 18;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    {
                        var_22 = ((-26867 ? (((var_12 ? (arr_44 [i_9 - 3] [i_9 - 3] [i_9 + 1] [i_10 - 2] [i_10 - 1]) : (arr_44 [i_9 - 3] [i_9 - 3] [i_9 + 1] [i_10 - 2] [i_10 - 1])))) : ((-380423935 ? 17 : 7421))));
                        var_23 = 726246940;
                        var_24 = (((!-28182) && (arr_42 [i_9 + 1] [i_9 - 2] [i_9 - 3])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
