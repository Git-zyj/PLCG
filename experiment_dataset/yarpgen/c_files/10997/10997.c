/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((!(((8796093022207 ? -12213 : (9223372036854775807 + var_3))))));
                var_11 *= (!3974895776);
                var_12 = (min((!97), (arr_2 [i_0])));
                var_13 = (min(var_13, (arr_2 [i_0])));
            }
        }
    }
    var_14 = var_4;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                var_15 = (arr_7 [i_2]);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_6 = 3; i_6 < 10;i_6 += 1)
                            {
                                var_16 = (max(var_16, (arr_11 [i_3] [i_6 - 1])));
                                var_17 = (max(var_17, ((((arr_16 [i_2] [i_5]) ? (arr_2 [i_2]) : (arr_11 [i_6 - 1] [i_6 + 1]))))));
                                var_18 = var_2;
                                arr_21 [i_5] [i_3] [i_4] [i_5] [i_6] &= (((var_5 < 118) ? (arr_1 [i_6 + 2]) : (~var_8)));
                                var_19 = (arr_19 [i_2] [i_2] [i_3] [i_4] [i_4] [i_5] [i_6 + 3]);
                            }
                            for (int i_7 = 0; i_7 < 14;i_7 += 1)
                            {
                                var_20 = (arr_23 [i_2]);
                                var_21 = -10562525129168461374;
                                arr_24 [i_2] [i_2] = (~-12);
                                arr_25 [i_2] [i_2] [i_2] [i_2] [i_7] = (!6538);
                            }
                            for (int i_8 = 0; i_8 < 14;i_8 += 1)
                            {
                                arr_30 [i_2] [i_3] [i_4] [i_5] [i_2] = var_7;
                                arr_31 [i_2] [i_3] [i_4] [i_2] [i_8] = 1393453099;
                            }
                            for (int i_9 = 3; i_9 < 12;i_9 += 1)
                            {
                                var_22 = (max(var_22, ((((((((65526 ? 106 : -14))) | (max(1143914305352105984, 988054058674209353)))) == (arr_29 [8] [8] [i_4] [8] [8]))))));
                                var_23 = (min(var_23, var_0));
                                arr_34 [i_9 + 2] [i_9] [i_2] = (((((arr_33 [i_2] [i_3] [i_5] [i_5] [i_9 + 1]) ? var_6 : (arr_33 [i_2] [i_4] [i_4] [i_5] [i_9 - 1]))) != ((8859660213283269789 ? (arr_33 [i_5] [i_3] [i_2] [i_5] [i_9 - 2]) : (arr_33 [i_9] [i_5] [i_4] [i_5] [i_9 + 1])))));
                            }

                            /* vectorizable */
                            for (int i_10 = 0; i_10 < 14;i_10 += 1)
                            {
                                var_24 ^= var_6;
                                arr_37 [i_2] [i_3] [i_4] [i_5] [i_2] = 267911168;
                                var_25 = (min(var_25, var_0));
                                arr_38 [i_2] [i_2] [i_3] [i_3] [i_4] [i_2] [i_10] = (((arr_20 [i_10] [i_5] [i_4] [i_3] [i_2]) ^ -1));
                                var_26 = ((var_7 ? -13711 : (arr_20 [i_2] [i_3] [i_4] [i_5] [i_4])));
                            }
                            for (int i_11 = 0; i_11 < 14;i_11 += 1)
                            {
                                var_27 = (max(var_27, (((-211366579 * (((arr_32 [i_4] [i_4]) ? 8562884195797451151 : (((arr_16 [i_11] [i_11]) & 18446744073709551609)))))))));
                                var_28 = ((var_2 ? (((arr_40 [i_11] [9] [i_11] [7] [i_11] [i_2]) ? -1342497175 : var_6)) : ((~(arr_19 [i_2] [i_3] [i_5] [i_5] [i_4] [i_3] [3])))));
                                arr_41 [i_2] [i_2] [i_2] [i_2] [i_2] = (!((((-127 - 1) % (arr_33 [i_2] [i_2] [i_2] [i_2] [i_2])))));
                                var_29 = 8581545984;
                            }
                            for (int i_12 = 0; i_12 < 14;i_12 += 1)
                            {
                                arr_44 [i_2] [i_2] [i_5] [i_5] [i_5] = (arr_1 [i_5]);
                                var_30 = (max(var_30, var_2));
                                var_31 = (((((((var_6 ? var_2 : (arr_28 [i_2] [i_2] [i_2] [i_2] [i_2])))) ? var_7 : (arr_17 [i_2] [i_3] [i_12] [i_12]))) & (arr_4 [i_4] [i_5])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
