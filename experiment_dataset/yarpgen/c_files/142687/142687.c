/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((25982 ? 1 : 4294967295));
    var_19 += (((((9079256848778919936 ? -1 : 22))) ? ((((max(var_6, var_1))) ? ((var_14 ? var_13 : var_6)) : (((-40 ? 22 : 4))))) : (((((41 ? -5 : 3))) ? (min(var_13, var_14)) : (((-10 ? 3 : -20)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 = (((((((((arr_3 [i_0]) ? (arr_1 [14] [14]) : (arr_4 [9] [10] [i_2])))) ? (((arr_5 [i_0] [i_0] [7]) ? var_7 : 8)) : ((((arr_2 [6]) ? -21 : (arr_3 [i_2]))))))) ? ((max(((min(-5, -46))), ((3 ? -3 : -3))))) : (max((min((arr_3 [i_2]), var_17)), ((max((arr_5 [i_1] [8] [i_1]), (arr_7 [i_2]))))))));
                    arr_8 [i_2] [i_1] [i_0] [1] = ((((min(((21 ? -3 : var_6)), ((max(var_0, 4)))))) ? (((((min(var_9, 1))) ? ((21 ? 45 : -32)) : (max(var_16, 73))))) : ((((min((arr_3 [i_0]), var_10))) ? (min(var_5, -68)) : ((((arr_0 [i_0]) ? 22 : (arr_4 [i_0] [i_1] [i_2]))))))));
                    var_21 = ((((((((var_7 ? -5 : -3))) ? (max(-42, var_0)) : ((max((arr_2 [i_0]), 20)))))) ? ((((((arr_1 [i_2] [i_1]) ? (arr_1 [i_0] [10]) : 20))) ? ((max((arr_5 [0] [2] [i_2]), 63))) : (((arr_4 [14] [14] [i_1]) ? -42 : (arr_2 [3]))))) : (min(((2 ? 31 : 18)), ((min((arr_2 [12]), var_14)))))));
                    arr_9 [i_2] = ((((max((min(10, -18)), (min(20, 0))))) ? ((((((12 ? 4 : (arr_2 [i_0])))) ? (min(47, var_7)) : (((var_17 ? 3 : (arr_1 [2] [i_2]))))))) : (((((var_4 ? (arr_1 [i_1] [i_2]) : (arr_7 [i_2])))) ? ((4 ? -18 : var_5)) : (((-26 ? (arr_7 [i_2]) : var_15)))))));
                    arr_10 [i_2] [0] [i_2] = (min(((max((min(var_9, var_16)), ((max(29, var_12)))))), (max(((min((arr_3 [i_0 + 2]), -26))), ((var_4 ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : var_6))))));
                }
            }
        }
    }
    #pragma endscop
}
