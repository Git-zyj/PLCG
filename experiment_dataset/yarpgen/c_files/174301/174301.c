/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0 - 1] = ((-4243677610285715764 ? ((var_11 * (((1 ? 1 : var_9))))) : (((var_8 ? var_7 : var_1)))));
        var_14 = (!1);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_10 [i_0 - 1] [i_1] [i_1] [i_3 - 2] = ((((((min(var_7, var_11))) ? 17812447828886371343 : var_12)) ^ (--0)));
                        arr_11 [i_3 + 1] [i_2] [i_1] [i_1] [i_0] [i_0 - 1] = (((1 & var_3) ? 1 : (!var_0)));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {
                        var_15 += (var_7 ? (((((min(1, 1)))) - var_12)) : (((((0 ? var_10 : var_6)) >> (var_7 - 3043980279293282306)))));
                        var_16 = (1 & var_9);
                    }
                }
            }
        }
        arr_21 [i_0 - 1] = var_11;
    }
    var_17 = var_7;
    var_18 = 0;
    var_19 = (6641356877130846872 ? (((((var_12 == 0) > (!var_2))))) : ((-(17592186044415 - var_10))));
    var_20 -= (var_8 < -526724021);
    #pragma endscop
}
