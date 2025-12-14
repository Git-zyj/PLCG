/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    var_13 = (((((min(var_10, var_6)))) ? var_10 : var_5));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = ((((var_2 ? ((min(var_2, var_5))) : var_4)) | ((max((arr_1 [i_0] [13]), 42)))));
        var_15 = ((-114 ? 14 : 1));
        var_16 = (!60);
        var_17 = ((((((-(arr_1 [1] [i_0])))) ? ((21658 ? 0 : 0)) : (((var_7 % (arr_1 [i_0] [i_0])))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            {
                var_18 = (max(var_18, ((((((((var_3 ? 25254 : (arr_2 [i_1])))) ? ((min((arr_2 [i_1]), var_8))) : (var_0 + var_11))) - (((arr_3 [i_2]) ? (arr_6 [i_1] [i_1]) : (arr_4 [12]))))))));
                var_19 = -19882;
                var_20 = (~(((!((((arr_2 [i_1]) ? (arr_4 [i_1]) : -12810)))))));
            }
        }
    }
    #pragma endscop
}
