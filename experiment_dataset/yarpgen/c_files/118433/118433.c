/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(39, (min(((max(24, 65515))), ((65515 ? 0 : 1))))));
    var_21 = (min(var_21, ((min((((((var_0 ? var_16 : 1))) ? (67553994410557440 + var_11) : (((var_3 ? var_2 : var_1))))), var_15)))));
    var_22 = (((var_7 >= var_15) - var_16));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_23 = ((((min(var_9, ((var_17 ? var_10 : var_7))))) && (24 != 18446744073709551614)));
        arr_2 [i_0 - 1] [i_0] = (var_7 + var_15);

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_24 = (min(var_24, ((((min((arr_4 [i_0 - 1] [i_0 + 1] [i_0 - 1]), (arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) | var_19)))));
            var_25 = (min(18379190079298994157, ((-(arr_1 [i_0 - 1])))));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                arr_9 [8] [i_0] [i_0] [4] = (((arr_5 [i_0] [i_0 - 1]) | (arr_5 [i_0] [i_0 - 1])));

                for (int i_3 = 3; i_3 < 16;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        arr_15 [i_0] [i_1] [i_2] = 16140901064495857664;
                        arr_16 [i_4] [i_3] [i_0] [i_0] [i_0] [i_0] [i_0] = var_13;
                        var_26 -= (((arr_0 [i_0 - 1] [i_0 - 1]) ? (~32751) : (arr_4 [i_0] [i_0] [i_0 + 1])));
                    }
                    for (int i_5 = 4; i_5 < 17;i_5 += 1)
                    {
                        arr_19 [11] [i_2] [11] [i_3] [i_0] = ((11747533300889583570 % (arr_7 [i_5] [i_5 - 1] [i_5])));
                        arr_20 [i_0] = ((-(~var_4)));
                    }
                    var_27 = (arr_18 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0] [1] [i_0 - 1]);
                }
                for (int i_6 = 4; i_6 < 15;i_6 += 1)
                {
                    var_28 = -var_14;

                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        arr_28 [i_0] [i_7] [i_2] [i_6] [i_2] [i_2] |= (arr_27 [i_2] [i_6 - 4] [i_6 - 1] [i_6 - 4] [i_6]);
                        var_29 = var_10;
                        var_30 = 32761;
                    }
                    var_31 = var_7;
                    var_32 = ((var_6 ? var_10 : var_18));
                    var_33 = var_18;
                }
            }

            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                arr_31 [i_0] [i_0] = (max(var_3, (min(var_14, ((var_1 ? (arr_4 [i_0] [i_0] [i_0]) : var_13))))));
                var_34 = (!18349418486257466720);
            }
            arr_32 [i_0] = (arr_1 [i_0]);
        }
        arr_33 [14] [i_0 - 1] |= (min((min(var_1, 12556445303603610214)), 1));
    }
    for (int i_9 = 1; i_9 < 9;i_9 += 1)
    {
        arr_37 [i_9] = ((18349418486257466702 | 77) ? (max(var_5, (arr_0 [i_9 + 1] [i_9 + 1]))) : (((~(arr_27 [6] [12] [i_9] [12] [16])))));
        arr_38 [i_9] [i_9] = (-7 - 13928987840226420556);
        var_35 = var_9;
        var_36 ^= (max(((min((arr_24 [i_9] [i_9 + 1] [i_9 - 1] [i_9]), -22))), (var_18 | var_14)));
    }
    for (int i_10 = 1; i_10 < 21;i_10 += 1)
    {
        var_37 = var_19;
        var_38 = ((!((max(-var_4, var_15)))));
    }
    var_39 = var_17;
    #pragma endscop
}
