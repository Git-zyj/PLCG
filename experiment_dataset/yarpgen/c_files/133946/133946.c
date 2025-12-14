/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 = var_18;
                    var_20 = ((-11 > ((var_11 ? var_14 : ((var_15 ? 114 : 142))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_21 = 12928;
                                var_22 += var_10;
                                var_23 = ((!((((!110) ? (arr_7 [i_3 + 2] [i_3 - 2] [i_3] [12]) : var_18)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 += var_9;

    for (int i_5 = 2; i_5 < 14;i_5 += 1)
    {
        var_25 = (max(133, (129 & var_4)));
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                {
                    var_26 = (-(max(142, (var_0 ^ var_17))));
                    var_27 = (((((46 ? (var_4 | 122) : -114))) ? (((-19155 && var_6) - (~var_10))) : (var_4 + var_6)));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
    {
        var_28 = ((((min(-109, (arr_19 [i_8]))))) > 2063983739580920762);
        var_29 = (max(((var_4 / (arr_18 [i_8]))), 114));
        var_30 = ((((16382760334128630869 == ((var_18 ? var_15 : 13657155916084251675)))) && ((((var_7 * 0) ? (14043278813889439761 | 2) : (!33459))))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
    {
        var_31 = (((arr_22 [i_9] [i_9]) ? (arr_21 [i_9]) : (17 != var_13)));
        var_32 += ((16382760334128630853 ? var_12 : ((var_17 ? 11034 : 274877906943))));
        var_33 = (2 >= var_8);
    }
    var_34 = ((((((var_5 == ((min(var_3, var_13))))))) > (((var_3 + var_8) ? ((var_3 ? var_5 : 13657155916084251677)) : (16382760334128630853 / -12230)))));
    #pragma endscop
}
