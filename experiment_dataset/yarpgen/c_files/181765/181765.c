/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((((!(((var_0 ? var_10 : var_3)))))), (((((var_11 ? var_0 : var_0))) ? (~var_3) : var_18))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = (((((var_12 ? var_18 : var_0)))) ? ((((~var_13) & ((var_2 >> (var_5 - 60802)))))) : (((~var_17) ? (((var_5 ? var_16 : var_8))) : ((var_6 ? var_1 : var_2)))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_21 = (~255);
                    var_22 *= (((((~var_10) != (~var_10))) ? ((1 ? 237 : 1028968803)) : ((((var_13 || var_17) || (((var_12 ? var_7 : var_4))))))));
                    arr_11 [i_0] [i_2] [10] [i_2] = (~243);
                }
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    arr_14 [i_0] [i_1 + 2] &= ((-((255 ? 245 : (-839273748 > 536346624)))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_23 = ((!(!var_5)));
                                arr_23 [i_5] [i_0] [3] [i_0] = (max(((-((3758620672 ? 27470 : 912429033)))), (var_18 ^ var_5)));
                                var_24 = (((var_3 ? var_17 : var_18)));
                                var_25 = (((((var_9 ? ((3382538236 ? -24979 : 255)) : ((var_18 ? var_7 : var_11))))) ? ((((var_16 && var_16) ? (var_8 / var_10) : 32767))) : ((243 ? -2094671763203357767 : -16825))));
                            }
                        }
                    }
                }

                for (int i_6 = 1; i_6 < 20;i_6 += 1)
                {
                    var_26 = (((((~((min(var_5, var_11)))))) ? (((~((max(var_2, var_13)))))) : (max((~var_1), (!var_18)))));
                    var_27 = (min(var_27, (((~(((26004 * 147) + (!var_9))))))));
                }
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    var_28 = (max(var_28, ((((((~((0 ? -799410973 : 12288))))) - var_18)))));
                    arr_30 [i_7] [i_7] [i_7] = (((((var_6 ? var_18 : var_3))) & ((min(var_18, ((var_17 ? var_10 : var_14)))))));
                    arr_31 [i_7] [i_1] [i_7] [i_7] = ((!((((!(-2147483647 - 1))) && (!var_6)))));
                }
                for (int i_8 = 1; i_8 < 21;i_8 += 1)
                {
                    var_29 = ((((((!(!var_14))))) * ((((max(var_3, var_12))) ? (var_18 < var_8) : ((var_2 ? var_2 : var_18))))));
                    var_30 *= (((var_13 & ((var_1 ? var_13 : var_18)))));
                    var_31 = -11;
                }
                for (int i_9 = 2; i_9 < 20;i_9 += 1)
                {
                    var_32 = ((((103 ? 31 : -16311)) - ((-var_0 ? var_7 : var_16))));
                    var_33 = ((!((((((var_10 ? var_6 : var_0))) ? (!var_18) : (!var_10))))));
                }
            }
        }
    }
    var_34 += ((-(((!(((var_6 >> (var_11 - 95)))))))));
    #pragma endscop
}
