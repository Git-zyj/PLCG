/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((((var_2 >> (889921609 - 889921597))) << (var_4 - 2053061086))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_20 = var_13;
        arr_2 [i_0 - 1] = (arr_1 [15]);
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_21 = (max((arr_0 [i_1 - 1]), ((max((!var_17), 1)))));

        /* vectorizable */
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {

            for (int i_3 = 3; i_3 < 10;i_3 += 1)
            {
                var_22 = (max(var_22, var_13));
                var_23 -= (((((var_11 ? (arr_8 [i_1]) : var_5))) ? -var_15 : var_13));
            }
            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                var_24 -= var_13;
                var_25 -= -118;
            }
            for (int i_5 = 1; i_5 < 12;i_5 += 1)
            {
                var_26 = var_10;
                arr_15 [i_1] [i_2] &= -920469972;
                arr_16 [i_1] [3] [i_1] [i_1] = (i_1 % 2 == zero) ? (((63 >> (((arr_5 [i_1]) - 583979315))))) : (((63 >> (((((arr_5 [i_1]) - 583979315)) + 1400653736)))));
            }
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 12;i_7 += 1)
                {
                    {
                        arr_24 [i_1] [0] [i_6 + 3] [i_6 + 3] [i_6] [i_7] = -117;
                        var_27 = 86;
                        var_28 = var_4;
                        var_29 -= -var_6;
                    }
                }
            }
        }
        arr_25 [i_1] [i_1] = (arr_20 [i_1 - 1] [i_1]);
        var_30 += -99;
        var_31 = (min(var_31, (((max(var_14, (arr_4 [6] [i_1 + 1])))))));
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 17;i_8 += 1)
    {
        arr_29 [2] |= -var_12;
        arr_30 [i_8] = ((var_16 && (13199890675319924432 && 127)));
        /* LoopNest 3 */
        for (int i_9 = 2; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 19;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 20;i_11 += 1)
                {
                    {

                        for (int i_12 = 1; i_12 < 20;i_12 += 1)
                        {
                            var_32 = (233762587 ? var_15 : ((56825 ? var_2 : var_17)));
                            var_33 = (arr_35 [i_8] [i_8] [i_8] [i_8] [16]);
                        }
                        var_34 = (min(var_34, (arr_33 [i_8] [i_8] [i_8] [i_8])));
                        arr_42 [i_8] = ((((var_0 & (arr_38 [i_8] [i_8] [i_8] [i_8] [i_8]))) >> (arr_26 [i_8] [i_9 + 1])));
                        var_35 = (var_15 << (((arr_27 [i_8]) >> (var_5 + 1604656446633586953))));
                    }
                }
            }
        }
        var_36 -= 75;
    }
    for (int i_13 = 2; i_13 < 8;i_13 += 1)
    {
        var_37 = (arr_22 [i_13]);
        arr_47 [i_13] [i_13] = (((((-126 ? var_17 : 5246853398389627165))) ? ((var_15 | (arr_36 [i_13] [i_13] [i_13 - 1] [5] [i_13 + 3] [i_13]))) : var_8));
    }
    var_38 = (((var_15 >> (var_12 - 15728))) >> (1694361368 - 59148));
    #pragma endscop
}
