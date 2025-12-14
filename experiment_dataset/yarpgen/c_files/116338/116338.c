/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 = ((((var_3 >> (6275219010179818539 - 6275219010179818524))) % (((((arr_1 [i_0]) ? var_2 : 6391687541708538293))))));
        var_16 = ((-(((!(arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_17 = (max(-31904, (((~var_0) ? (~15) : (arr_2 [i_1])))));
        var_18 = (max(var_18, (var_5 / -1)));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    var_19 = var_6;
                    var_20 = (max(10, ((((arr_6 [i_2]) < (arr_9 [i_4]))))));

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_21 += 4094;
                        arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] = (arr_0 [i_4] [i_2]);
                        var_22 = arr_4 [i_2] [i_4];
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        arr_17 [i_2] [i_6] [i_3] [i_3] [i_2] [i_6] = (arr_5 [i_2]);
                        var_23 = 4094;
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            var_24 = 1;
                            var_25 -= (arr_15 [i_8] [i_8] [i_8] [i_8]);
                            var_26 = (~-1);
                        }
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            var_27 ^= (max(((((arr_21 [i_2] [i_4] [i_9]) != (arr_18 [i_2] [i_2] [i_4])))), (arr_18 [i_2] [i_2] [i_7])));
                            var_28 = ((((((arr_7 [i_7]) ? (max(var_9, var_5)) : (((((arr_15 [i_2] [i_3] [i_4] [i_9]) || var_13))))))) && 4081));
                        }

                        for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
                        {
                            var_29 = -4115;
                            var_30 *= var_10;
                        }
                        for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
                        {
                            var_31 = -4;
                            var_32 = (min(var_32, (min(4100, (((var_7 == 409690151763351448) ? 19704 : var_12))))));
                            var_33 = (arr_6 [i_2]);
                        }
                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            arr_33 [i_2] [i_2] [i_2] [i_2] [i_2] = ((((((var_5 ? var_3 : var_8)) >> (((255 > (arr_23 [i_2] [i_2] [i_2] [i_3] [i_4] [i_7] [i_12])))))) <= var_12));
                            var_34 -= var_6;
                        }
                        var_35 = 4;
                        var_36 = 4190893435;
                    }
                }
            }
        }
        var_37 = var_4;
    }

    for (int i_13 = 0; i_13 < 22;i_13 += 1)
    {
        var_38 = (8264843470916518665 / -8264843470916518665);
        var_39 = var_8;
        var_40 = (max(var_40, 0));
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 22;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 22;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 22;i_16 += 1)
                {
                    {

                        for (int i_17 = 0; i_17 < 22;i_17 += 1) /* same iter space */
                        {
                            var_41 = ((18446744073709551606 ? ((((var_0 ? 4294967295 : 65531)))) : var_3));
                            var_42 = (min((arr_36 [i_16] [i_16] [i_16]), (arr_46 [i_14] [i_16] [i_15] [i_14] [i_13])));
                            arr_47 [i_15] [i_14] [i_15] [i_16] [i_14] = (((max(var_8, -var_14)) > (-16856 >= -99)));
                            var_43 = (((((var_3 ? 1324181911 : var_10))) / (((((arr_34 [i_15]) ? 886740936 : (arr_45 [i_15]))) / 16856))));
                        }
                        /* vectorizable */
                        for (int i_18 = 0; i_18 < 22;i_18 += 1) /* same iter space */
                        {
                            var_44 = (arr_35 [i_14] [i_18]);
                            var_45 = arr_49 [i_13] [i_13] [i_13] [i_13] [i_13];
                        }
                        for (int i_19 = 0; i_19 < 22;i_19 += 1)
                        {
                            arr_54 [i_15] [i_15] [i_15] = ((min(var_4, ((max(52, (arr_52 [i_19] [i_19])))))));
                            var_46 ^= (max(-4, (((arr_42 [i_13]) ? var_14 : var_1))));
                            var_47 = (arr_46 [i_13] [i_14] [i_15] [i_16] [i_19]);
                        }
                        arr_55 [i_15] [i_14] [i_15] = (((arr_50 [i_13]) && 46));
                        arr_56 [i_13] [i_13] [i_13] [i_13] [i_15] = ((((((-16878 ? var_4 : 3592467597))) >= var_7)));
                    }
                }
            }
        }
        arr_57 [i_13] = (max(((-(var_7 & var_10))), var_12));
    }
    var_48 = ((var_12 ? (~-var_7) : 26));
    #pragma endscop
}
