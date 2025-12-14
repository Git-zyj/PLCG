/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (-9223372036854775807 - 1);
        var_16 = (-2115941105 / 60221);
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_17 = ((!(((63 ? 0 : 1849555409)))));
        var_18 = 86;
        var_19 = var_1;
        arr_5 [i_1] = ((24597 ? (arr_3 [i_1 - 1]) : ((233715772 ? (arr_4 [i_1 + 1] [i_1 + 1]) : (arr_4 [1] [i_1 + 1])))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_20 = 255;
        var_21 = (((1251194097 && 57463) ? -24597 : ((0 ? var_7 : 3043773202))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    {
                        arr_18 [i_4] [i_4] [i_3] [i_3] [i_4] [i_3] = ((((min(5012999780936556866, ((min(3043773198, var_2)))))) ? ((-((-(arr_4 [i_2] [i_2]))))) : var_6));
                        var_22 = ((((~(-9223372036854775807 - 1)))) + (arr_9 [i_4 - 3]));
                    }
                }
            }
        }
    }
    var_23 = ((((((~9223372036854775807) ? ((-5600 ? var_11 : 4)) : ((var_14 ? 255 : var_14))))) ? ((((!((max(2115941104, 2115941117))))))) : ((max(var_0, 15489779712599357261)))));
    #pragma endscop
}
