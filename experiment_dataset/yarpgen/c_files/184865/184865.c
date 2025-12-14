/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min(((11544 ? var_8 : 1)), (var_13 != var_18)))) ? var_6 : var_19));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_21 = (min((((~(((arr_4 [4] [i_1]) ? var_3 : var_19))))), (((arr_1 [i_0]) ? (!var_15) : (((arr_2 [4]) ? (arr_5 [i_2] [5]) : var_14))))));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_11 [i_3] [i_2] [i_1] [i_0] = (((((var_14 & (arr_0 [i_0] [i_3])))) ? 22723 : 12750));
                        var_22 = (-1052076741 ? 230 : (arr_6 [i_0] [i_2] [i_2] [6]));
                    }
                }
            }
        }
    }
    var_23 = ((min(var_0, 12747920194116048323)));

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_24 = (max(var_24, -896));
        var_25 = 7810748705945058539;
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        arr_16 [i_5] = (min(((+((-1 ? (arr_13 [i_5]) : (arr_13 [i_5]))))), (min((arr_13 [18]), (((arr_15 [i_5]) ? var_19 : 7810748705945058539))))));
        var_26 = ((((((arr_12 [i_5] [i_5]) ? (arr_12 [1] [i_5]) : (arr_12 [i_5] [i_5])))) ? ((-((min(var_11, (arr_12 [i_5] [i_5])))))) : ((-(arr_15 [i_5])))));
        var_27 = (max(var_27, (arr_13 [15])));
    }
    #pragma endscop
}
