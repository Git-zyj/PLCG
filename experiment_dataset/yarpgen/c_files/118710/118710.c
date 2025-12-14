/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 &= (arr_2 [i_0]);

        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            var_21 = var_11;

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                var_22 ^= (arr_3 [i_1]);
                arr_7 [i_0] [i_0] [14] [5] = ((((max(((17473150081143490962 ? var_10 : var_0)), var_3))) ? (max((arr_0 [i_1 + 4]), (min(var_2, (arr_0 [i_0]))))) : ((var_6 ? ((((arr_2 [i_0]) ? var_8 : (arr_4 [i_0] [i_0])))) : var_14))));
            }
            var_23 *= (-1111331100 && 8267906511050489458);
            var_24 = (max((((var_16 + var_9) ? var_3 : 65535)), (((((1 * (arr_6 [i_0] [i_1 - 2] [i_1]))) / -10413)))));
        }

        for (int i_3 = 3; i_3 < 18;i_3 += 1)
        {
            var_25 = (min(var_25, 11500464256893908262));
            var_26 = (arr_8 [i_3] [i_3 + 2]);
            arr_10 [i_0] [i_3] [i_3] = var_17;
        }
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            var_27 = (max((9223372036854775807 || 2147483634), (-2995309915203764166 > 392673367)));
            var_28 = var_13;
            arr_14 [i_0] [i_4] [i_4] = (((max((((var_5 + (arr_9 [i_0])))), var_7)) <= ((max(((51067 ? 32270 : 3560519488372600836)), (((var_15 & (arr_4 [i_0] [i_0])))))))));
            arr_15 [i_4] [i_0] [i_4] = (((((!((((arr_8 [i_4] [i_4]) ? -1238379467 : var_12)))))) * ((((!var_8) < (((arr_11 [i_0]) | var_12)))))));
        }
        arr_16 [i_0] = ((~(((((-6368679507331857319 ? 17693644985638897767 : 62953))) ? ((5441 / (arr_13 [i_0] [i_0]))) : (((11521921108373054253 || (arr_8 [1] [1]))))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        arr_20 [14] = ((!-5703230579100640495) * (~var_18));
        var_29 = ((var_16 ? (arr_17 [i_5] [i_5]) : (arr_18 [i_5])));
        arr_21 [i_5] = ((arr_18 [i_5]) ? (arr_19 [i_5]) : (((arr_18 [i_5]) * (arr_18 [i_5]))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_26 [i_6] [i_6] = (arr_17 [13] [i_6]);
        var_30 = (~(arr_11 [i_6]));
    }
    for (int i_7 = 2; i_7 < 16;i_7 += 1)
    {
        arr_29 [i_7] = (min((((((var_17 ? (arr_17 [i_7 - 1] [i_7]) : var_6))) ? ((((arr_18 [i_7 + 1]) < (arr_3 [i_7])))) : ((min(var_11, (arr_12 [i_7] [i_7])))))), (((((((arr_3 [i_7]) / var_5))) || ((max(var_15, (arr_3 [i_7 + 1])))))))));
        var_31 = ((~((((min(1, (arr_12 [i_7 + 1] [1])))) + var_5))));
    }
    var_32 = (max(var_32, (((((-((var_1 ? var_13 : -1668929223)))) == (((((~1) != 12831)))))))));
    var_33 *= (((((((var_1 / var_10) != (45357 >= 42700))))) > (min(var_11, (max(65533, var_2))))));
    #pragma endscop
}
