/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_17 = ((8103962128188009970 == (~16499713584018731800)));
        arr_2 [i_0] [i_0] = ((((max((arr_0 [0] [i_0]), (arr_0 [i_0] [i_0])))) && ((var_6 && (arr_0 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            {
                                arr_19 [i_5] [i_2] [i_5] [i_5] [i_5] = ((((max(1840336446, (arr_16 [5] [i_3] [i_4] [i_5])))) ? (((arr_16 [i_5] [i_4] [i_1] [i_1]) ? (arr_16 [i_5] [i_4] [i_3] [i_2]) : 13112290870073033698)) : ((206427535 ? 0 : 1947030489690819816))));
                                var_18 |= ((((((arr_8 [i_5]) * (4879191927728511812 * 2272555485)))) ? (((8782735751925799443 ? (arr_12 [i_1] [i_1] [i_1]) : var_16))) : var_9));
                                var_19 = max(var_11, (max((arr_6 [i_2] [i_2]), (max(var_8, (arr_4 [3]))))));
                                var_20 = 13178738713275066207;
                                var_21 = 10;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                var_22 = (arr_14 [i_3] [i_2]);
                                var_23 = (min(var_23, (((var_0 > ((8796092956672 << (var_10 - 560034606))))))));
                            }
                        }
                    }
                    arr_26 [i_1] [i_2] [i_3] |= (var_2 ^ 2137291501134953679);
                    var_24 = (((max(14391423918577308016, 2316785865612756145)) << ((((var_0 ? 562945658454016 : 206427535)) - 562945658453967))));
                }
            }
        }
        var_25 = var_16;
    }
    var_26 = 2515616338938557442;
    var_27 ^= 2799936005;
    #pragma endscop
}
