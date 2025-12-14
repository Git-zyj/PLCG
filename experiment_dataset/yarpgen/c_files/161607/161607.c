/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
                {
                    var_16 += 59;
                    var_17 = (min((max((arr_5 [i_0] [i_1] [i_2]), (arr_5 [i_0] [i_1] [i_2]))), (min((-8778694711877132102 != var_9), (((arr_7 [i_0]) / (arr_1 [i_0])))))));
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                {
                    arr_11 [i_0] [i_0] [i_1] [i_3] = (arr_4 [i_0] [i_0] [i_3]);

                    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        var_18 &= ((max((arr_14 [i_3]), var_14)));
                        var_19 = (arr_7 [i_4]);
                        var_20 ^= (((arr_4 [i_0] [i_4] [i_3]) ? (~var_8) : 1));
                        arr_15 [i_4] [5] [i_1] [9] [i_0] = var_11;
                    }
                    for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_0] = min((((((var_8 ? 9223372036854775800 : (-32767 - 1))) | 1426715799))), (arr_14 [i_1]));
                        arr_19 [i_0] [1] = (arr_5 [i_0] [i_0] [i_3]);
                    }
                    var_21 = ((!(((0 ? ((215 ? 0 : 840274524)) : 437130957)))));

                    for (int i_6 = 3; i_6 < 6;i_6 += 1) /* same iter space */
                    {
                        var_22 = ((!((max((arr_10 [i_6 - 2] [i_6] [i_6 + 2] [i_6 + 1]), (arr_10 [i_6 - 2] [i_6 + 2] [i_6 + 2] [i_6 + 2]))))));
                        var_23 = (max(var_23, (((-((-(1292433021 / var_15))))))));
                        var_24 = var_7;
                        arr_24 [i_0] [i_1] [i_3] [i_0] = 210;
                    }
                    for (int i_7 = 3; i_7 < 6;i_7 += 1) /* same iter space */
                    {
                        var_25 = ((~((((max((arr_21 [i_0]), var_12))) ? ((min((arr_8 [i_1] [i_3] [i_1] [i_0]), 83))) : (~var_9)))));
                        var_26 = var_3;
                    }
                }
                var_27 = (max(var_27, 3850588380));
            }
        }
    }
    var_28 = var_12;
    var_29 = (!-7941268201811883916);

    for (int i_8 = 3; i_8 < 10;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 4; i_11 < 11;i_11 += 1)
                {
                    {
                        var_30 = ((((((9216573290488583202 ? var_5 : (arr_38 [8] [0] [i_10] [i_8] [i_11]))) / (((arr_31 [i_8] [i_8] [i_8]) / var_10))))));
                        arr_40 [i_8] [i_9] [0] [i_11] [i_8] [i_9] |= (min(((((((arr_34 [i_8 + 1] [6] [6]) ? 4349344892917076169 : (arr_34 [i_8] [i_9] [3])))) ? (((min(25386, 38)))) : ((65216 ? 9223372036854775807 : 1)))), (min(20665, (min(var_1, var_11))))));
                    }
                }
            }
        }
        arr_41 [i_8] = (+(min((arr_36 [i_8] [i_8] [i_8]), (((arr_36 [i_8] [i_8] [5]) >> (-1850174153 + 1850174176))))));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 13;i_13 += 1)
            {
                {
                    arr_46 [i_8] [1] [i_8] [i_8 + 2] = (((((arr_31 [i_8] [i_12] [i_8]) ? ((-(arr_28 [i_8] [i_13]))) : ((min((arr_29 [i_8]), -7330740297637442608))))) / (max(-var_10, (60 / var_15)))));
                    arr_47 [i_8] [i_8] [i_13] = 65535;
                    arr_48 [i_8] [i_8] [i_12] [i_8] = (arr_44 [i_8 + 1] [i_8] [1] [8]);
                }
            }
        }
        arr_49 [i_8] [i_8] = ((((((!((((arr_28 [i_8] [i_8 + 2]) ? var_3 : (arr_28 [i_8] [i_8])))))))) | (max(65535, 18014261070528512))));
        var_31 ^= ((8258115120738221598 ? (((((26526 ? (arr_30 [i_8]) : (arr_35 [i_8 + 2] [i_8] [i_8 - 3] [i_8])))) ? var_10 : (((2147483648 ? 4096 : (arr_38 [i_8] [i_8 - 2] [i_8] [4] [i_8])))))) : (var_15 != 5568719542907359171)));
    }
    #pragma endscop
}
