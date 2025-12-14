/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;
    var_21 = (((((((227 ? 29 : 65535))) ? (((227 ? 51824 : 15))) : (max(17906899572240248017, 69)))) % (((0 ? (7966766098973058068 != 65535) : ((max(18, 0))))))));
    var_22 = var_12;
    var_23 = var_15;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 8;i_3 += 1)
                {
                    {
                        var_24 = ((((!(((var_6 ? var_0 : var_0))))) ? ((((arr_5 [i_1 + 3] [4]) * 1))) : ((-2056305393069124686 & (((17906899572240248017 ? 1 : 20)))))));
                        var_25 = -64;
                        var_26 = (((((1 ? ((7576372463829820833 ? 30002 : (arr_1 [i_3] [i_2]))) : (-3000057115773366691 / 135)))) ? 2975 : ((var_0 ? (-30002 < var_14) : 209))));
                        arr_12 [i_0] [0] [i_2] [i_2] [i_1] = ((((55802 ? 15 : (arr_0 [i_1 - 1]))) > ((((max(29, 9)))))));
                        arr_13 [i_3 + 2] [i_1] [i_1] [i_0] = (((((max(1392975886, var_12)) ? 1 : ((((arr_3 [i_1] [i_1]) >= 2334938237)))))));
                    }
                }
            }
        }
        var_27 = ((1 * (((6181396701574787168 ? 1834559805 : 31)))));
        arr_14 [6] = ((((-((max(var_17, 120))))) <= ((1 ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : ((-(arr_9 [i_0] [i_0] [i_0])))))));
    }
    for (int i_4 = 4; i_4 < 13;i_4 += 1)
    {
        arr_17 [i_4] = (arr_15 [i_4] [i_4]);
        arr_18 [i_4] = (max((((arr_16 [i_4 - 4]) << (arr_15 [2] [i_4 - 2]))), ((156 % (arr_15 [i_4 - 1] [i_4 - 4])))));
        arr_19 [i_4] [i_4] = ((1 == (((!(var_7 - var_3))))));
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    arr_28 [i_5] [i_6] [2] [i_5] = (~143);
                    var_28 = (-3000057115773366666 != 1);
                }
            }
        }
        arr_29 [i_5] [i_5] = (max((arr_25 [i_5] [i_5] [i_5] [i_5]), ((min(3000057115773366662, var_1)))));
        var_29 = (arr_25 [i_5] [i_5] [i_5] [i_5]);
        var_30 = var_17;
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 18;i_10 += 1)
                {
                    {
                        var_31 |= var_14;
                        arr_39 [14] [i_5] = ((((((var_1 ? 1366884362067915402 : 41)) ^ var_11)) != var_16));
                        var_32 = (1770484714529548427 / 1);
                        var_33 += var_18;
                    }
                }
            }
        }
    }
    #pragma endscop
}
