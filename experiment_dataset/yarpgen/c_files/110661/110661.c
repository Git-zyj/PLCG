/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_19 = (var_2 ^ ((var_2 ^ (arr_4 [i_1] [i_1]))));
                        var_20 = (16247953061007797525 | 11974340253027240947);
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_21 = ((15279916116953662002 ? 5874267103450253175 : 2198791012701754086));
                        var_22 &= (((arr_13 [9] [i_1]) >> ((((2198791012701754086 ? 8117726881536705395 : 8117726881536705395)) - 8117726881536705386))));
                        var_23 &= (var_11 ^ 15279916116953662002);
                    }
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_24 *= (15279916116953662031 - 16247953061007797529);
                        var_25 = (((((255 ? var_1 : (arr_2 [i_0])))) ? ((5547569135998662808 ? (arr_3 [7] [i_2] [i_0]) : var_2)) : (((255 / (arr_10 [i_0]))))));
                    }
                    var_26 = (17 >= 4);
                    var_27 -= 2198791012701754076;
                }
            }
        }
        var_28 = ((3166827956755889579 > ((var_9 ? 4043710631129412512 : var_2))));
        arr_17 [i_0] &= (((arr_15 [i_0] [i_0] [i_0]) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_14 [i_0] [i_0] [i_0] [3])));
    }
    var_29 = ((((((((var_14 ? 243 : var_4))) ? (139 & var_10) : var_4))) ? (((var_7 > 0) ? ((175 ? 9 : 16247953061007797525)) : (var_18 ^ var_15))) : ((((2806394046227340392 >> (89 - 89))) & 5264118834336679259))));
    var_30 |= (((((((var_4 ? var_12 : var_11))) ? var_13 : (var_2 <= var_3)))) ? (((var_9 >= var_0) ? var_6 : (var_12 / var_13))) : (((var_15 ? 9622858606461018943 : var_1))));
    #pragma endscop
}
