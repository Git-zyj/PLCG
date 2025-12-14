/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 = (min((~3982688255), ((2147483647 ? 17447415659055699782 : var_3))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_4 - 2] [i_3 - 1] [0] [i_0] [i_1] [i_0] = ((var_17 ? (((-(32767 + 4473)))) : (-102 | 2518938333)));
                                arr_15 [i_0] [i_0] [i_0] [i_2 + 1] [i_3] [i_4] [i_0] = -3115141353603528485;
                                arr_16 [i_0] [i_0] [i_2] [17] [i_0] [i_2] = (max(((4485 ? var_17 : 968570717)), (max((((0 ? var_1 : 4485))), (2364242787 * var_7)))));
                                arr_17 [i_0] [i_0] [i_2] = (236 ? (((var_10 ? 0 : 56012))) : var_0);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_23 [i_1] [i_6] [i_6] [i_6] [i_6] = (min(((61075 ? 2752651706 : 2364242787)), ((max(17659260, 29474)))));
                                var_19 = ((((min(245, 0))) ? ((2339412501 ? 4294967284 : 1930724508)) : (-4459521713122988185 == 4294967280)));
                                arr_24 [i_6] [i_6] = ((((4294967293 ? 4836169400189476597 : 14262575579546337290)) < ((min(8709845345545942356, 4064606803)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = var_16;
    var_21 = ((-2 & (((max(var_5, var_11))))));
    #pragma endscop
}
