/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            var_12 -= ((-(max(((5440 ? var_5 : (arr_1 [i_0] [i_1]))), (!var_1)))));
            arr_7 [i_0] [i_1] [i_1] = (((!(((4294967295 ? (arr_2 [i_0]) : -1))))));
            var_13 = (((var_9 ? ((-8 ? var_6 : (arr_5 [i_0])) : ((var_2 + (arr_2 [i_1])))))));
            arr_8 [i_0] [i_0] = -3979;
            /* LoopNest 3 */
            for (int i_2 = 4; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        {
                            var_14 = ((((max((~var_2), ((1312805956 << (-18 + 23)))))) ? ((max((!var_4), (min(var_9, var_9))))) : -1));
                            var_15 = (((max(var_6, var_0)) ^ ((((!(arr_9 [i_1 + 1] [i_1])))))));
                        }
                    }
                }
            }
        }
        for (int i_5 = 2; i_5 < 24;i_5 += 1)
        {
            arr_18 [i_5] [i_0] [i_0] = (max(var_4, (arr_5 [i_5])));
            arr_19 [14] [i_5] = (((((-112 ? (0 & var_4) : (var_7 < var_10)))) ? ((var_3 ? ((((arr_12 [i_0]) ? (arr_14 [i_5] [i_5] [22] [18] [i_0] [i_5] [8]) : var_1))) : (((arr_0 [i_0]) ? var_2 : 5304256280932376448)))) : -196));
            var_16 = (~4294967295);
        }
        var_17 += ((+(((!10784588824803965153) ? (!21623) : (var_7 || var_2)))));
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                {
                    arr_30 [i_8] [i_6] [i_6] [i_6] = ((34006 ? (((min((var_3 != var_8), (max((arr_21 [i_6] [i_6]), var_4)))))) : (min((arr_23 [i_6] [i_7]), (arr_25 [2] [i_6] [i_8])))));
                    arr_31 [i_6] [i_7] [17] [1] = (((min(var_1, (~var_0))) & (arr_21 [i_6] [i_6])));
                    var_18 = (~-1);
                }
            }
        }

        for (int i_9 = 2; i_9 < 21;i_9 += 1)
        {
            arr_34 [i_6] = (((-1 ? (arr_10 [i_6] [21] [i_9]) : (((arr_11 [1] [i_9] [i_9] [24] [i_9] [i_9]) * (arr_23 [i_6] [i_9]))))));
            var_19 = 63;
            var_20 = (min(var_20, (!30007)));
        }
        for (int i_10 = 1; i_10 < 19;i_10 += 1)
        {
            arr_37 [i_6] = ((-((max(-125, (arr_23 [i_6] [12]))))));
            arr_38 [i_6] [20] = (min(((min((3896 << 0), var_5))), (arr_29 [2] [17] [i_6] [3])));
            arr_39 [i_6] [i_10] [i_6] = ((((!((max(var_4, var_5))))) ? ((((!(arr_23 [i_6] [i_6]))) ? (9 <= var_11) : ((var_8 << (111 - 111))))) : ((((!(arr_13 [i_10] [i_10] [i_10 + 1] [14] [6] [i_6])))))));
        }
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            arr_43 [i_6] [i_11] [8] = var_11;
            var_21 += (max(var_9, var_2));
            arr_44 [i_6] = 17191300809354957395;
        }
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
    {
        var_22 += ((var_5 >> ((((arr_16 [10] [i_12]) > (arr_28 [i_12] [i_12] [i_12] [15]))))));
        arr_47 [i_12] = var_3;
    }
    var_23 = var_9;
    #pragma endscop
}
