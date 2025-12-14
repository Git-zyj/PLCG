/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = (min(var_19, ((((((var_5 - -220324565) / ((((arr_1 [i_0]) || var_18))))) << (var_13 - 7904))))));
        var_20 = (max(var_20, (((61674 ? (((((arr_1 [i_0]) % var_3)) - (61674 ^ 5))) : (0 + 3868))))));
        var_21 ^= ((25876 - ((65533 ? (var_16 < var_1) : (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_22 = (min(var_22, 3227124834));
        arr_4 [i_1] = (min(((max(-3615, var_2))), (((0 || var_3) ? ((var_2 + (arr_3 [i_1]))) : -5215))));
        arr_5 [i_1] = 6;
        var_23 ^= var_1;
        arr_6 [i_1] [i_1] = 65535;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_24 = var_17;

        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_25 = ((6622 ? 44224 : -19762));
            var_26 = ((6643 >> (58884 - 58857)));
        }
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    {

                        for (int i_7 = 1; i_7 < 11;i_7 += 1)
                        {
                            var_27 ^= ((var_9 ^ ((43711 << (3161265948 - 3161265939)))));
                            arr_24 [i_2] [i_7] [i_5] [i_6] [i_7] = 28638;
                            arr_25 [i_7] = (arr_13 [i_2] [i_4] [i_4]);
                        }
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            var_28 = (((((6637 ? var_4 : -28))) || (var_11 >= -22)));
                            var_29 ^= (arr_10 [i_5] [i_4] [i_5]);
                        }
                        arr_29 [i_4] [i_4] [i_4] [i_6] = (var_17 || var_11);
                        var_30 ^= 0;
                    }
                }
            }
            arr_30 [i_2] [i_2] [i_2] = 0;
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        {
                            var_31 ^= ((1006632960 ? ((113 ? var_10 : (arr_36 [i_9] [i_2] [i_9] [i_2] [i_2]))) : (((arr_11 [i_2] [i_2] [i_9]) >> (27594 - 27583)))));
                            arr_38 [i_9] [i_10] [i_2] [i_2] [i_4] [i_2] [i_9] = (((arr_14 [i_10 - 1]) ? ((33069 ? var_3 : 65522)) : ((var_16 ? var_14 : (arr_9 [i_9])))));
                            arr_39 [i_9] = var_10;
                            var_32 ^= (((arr_28 [i_2] [i_2] [i_2] [i_9] [i_10] [i_10] [i_10]) < ((19 ? 54979 : 31497))));
                            var_33 ^= (var_3 ? (var_8 - var_16) : (arr_1 [i_2]));
                        }
                    }
                }
            }
        }
        arr_40 [i_2] = 32767;
        var_34 = (max(var_34, (var_0 + 2290882044)));
        arr_41 [i_2] = var_5;
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 15;i_12 += 1)
    {
        for (int i_13 = 2; i_13 < 13;i_13 += 1)
        {
            {
                arr_46 [i_13 + 2] [i_12] = (max(29307, 2));
                var_35 ^= 0;
                var_36 = (((((arr_42 [i_13 + 2] [i_13 - 2]) + 2147483647)) << (65522 - 65522)));

                /* vectorizable */
                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {
                    var_37 = 48599;
                    var_38 = 16;
                    arr_49 [i_12] = (((((2640300701 ? 4294967290 : 0))) ? var_14 : (arr_45 [i_13 - 1])));
                    var_39 = (max(var_39, (10491 - var_10)));
                }
                for (int i_15 = 0; i_15 < 15;i_15 += 1)
                {
                    var_40 = (max(65533, (min(-3615, var_17))));
                    arr_52 [i_12] [i_12] = ((var_5 ? ((123 ? (((var_16 >> (var_1 + 20552)))) : ((var_11 ? 4294967284 : 2)))) : (((var_16 >> (113 == 3227124834))))));
                }
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 15;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 15;i_17 += 1)
                    {
                        {
                            arr_58 [i_16] [i_16] [i_16] [i_13 - 2] [i_12] [i_12] = 40134;
                            arr_59 [i_12] [i_12] [i_17] = (min(((((arr_42 [i_12] [i_13]) ? 5 : ((min(255, 15)))))), (min((min(4294967278, 10)), ((min(55444, var_18)))))));
                            arr_60 [i_17] = (max(((min(((-3589 < (arr_54 [i_12] [i_17]))), (3673552431 < 72408317)))), var_18));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
