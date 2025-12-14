/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_17 -= ((((min(((18446744073709551615 & (arr_5 [i_0]))), (arr_9 [i_0] [i_1] [i_2] [i_0])))) ? (((!((min((arr_6 [i_0] [i_1] [i_2] [i_3]), 8116426793812426246)))))) : ((((23942 >> (arr_2 [i_0] [i_2] [i_3]))) << (((arr_1 [i_0]) ? 1 : (arr_4 [i_3] [i_0])))))));
                            var_18 = ((min(1, -19115)));
                            var_19 = (arr_8 [i_0] [i_2] [i_2] [i_3]);
                            var_20 += (((min((arr_1 [i_2]), (arr_1 [i_0]))) < ((~(arr_1 [i_2])))));
                        }
                    }
                }
                arr_10 [i_0] [i_1] = 1;
                arr_11 [i_1] = ((((~(min((arr_7 [3] [i_1] [i_1] [i_1]), 15)))) * (min((19110 * 5701302668138099024), ((min((arr_6 [i_0] [i_0] [i_0] [i_1]), 4294967295)))))));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_21 += ((20128 * ((-(26 / 19099)))));
                            var_22 = (min(11, (min(-19129, 3769445573453903941))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 16;i_8 += 1)
                        {
                            {
                                arr_26 [i_0] [i_1] [i_0] [i_0] [i_0] = ((~((((29 ? 18446744073709551607 : 18446744073709551608)) ^ ((18446744073709551587 ? (arr_18 [i_0] [i_1] [i_6] [i_6]) : 56))))));
                                arr_27 [2] [i_1] [i_1] [i_1] [13] [i_8] = (((min((18446744073709551615 != -1851501184427240098), ((-20444 ? 15 : 19115)))) + (((arr_4 [i_0] [i_1]) ? (max(19136, (arr_16 [i_0] [i_6] [i_7]))) : (min((arr_19 [i_0] [i_1] [i_6] [i_0]), 0))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = ((-var_2 ? (((!(var_8 && var_2)))) : (((var_7 != ((var_9 ? var_1 : var_1)))))));
    var_24 = ((-(min(11, 18446744073709551560))));
    #pragma endscop
}
