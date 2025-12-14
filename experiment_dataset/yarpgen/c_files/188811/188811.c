/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_4));
    var_12 = var_0;

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {
                        var_13 = (max(var_13, (((var_7 ? 1 : 520093696)))));
                        var_14 ^= (((((((2349045239 ? 2349045239 : 16128)) >> (((((arr_8 [i_0] [i_0]) ^ -16384)) - 29888))))) ? var_0 : ((((arr_7 [8] [i_2 + 3] [i_2 - 3]) >= var_1)))));
                        arr_12 [i_0] [6] [i_0] [10] = ((((!(((var_1 ? var_6 : 597655368250689486)))))));
                        var_15 = (max(((max(var_10, (arr_11 [i_2 - 2] [i_2 - 2] [i_2 - 3] [i_3])))), (arr_1 [i_0])));

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            var_16 = ((((max((arr_9 [i_3] [i_3 + 1] [i_0]), (arr_7 [i_0] [i_2 + 1] [i_3 + 2])))) ? (!-29360128) : (arr_5 [i_0] [i_0])));
                            var_17 = (max(2078, 46));
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_18 = ((min(((var_5 * (arr_0 [i_0] [i_5]))), (arr_11 [i_5] [i_3] [i_0] [i_0]))) >> ((((min(-23208, var_9))) - 42311)));
                            var_19 = (min(var_19, ((((arr_15 [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 + 2] [i_3 - 1] [i_3 + 1] [i_3 + 1]) < (min((arr_15 [i_3 + 2] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 + 2]), (arr_11 [i_3 + 2] [i_3 - 1] [i_3 + 1] [i_3 + 1]))))))));
                            var_20 ^= (((((min(1, 16825308629704332086))) ? (((arr_10 [i_0] [2]) ? 1 : 1)) : 1)));
                            var_21 = (((((((var_10 ? (arr_14 [i_0] [i_1] [i_2] [i_1] [i_0]) : var_10)) * 1))) ? ((var_7 ? 5000951871503453984 : ((max(var_7, (arr_9 [i_0] [i_2] [i_0])))))) : (((~((var_8 ? var_9 : -23208)))))));
                        }
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_22 = -268173312;
            var_23 = ((2759916863 ? 5596 : 2759916863));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    {
                        var_24 = var_2;
                        var_25 = (--54);
                    }
                }
            }
            var_26 = var_3;
            arr_25 [i_0] = ((114 ? var_3 : (arr_0 [i_0] [i_6])));
        }
        for (int i_9 = 3; i_9 < 15;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 2; i_10 < 15;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        {
                            var_27 = (max((((arr_19 [i_0]) ? (arr_19 [i_0]) : (arr_19 [i_0]))), (arr_19 [i_0])));
                            var_28 -= (!9308689144052868470);
                        }
                    }
                }
            }
            var_29 = ((((!((var_10 && (arr_9 [i_0] [i_9] [i_0]))))) || ((((arr_0 [i_0] [i_9]) ? (((arr_17 [i_0] [i_9 - 2] [i_9] [9] [i_9 - 2]) ? var_8 : (arr_28 [i_0] [i_0] [i_9]))) : ((var_1 ? var_7 : 219295311)))))));

            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {

                for (int i_14 = 0; i_14 < 16;i_14 += 1)
                {
                    var_30 = 17275073924589964606;
                    var_31 -= ((+(((arr_20 [i_9 + 1] [i_9 - 2] [i_9] [i_9 - 1]) ? (arr_20 [i_9 + 1] [i_9 - 2] [i_9] [i_9 - 1]) : (arr_20 [i_9 + 1] [i_9 - 2] [i_9 + 1] [i_9 - 1])))));
                    var_32 = (arr_22 [i_0] [i_0] [i_13] [i_14]);
                    arr_40 [i_0] [4] [i_13] [i_13] = (max((max((arr_0 [i_0] [i_9]), (!var_6))), (((-(max(var_3, (arr_9 [i_0] [i_0] [i_0]))))))));
                    var_33 ^= 134216704;
                }
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {

                    for (int i_16 = 0; i_16 < 16;i_16 += 1) /* same iter space */
                    {
                        var_34 = (arr_39 [i_0]);
                        var_35 = -17024609299732443466;
                        var_36 = (((arr_7 [i_0] [15] [i_9 + 1]) ? 2064384 : var_6));
                    }
                    for (int i_17 = 0; i_17 < 16;i_17 += 1) /* same iter space */
                    {
                        var_37 = (max((((arr_26 [i_0] [i_15]) ? (arr_3 [i_0]) : (arr_3 [i_0]))), var_4));
                        var_38 *= (max((arr_33 [i_9] [i_9 - 1] [i_9] [i_9 - 2]), (((arr_33 [i_9] [i_9 - 3] [i_9 - 3] [i_9 + 1]) ? var_1 : (arr_33 [i_9] [i_9 - 2] [i_9] [i_9 - 1])))));
                    }
                    for (int i_18 = 0; i_18 < 16;i_18 += 1) /* same iter space */
                    {
                        var_39 = (-127 - 1);
                        var_40 = (min(var_40, ((max((((min(var_4, var_4)))), (!var_0))))));
                        var_41 = (var_3 > -5612);
                    }
                    var_42 = (max(var_42, ((((arr_29 [i_0] [i_13] [i_13]) | (((((arr_34 [i_0] [i_0] [13] [i_0] [i_13] [i_15] [i_15]) != 49152)) ? (!21000) : (arr_15 [i_0] [i_0] [13] [i_9 + 1] [i_15] [i_13] [i_9 + 1]))))))));
                }
                for (int i_19 = 0; i_19 < 16;i_19 += 1)
                {
                    arr_54 [i_0] [i_0] [i_0] [i_13] [i_19] = (((((42 ? (max(111, (arr_15 [4] [4] [4] [4] [i_13] [i_13] [i_19]))) : 1))) ? (((var_8 >= (max((arr_45 [0] [i_9 + 1]), var_9))))) : ((max((!var_10), (arr_39 [i_0]))))));
                    var_43 = ((123 >> (23187 - 23172)));
                    arr_55 [i_0] [i_9] [i_13] [i_9] [i_9] [i_0] = ((!((((arr_0 [i_0] [i_0]) ^ (arr_0 [i_0] [i_0]))))));
                }
                arr_56 [i_13] [i_0] [i_0] = 219295311;
                var_44 = -5601;
            }
        }
    }
    for (int i_20 = 0; i_20 < 16;i_20 += 1) /* same iter space */
    {
        arr_60 [i_20] = ((!(arr_0 [i_20] [i_20])));
        var_45 = var_4;
        arr_61 [i_20] = (((arr_3 [i_20]) ? var_7 : ((min(-16384, 7185)))));
    }
    #pragma endscop
}
