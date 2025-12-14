/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(16645338195391745804, 16645338195391745782));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 = (arr_4 [i_0] [i_0] [11]);
                    arr_8 [i_2] = (min(((var_9 ? -1 : ((16645338195391745784 ? 1801405878317805821 : 1)))), 1));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {
                        var_17 = (arr_0 [i_4]);
                        var_18 = (arr_9 [i_0]);
                        var_19 = ((((40087 ? 0 : 524224))));
                        arr_16 [i_0] = (~63);
                    }
                }
            }
        }
        var_20 &= ((((min((arr_4 [i_0] [i_0] [i_0]), -1398513014))) ? (((arr_4 [i_0] [i_0] [i_0]) / (arr_4 [i_0] [i_0] [i_0]))) : ((max(var_12, 25448)))));
        arr_17 [i_0] = (~42071);
        var_21 = var_9;
    }
    for (int i_6 = 2; i_6 < 20;i_6 += 1)
    {
        var_22 = 0;

        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            arr_23 [i_6] [i_7] [i_7] = 21649;
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    {
                        arr_31 [i_6] [i_7] [i_9] [i_9] [i_8] [1] = ((((((arr_27 [i_6 - 2] [i_8 - 1] [i_9]) ? -3952399491472119462 : 20951))) ? (((-(arr_26 [i_6] [i_8 - 1] [i_9])))) : (((arr_21 [i_7] [i_8 - 1] [11]) ? (arr_27 [i_7] [i_8 - 1] [i_9]) : (arr_21 [i_7] [i_8 - 1] [i_9])))));
                        var_23 = ((65524 ? (arr_20 [10]) : (arr_30 [i_6] [3])));
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            var_24 = (((min(var_11, (arr_33 [i_6 + 2] [i_10] [i_10]))) - (arr_22 [i_10] [i_6])));

            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        {
                            arr_42 [1] [0] [i_10] [i_10] [i_11] [i_12] [i_10] = ((1766499065 ? 2783461500959419608 : 1));
                            var_25 = 36335;
                            var_26 += (((arr_19 [i_11]) <= (((max(var_2, (arr_39 [i_12] [i_11] [i_11] [14]))) / (((3295396107 ? (arr_30 [i_12] [0]) : var_7)))))));
                        }
                    }
                }
                var_27 = (arr_36 [i_10] [i_10] [i_11] [i_11]);
            }
        }
        var_28 = (var_2 ? var_7 : ((((arr_34 [i_6 + 1]) ^ ((min((arr_32 [i_6]), (arr_34 [7]))))))));
    }

    for (int i_14 = 0; i_14 < 12;i_14 += 1)
    {
        var_29 += (((((((arr_37 [i_14] [i_14] [i_14] [19]) / var_8)) + (((var_7 << (((arr_28 [i_14] [i_14]) - 8354251410416048981))))))) * (var_11 == 0)));
        var_30 = ((((-(min((arr_35 [i_14] [18]), var_1)))) != 40087));
    }
    #pragma endscop
}
