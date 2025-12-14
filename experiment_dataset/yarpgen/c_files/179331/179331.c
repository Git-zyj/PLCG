/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_15 = (max(var_15, (((-(arr_1 [i_0 - 1] [i_0 - 1]))))));
        arr_2 [i_0 - 1] = ((var_9 - ((((arr_0 [i_0] [i_0]) * (arr_1 [i_0] [i_0 - 1]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    arr_14 [i_1] = var_7;
                    arr_15 [1] [i_2] [i_2] [i_3] = ((((((arr_8 [i_1]) != -4789721432352708232))) >> (((arr_11 [i_1] [i_2]) + 65))));
                }
            }
        }
        var_16 = ((255 ? (arr_13 [i_1] [i_1]) : (arr_5 [i_1])));
        arr_16 [i_1] [i_1] = var_2;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_17 = (max(var_17, -23));
        arr_20 [i_4] [i_4] = (arr_17 [i_4]);
        arr_21 [i_4] = ((!(arr_19 [i_4])));
        arr_22 [i_4] = (arr_17 [i_4]);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        arr_25 [i_5] = 1261;

        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            arr_29 [i_5] [14] = (arr_28 [i_6 + 1] [i_6 + 1]);

            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                var_18 *= (((arr_28 [i_6 + 1] [i_6 + 1]) ? (arr_24 [i_6 + 1]) : 1519791296));
                var_19 = var_14;
            }
            for (int i_8 = 1; i_8 < 19;i_8 += 1)
            {

                for (int i_9 = 3; i_9 < 19;i_9 += 1)
                {
                    arr_38 [i_5] [i_5] [i_8] [i_5] = ((((-(arr_28 [i_8] [i_9]))) - (((arr_27 [i_5]) ? 9139 : var_6))));
                    var_20 += (!(arr_24 [i_8 - 1]));
                    var_21 = (min(var_21, (arr_37 [i_5] [16] [i_8] [i_5])));
                }
                var_22 = (max(var_22, ((((((var_12 / (arr_37 [i_5] [i_6 - 1] [i_6 - 1] [i_8])))) ? (arr_35 [i_8 + 1]) : (((((arr_28 [i_5] [i_5]) <= 4451764211131843235)))))))));
            }
        }
    }
    var_23 = ((~(~-23676)));

    /* vectorizable */
    for (int i_10 = 2; i_10 < 18;i_10 += 1)
    {
        arr_42 [i_10] [i_10] = (arr_17 [i_10 + 3]);
        arr_43 [i_10] = 1152358554653425664;
        arr_44 [i_10] = (arr_19 [i_10 - 2]);
    }
    #pragma endscop
}
