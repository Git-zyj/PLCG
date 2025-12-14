/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= var_1;
    var_18 = 55924;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 = var_5;
        var_20 -= (((var_15 ? 55923 : var_0)));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_21 -= ((var_8 + (arr_0 [i_1] [2])));
        arr_6 [i_1] = var_11;
        var_22 *= var_8;
    }
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        var_23 = (min((((!((min(168, var_7)))))), (min(var_1, var_0))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    var_24 = (min(var_24, ((max((arr_12 [20] [11] [i_4]), ((var_6 * (arr_7 [i_2 + 1] [i_4]))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_25 = (((arr_18 [i_2 + 2] [i_5 + 2]) ? (arr_8 [i_2 - 1]) : ((((arr_8 [i_3]) < var_14)))));
                                arr_19 [i_5] [i_3] [i_4] = ((((min(9612, (30943 + 55922)))) & 9003736509521547275));
                                var_26 = (max(var_26, (((max(((var_6 >> (65408 - 65404))), var_15))))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        var_27 = (((!var_1) ? ((max(34593, var_8))) : var_16));
        var_28 = (((((1139901588 ? ((9612 ? 79521925 : 0)) : (((-1370575738 ? 268435456 : 147)))))) ? (min(var_11, ((((arr_10 [i_7] [i_7]) ? var_3 : var_4))))) : 12173));
        var_29 = (min(var_29, (((68 % 9584) + (arr_20 [i_7] [4])))));
    }
    #pragma endscop
}
