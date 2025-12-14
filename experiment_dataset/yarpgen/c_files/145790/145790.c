/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(-var_14, (((-((var_8 ? var_0 : var_13)))))));
    var_16 = var_2;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_10 [i_3] [i_1] [i_1] [i_1] [1] = (min(var_10, (arr_6 [i_1] [i_1] [i_2] [0])));
                        arr_11 [i_0] [1] [7] [i_1] [i_3] = ((~(arr_4 [i_1])));
                        var_17 = (min(var_17, (((((max((arr_5 [1] [9] [i_1 + 1] [12]), var_9))) ? (arr_5 [i_0] [1] [i_1 + 1] [i_1]) : ((max((arr_5 [9] [i_1] [i_1 - 1] [6]), (arr_5 [i_1] [i_1] [i_1 - 1] [10])))))))));
                    }
                }
            }
            var_18 = 44380;
            arr_12 [i_0] [i_1] [i_1] = var_2;
        }
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    var_19 = ((~(10653933345238319691 | var_3)));
                    var_20 = (((((((min(var_4, (arr_0 [11])))) ? (min(var_8, var_13)) : ((21156 ? 255 : 44380))))) / ((~(max(var_3, 255))))));
                    var_21 = max(((max((arr_0 [i_4 + 1]), 1))), 5959273035436017468);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                arr_25 [i_4] [i_4] [i_5] [i_6] = ((((max(var_14, (min(7843850353768710726, 1))))) ? (((((((arr_14 [8] [14]) / var_7))) ? (((arr_18 [i_0] [10] [7]) | var_0)) : (arr_9 [i_4] [i_6] [14] [i_4])))) : ((((min(14, (arr_8 [3] [1] [i_6] [12])))) ? ((((arr_13 [0] [3] [i_5]) / (arr_18 [1] [i_5] [1])))) : var_14))));
                                var_22 += (((((((max(var_10, (arr_0 [7])))) ? 47 : var_6))) || (arr_19 [i_0] [i_0] [i_0])));
                            }
                        }
                    }
                    var_23 = (max(((-(((arr_24 [i_0] [i_4] [3] [11] [i_0] [11] [i_5]) - (arr_23 [10] [2] [i_0] [0] [i_5] [i_5]))))), 4262289160837900504));
                }
            }
        }
    }
    #pragma endscop
}
