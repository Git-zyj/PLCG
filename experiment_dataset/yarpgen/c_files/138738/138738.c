/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_21 = (((((-1613895406561089708 + var_3) & ((((arr_0 [i_0]) ? 249 : 140))))) > (arr_5 [i_0] [i_0])));
                var_22 *= (max(1099494850560, (((((0 / (arr_1 [i_1])))) ? 251 : ((var_11 ? -1099494850555 : -1099494850573))))));
                arr_7 [i_1] = (max(((1099494850557 ? (((var_15 ? 244 : 66846720))) : (arr_2 [i_0]))), (~4687458372341765715)));
                var_23 += (((min(var_14, var_5)) != (((((20 ? (arr_1 [i_0]) : (arr_0 [i_0])))) ? ((2 ? 180 : -1099494850573)) : (arr_0 [i_0])))));
                var_24 += (~140);
            }
        }
    }
    var_25 = (min(((var_0 ? var_19 : (-1099494850561 & 1099494850572))), (!var_13)));

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_10 [i_2] = (~31);
        var_26 = ((!((((((1099494850572 ? (arr_8 [i_2]) : var_15))) & (arr_6 [16] [i_2] [i_2]))))));
        var_27 = ((((((arr_1 [i_2]) | 180))) ? (((arr_1 [12]) ? (arr_0 [i_2]) : (arr_0 [i_2]))) : (((arr_2 [i_2]) ? 23 : (arr_0 [i_2])))));
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        arr_14 [i_3] [7] = (max((((min(var_4, (arr_2 [i_3]))) | (arr_12 [i_3] [i_3]))), (((238 || (arr_3 [i_3]))))));
        var_28 = (min(var_28, -630948075));
        var_29 |= ((((((((arr_6 [19] [i_3] [i_3]) / var_7)) * (var_8 * 1267960247)))) ? (~var_3) : ((min(var_15, (arr_8 [i_3]))))));
        arr_15 [i_3] = (((arr_2 [i_3]) ? ((var_5 ? (arr_13 [i_3]) : (arr_11 [i_3]))) : ((((~var_5) ? var_6 : (!var_11))))));
        var_30 = (max(var_30, (((((((-(arr_13 [i_3])))) || var_4))))));
    }
    #pragma endscop
}
