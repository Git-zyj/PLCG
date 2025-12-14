/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [10] [4] = var_7;
        arr_3 [9] [i_0] |= (((((var_16 ? var_5 : var_5))) ? (var_1 != var_7) : (~var_11)));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_20 = (min(var_20, ((((~var_8) ? (((((min(185, 245))) ^ var_14))) : ((~(var_0 ^ var_3))))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                {
                    var_21 = ((~(max((!var_3), ((var_10 ? var_7 : var_15))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 9;i_5 += 1)
                        {
                            {
                                var_22 = (max(var_22, ((max(((((max(var_9, var_17))) != (min(var_16, var_3)))), (var_5 <= var_14))))));
                                var_23 |= (max(((1 ? 0 : -1867894327)), (max(74, ((185 ? 85 : 213))))));
                            }
                        }
                    }
                }
            }
        }
        var_24 = (((max(((var_4 ? var_10 : var_3)), -var_7))) ? (((var_10 ? var_11 : var_13))) : var_4);
        var_25 = (((((((var_5 ? var_12 : var_15))) != (max(var_4, var_11)))) ? (((!var_7) ? (var_0 & var_18) : var_9)) : (min(var_18, var_6))));
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        var_26 = (min(var_13, ((((!var_18) != (var_4 & var_4))))));
        var_27 &= ((min(var_17, var_7)) != (var_0 != var_12));
        var_28 = ((~var_4) ? (var_1 & var_4) : -var_13);
        var_29 = ((((~((max(var_8, var_12)))))) <= (((((var_3 ? var_12 : var_12))) & var_4)));
    }
    var_30 = var_11;
    #pragma endscop
}
