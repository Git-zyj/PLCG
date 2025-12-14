/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((var_7 ^ var_8) ^ (max(8589934591, var_0))))) ? var_4 : ((var_5 ^ (min(11, -8589934615))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_14 = (arr_6 [i_3]);
                        var_15 |= var_9;
                        arr_12 [i_0] [4] [i_2] [i_2] &= (((arr_4 [i_0 + 1]) * ((((min(-8589934612, -8589934604))) * (arr_3 [i_0] [i_0] [i_0 - 1])))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_16 = -8589934598;
                                var_17 = ((!((((var_2 & 21) ? (arr_8 [i_0] [i_1] [i_4] [i_1]) : -8589934586)))));
                                var_18 = (((((min(var_7, 8589934600)))) ? ((min(((min(var_6, var_10))), (~2147483647)))) : (((arr_17 [i_1] [i_0] [i_0 + 1] [i_0] [i_1]) ? (((min((arr_4 [i_2]), var_6)))) : (~10941389870102965523)))));
                                var_19 = -29657;
                            }
                        }
                    }
                    var_20 = (max((8589934589 <= 8589934615), (arr_0 [9] [i_2])));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_21 = ((!(arr_21 [i_0] [i_6 + 1] [i_0 + 1])));
                                var_22 = ((((~(min(6595512774731996055, -458358515)))) >> (-435066413 + 435066457)));
                                var_23 = (min((((!((((arr_18 [i_0] [i_1] [i_1 + 1] [i_2] [i_1] [i_7] [i_7]) ^ 33397)))))), (arr_2 [i_1])));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_24 = ((-1 + (arr_22 [i_0 - 2] [i_1 + 1] [i_1 + 1])));
                        arr_25 [i_0 - 2] [i_1 + 2] [i_1] [i_0 - 2] = var_6;
                    }
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        var_25 = (arr_27 [i_2] [i_1] [i_2] [i_9] [i_2] [i_2]);
                        var_26 = (min(var_26, 8589934605));
                        arr_28 [i_0] [10] [i_0] [i_1] = (arr_16 [i_0] [i_0] [i_2] [4] [i_1 + 1]);
                        var_27 = var_0;
                        var_28 = ((((((((arr_14 [i_0 - 2] [i_1] [i_2] [i_9]) || -8589934604)) ? ((var_1 ? var_1 : 0)) : (((arr_26 [i_1] [i_2] [i_9]) ? var_0 : -108))))) ? ((6425966755875496401 / ((min(8589934620, 8))))) : (arr_24 [7] [i_0 - 2] [i_1] [i_2] [i_9])));
                    }
                    for (int i_10 = 1; i_10 < 20;i_10 += 1)
                    {
                        var_29 = (min(((min(4294967295, -32762))), ((((min((arr_22 [i_0] [i_1] [i_2]), 620798718))) ? var_4 : (min(3523897199, 10941389870102965550))))));
                        var_30 = ((~(((arr_29 [i_1] [i_10 - 1] [i_10]) * (arr_13 [i_0 + 1] [i_0 - 2] [i_0 - 2])))));
                        var_31 = (min(var_31, ((((arr_1 [i_10 - 1]) ? (((~((max(var_2, (arr_26 [i_0] [i_1] [i_2]))))))) : ((22962 & (max(27430, 13)))))))));
                        var_32 = (((((min(-458358526, (1 ^ var_8))) + 9223372036854775807)) << (((arr_5 [i_1 - 1] [i_1 - 1]) ? (min(var_0, 0)) : (arr_13 [i_1] [i_2] [i_10 - 1])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
