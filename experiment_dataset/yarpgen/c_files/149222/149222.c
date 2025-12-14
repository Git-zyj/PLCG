/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;
    var_18 = (108 > 2955777059);
    var_19 = var_7;
    var_20 = var_6;

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min((74 ^ 396398214), var_9));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    var_21 = (max((((var_10 && (var_11 && var_15)))), (((-21 ? var_9 : var_1)))));

                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        arr_13 [i_3] [i_2] [i_1] [i_0 - 4] = ((((max((arr_0 [i_1 + 1]), -14))) ? var_7 : (max((1699834631 || var_1), (16777215 % 90)))));
                        var_22 = ((var_1 ? (min(52084, (arr_4 [i_0 + 1]))) : ((((var_8 && ((max(var_8, (arr_2 [i_2 - 2]))))))))));
                        arr_14 [i_0] [2] [i_2] [i_2] = var_4;
                        var_23 = (max(var_23, (+-1)));
                        var_24 = ((((arr_4 [i_0 - 2]) > -1)) ? ((var_7 ? (arr_4 [i_0 - 3]) : var_0)) : 58);
                    }
                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 15;i_5 += 1)
                        {
                            var_25 = (min(var_25, (arr_4 [i_0])));
                            var_26 -= ((-(var_14 && var_13)));
                        }
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            var_27 = (max(var_27, (((((-(arr_0 [i_0 - 1]))) >> (((min((187 | 165730935), 240)) - 218)))))));
                            var_28 = (((((188 || var_7) && ((((arr_18 [i_6]) ? var_7 : var_5))))) ? var_16 : 3877194668809883959));
                            var_29 = ((+(((arr_19 [i_6] [9] [i_6]) >> ((42719 >> (((arr_4 [12]) - 11857986304454418885))))))));
                        }
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            var_30 = (97 || 11342);
                            var_31 = (var_0 || 216);
                        }
                        var_32 = ((-((max(112, (arr_12 [8] [i_1] [12] [i_1] [i_1] [i_1]))))));
                        arr_24 [15] [i_2] [12] [i_4 + 2] [i_4] = (((((749 % (arr_20 [i_0 + 1] [i_0 - 3] [i_0 + 1] [i_4] [i_2 - 2] [i_2 - 2])))) ? (((((0 | 2297209749332785601) != 18336)))) : (((!-66) ? (min(16777215, -8600)) : 0))));
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 15;i_8 += 1)
                    {
                        var_33 = (min(var_33, ((((arr_15 [i_8] [i_8 - 1] [i_8] [i_8 - 1]) ? (arr_15 [i_8] [i_8] [i_8] [i_8 + 2]) : (arr_15 [i_8 + 2] [i_8 + 1] [i_8] [i_8 + 1]))))));
                        var_34 = (((-25178 * var_11) ? 61431 : 536870912));
                        arr_27 [i_0 + 2] [8] [i_2 - 1] [i_8 - 1] [0] = (-90 - 5982584977170453783);
                        var_35 = (max(var_35, (0 >= 3521492925)));
                    }
                    var_36 -= (arr_26 [5] [i_1] [i_1 + 2] [i_2]);
                    arr_28 [4] [i_1 + 4] [i_1] [8] = (max((arr_10 [i_0] [i_1] [i_2] [12]), (((-462312262 || (var_0 + var_14))))));
                    var_37 = arr_12 [i_0] [i_0] [i_0] [i_0] [1] [i_0];
                }
            }
        }
        var_38 = (((((max(37919, 727423012)))) || ((((-1547936578 > 9223372036854775807) ? (((!(arr_9 [9])))) : ((-(arr_19 [i_0] [0] [i_0]))))))));
    }
    #pragma endscop
}
