/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((47883 ? var_2 : 2251799813685247));

    for (int i_0 = 2; i_0 < 7;i_0 += 1) /* same iter space */
    {
        var_11 = (~-3035930814524248783);

        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            var_12 -= var_8;
            var_13 = (min(((-(max(var_9, (arr_0 [i_1]))))), (((!((((arr_2 [i_1]) / var_4))))))));
        }
        var_14 = (max(var_14, (arr_3 [i_0])));
        arr_4 [i_0] [i_0] = var_1;
    }
    for (int i_2 = 2; i_2 < 7;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 3; i_3 < 7;i_3 += 1)
        {
            var_15 = (min(var_15, ((max((((min(-16866, (arr_7 [i_2] [i_2]))))), var_9)))));
            var_16 -= var_3;
        }
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            var_17 = (max(var_17, (((54478547 || ((((arr_1 [i_2 + 3]) ? ((-(arr_2 [i_4]))) : -54478553))))))));
            var_18 = (max(((((arr_7 [7] [i_4]) > (arr_7 [i_4] [4])))), ((~(arr_8 [3] [i_4] [i_4 - 1])))));
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {

            /* vectorizable */
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                var_19 = var_6;
                arr_17 [i_2] [i_5] [i_6] = var_0;
                arr_18 [i_2] [i_2 - 1] [i_2 + 1] = ((!(arr_15 [i_2 - 2] [i_5] [i_6] [8])));
                var_20 = (((arr_3 [i_2 + 2]) || (arr_10 [i_2 + 1])));
            }
            var_21 = ((+((((arr_15 [0] [i_2 + 1] [i_2 + 1] [i_2 + 1]) != (((((arr_8 [i_2] [i_2 + 2] [i_5]) || (arr_13 [i_2] [i_2] [i_2]))))))))));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {

            for (int i_8 = 3; i_8 < 9;i_8 += 1)
            {
                var_22 = (min((((~(arr_19 [1] [i_2])))), ((((max((arr_0 [i_2]), 18446744073709551597))) ? (arr_14 [7] [i_2] [8] [i_8]) : var_9))));
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 8;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        {
                            arr_29 [i_10] = ((~((var_8 ? var_2 : 62914560))));
                            var_23 = (max(((((arr_1 [i_2 + 2]) << (var_6 - 44124)))), (max((((arr_12 [i_9]) ? var_5 : 56)), (arr_0 [i_2 + 2])))));
                            var_24 = (arr_3 [i_2 + 3]);
                        }
                    }
                }
                var_25 = min(((max((arr_28 [i_2 + 1] [i_2] [i_2 + 2] [i_2] [i_2 + 1]), (arr_7 [i_2 + 2] [i_8 - 2])))), ((73 ? -8292741084122075755 : 1401450324)));
            }
            var_26 = (min(var_26, ((((((~var_8) ? ((min(var_6, (arr_7 [i_2] [i_2])))) : ((((arr_1 [1]) >= var_3)))))) ? ((((39338 < ((((arr_0 [i_2]) || (arr_16 [i_2])))))))) : ((max(-1, (arr_13 [i_2] [0] [i_7]))))))));

            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {

                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    var_27 -= (!62914555);
                    var_28 -= ((((((!var_0) ? (-1 && var_8) : 83))) ? var_7 : (~964149492)));
                }
                var_29 = ((~((((arr_10 [i_2]) < ((~(arr_9 [i_11] [i_2] [i_2]))))))));

                for (int i_13 = 1; i_13 < 9;i_13 += 1)
                {
                    var_30 -= (((((((min((arr_31 [i_2] [5] [3] [4]), var_8))) ? ((-17 ^ (arr_27 [i_13] [i_13 - 1] [i_11] [i_7] [8] [8]))) : (min((arr_22 [i_2] [i_11] [i_2]), -256271167))))) ? ((~(max(var_3, var_1)))) : ((26188 ? (arr_19 [i_13 + 1] [i_2 + 1]) : (arr_24 [i_2 - 1])))));
                    var_31 = ((((((((((arr_5 [i_2]) < var_3))) != (arr_8 [i_13 - 1] [i_2 + 1] [i_11]))))) ^ var_8));
                    var_32 = arr_37 [i_2 - 1] [7] [i_11] [i_13];
                    var_33 = (max(var_9, (arr_23 [i_2] [0] [i_2] [i_11])));
                }
                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    var_34 = ((var_1 ? (var_9 < var_8) : -54478555));
                    arr_40 [i_2] [i_7] [i_14] [i_14] = ((((((max(105, (arr_37 [i_2] [1] [i_11] [i_14])))) + (max(-5, var_0))))) && (!var_6));
                }
            }
        }
        var_35 = -3758902960637789451;
    }
    var_36 = 6;
    var_37 = (max(var_37, var_8));
    #pragma endscop
}
