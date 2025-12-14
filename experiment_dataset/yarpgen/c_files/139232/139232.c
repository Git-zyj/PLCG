/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((((min((arr_1 [i_0]), var_4))) ? ((-(arr_0 [i_0]))) : var_2))) ? (((arr_2 [i_0]) | (((((arr_1 [i_0]) == (arr_2 [i_0]))))))) : ((((((arr_0 [i_0]) + 2147483647)) >> ((((-(arr_0 [i_0]))) - 527330501)))))));

        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            var_16 |= (max((max(((((arr_4 [i_0]) / (arr_1 [i_1])))), (max((arr_6 [i_0]), (arr_2 [15]))))), (arr_0 [i_0])));
            var_17 = (max(((-(arr_5 [16] [i_1 - 1]))), (arr_5 [i_1 + 1] [i_0])));
            var_18 = ((((!(((arr_2 [i_1]) && (arr_1 [i_0]))))) || ((var_1 || ((min((arr_0 [i_0]), (arr_5 [i_0] [i_1]))))))));
            arr_7 [i_1] = (min(((min((arr_5 [i_1 + 2] [i_1]), (arr_5 [i_1 + 1] [i_1 + 3])))), (((arr_6 [i_0]) + (max((arr_4 [i_0]), (arr_4 [i_1])))))));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_19 &= (((((arr_0 [i_0]) << (((arr_0 [i_0]) - 3767636764))))) || (arr_9 [i_0] [i_2] [i_0]));
            var_20 = min((((max((arr_4 [i_2]), (arr_0 [i_2]))) << (((arr_6 [i_0]) - 9988)))), (((((min((arr_8 [i_0]), var_4))) && ((max((arr_5 [i_0] [i_0]), (arr_1 [i_2]))))))));
            var_21 = ((-(min((min(11189, 24460280)), (arr_8 [i_0])))));
        }
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            var_22 &= (arr_9 [i_0] [i_0] [i_3 + 2]);
            var_23 = ((max((arr_11 [i_0] [i_0] [i_3 + 1]), (arr_11 [i_0] [i_0] [i_3 + 2]))));
            arr_13 [i_0] [i_0] [i_0] |= (max((((!(arr_10 [i_0])))), (min((min((arr_0 [i_0]), (arr_2 [i_0]))), (((!(arr_6 [i_3]))))))));
            arr_14 [i_3] [1] = ((!(((arr_2 [i_3 + 2]) && (arr_2 [i_3 + 1])))));
        }
        arr_15 [i_0] [i_0] = ((-var_13 < (max((((var_3 ? (arr_10 [i_0]) : (arr_6 [i_0])))), (min((arr_2 [9]), var_12))))));
        arr_16 [17] = ((-(((arr_12 [i_0]) << (((arr_12 [i_0]) - 1587376663))))));
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        arr_19 [i_4] [i_4] = (arr_5 [i_4] [i_4]);
        var_24 = arr_9 [i_4] [i_4] [i_4];
    }
    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        var_25 = (((((((max((arr_21 [i_5]), var_2))) ? (arr_22 [i_5 + 1] [i_5 + 2]) : (min((arr_22 [i_5 + 2] [i_5 + 2]), (arr_21 [i_5 + 1])))))) ? (min((arr_20 [1] [i_5 - 1]), (arr_21 [i_5]))) : ((min(((~(arr_21 [i_5]))), (arr_20 [i_5] [i_5 - 1]))))));
        arr_23 [i_5] [i_5] = (arr_21 [i_5]);
        arr_24 [i_5 + 1] = ((((((arr_22 [i_5] [i_5]) * (((var_1 ? (arr_20 [i_5] [17]) : var_8)))))) ? (arr_22 [i_5 - 1] [1]) : ((((((arr_22 [i_5 - 1] [14]) / (arr_21 [i_5])))) ? (arr_21 [i_5 + 2]) : var_14))));
        arr_25 [i_5] [21] = ((-(arr_21 [i_5 - 1])));
        arr_26 [i_5] = (((((max((arr_20 [i_5 + 2] [i_5 - 1]), (arr_20 [i_5 + 1] [i_5]))))) <= (((arr_22 [i_5 + 1] [i_5 + 1]) * (arr_22 [i_5 + 2] [i_5 - 1])))));
    }
    for (int i_6 = 2; i_6 < 10;i_6 += 1)
    {
        var_26 = (max((((arr_22 [i_6] [i_6 - 2]) & (arr_20 [i_6] [i_6]))), (arr_27 [i_6 - 1] [i_6 + 3])));
        var_27 = ((((min(8207423623500288098, 3571370415))) ? (((((arr_27 [i_6] [i_6]) ? (arr_10 [i_6]) : var_6)) ^ (max((arr_4 [i_6 - 1]), (arr_21 [i_6]))))) : ((min((arr_17 [i_6]), 938575559)))));
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 11;i_9 += 1)
                {
                    {
                        var_28 = arr_28 [i_8];
                        var_29 = (((((min(var_14, (arr_18 [i_6]))) >> (((~var_0) - 1159860970)))) + ((((((arr_1 [i_6]) + var_8))) ^ (max((arr_35 [i_7] [i_7] [i_7] [i_7]), (arr_20 [i_7 + 1] [i_6])))))));
                        arr_37 [i_6] [i_6] [i_6] [i_8] [i_9 + 1] |= (max((min((arr_27 [i_7 - 1] [i_7 - 1]), (((arr_35 [i_6] [i_7] [i_7] [i_7]) ? (arr_12 [i_6]) : (arr_27 [i_6] [i_6]))))), (((min((arr_21 [i_7]), var_14))))));
                        var_30 = (max(var_30, (((((max((min((arr_21 [i_7]), var_10)), ((((arr_5 [i_8] [i_6 + 2]) <= (arr_12 [i_6]))))))) * (var_1 / -var_2))))));
                    }
                }
            }
        }
        var_31 *= (((((arr_17 [i_6 - 2]) && ((((arr_5 [i_6] [i_6]) | (arr_6 [i_6])))))) ? -var_1 : (max(((min(77, 127))), (arr_35 [i_6] [i_6 + 2] [i_6 + 2] [i_6])))));
    }
    var_32 = (min(var_32, ((min(-117132359, -15631)))));
    var_33 = (((-((max(var_11, var_5))))));
    var_34 = (var_0 % (((var_0 + 2147483647) >> (((var_6 / var_13) + 6754930268)))));
    #pragma endscop
}
