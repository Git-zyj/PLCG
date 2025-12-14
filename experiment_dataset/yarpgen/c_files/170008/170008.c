/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((~var_3), (max(var_17, ((max(var_4, var_14)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = var_16;
                var_20 = ((((((arr_0 [i_0]) ? var_11 : (arr_0 [i_0])))) ? (arr_1 [i_0] [i_1]) : (((!(arr_2 [i_0]))))));

                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    var_21 = ((var_8 ? ((var_6 / (((arr_5 [i_0] [i_1] [i_0]) / (arr_3 [i_0]))))) : var_7));
                    arr_7 [i_0] [14] [i_0] = (arr_3 [i_0]);
                    var_22 = ((-var_8 < (arr_5 [i_2 + 1] [i_2] [i_2 + 2])));
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    var_23 = (min(var_23, (((-var_15 ? (arr_6 [i_3]) : var_9)))));
                    var_24 = (min(var_24, (((((max(var_0, var_8))) ? -var_4 : (((var_3 ? var_0 : var_13))))))));
                }
                var_25 = (((arr_8 [3] [12] [6]) ? (-var_16 + var_15) : ((((arr_2 [i_0]) ? var_13 : (arr_8 [i_0] [i_0] [i_0]))))));
                var_26 = (min(var_26, ((((((arr_1 [10] [10]) ? (max((arr_9 [10] [10]), var_15)) : var_0)) < ((((((arr_2 [2]) ? (arr_5 [i_0] [i_1] [i_0]) : (arr_1 [12] [i_1])))) ? ((var_5 ? var_16 : var_13)) : var_3)))))));
            }
        }
    }
    var_27 = ((var_10 ? (((((((var_6 ? var_1 : var_5))) && var_13)))) : var_17));
    #pragma endscop
}
