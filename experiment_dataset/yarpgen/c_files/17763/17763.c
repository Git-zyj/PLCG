/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = ((527765581332480 * (((arr_7 [i_0] [i_0] [i_0]) - (arr_7 [i_0] [i_1] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = (min(((var_18 ? (arr_11 [i_0] [5] [i_0] [i_0] [i_0] [i_0]) : -2)), (23 == 14106856188177693500)));
                                arr_14 [i_4] [i_3] [i_2] [i_0] [i_2] [i_0] [i_0] = 184;
                                var_21 &= (((var_5 + var_10) ? var_1 : (min(((max(var_17, (arr_8 [i_0] [i_4])))), (max((arr_4 [i_4]), var_14))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (((((var_17 ? var_8 : var_5))) ? 142 : var_6));
    var_23 = var_11;
    var_24 = (max(1841203220, 104));
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                {
                    var_25 *= (((((arr_12 [i_5 - 3] [10] [10] [i_5 - 3] [i_5 + 1] [i_5 - 1]) && (!3237058453))) || 2112));
                    var_26 = 152;
                    var_27 &= ((((((arr_6 [i_6]) | (18107920356068391676 & var_6)))) ? (((((((arr_0 [i_5] [i_6]) ? (arr_10 [i_5] [i_5] [i_5] [i_7]) : 13254))) ? (~0) : (~34471)))) : (((max((arr_19 [i_7] [i_6] [i_7]), var_1)) & (var_5 | 4339887885531858122)))));
                    var_28 = var_14;
                    var_29 = 1023;
                }
            }
        }
    }
    #pragma endscop
}
