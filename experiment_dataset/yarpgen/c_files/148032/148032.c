/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_13 *= arr_2 [i_1];
                arr_5 [i_0] [i_0] = (min(238, (arr_2 [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [1] [1] [i_0] = ((((((((arr_1 [i_1] [1]) >> (var_8 - 3224925554514134864)))) >= -8517053195335295506)) ? ((((((var_12 + (arr_1 [1] [1])))) ? (((arr_1 [i_3] [i_0]) & (arr_4 [1] [i_2] [i_3]))) : ((((arr_3 [i_3] [i_3] [1]) >= var_2)))))) : (min((arr_3 [9] [17] [10]), (arr_1 [i_2] [i_2])))));
                            var_14 = ((-18570 ? -340298992558666422 : -340298992558666436));
                        }
                    }
                }
                arr_13 [i_1] = ((min(((((arr_11 [i_0] [1] [i_0]) * var_1))), (arr_0 [i_1]))) / (((arr_3 [13] [i_0] [17]) / var_5)));
                var_15 = (((((((var_8 ? var_12 : (-2147483647 - 1)))) ? (min(340298992558666414, var_2)) : 12866))) ? ((((var_11 == (((arr_8 [1] [9] [i_0] [i_0]) & (arr_8 [i_0] [i_1] [i_0] [i_0]))))))) : ((((((arr_11 [i_0] [i_1] [13]) ? var_6 : (arr_6 [6])))) ? (((var_10 ? (arr_6 [i_1]) : 721363803))) : (arr_9 [i_0] [i_0]))));
            }
        }
    }
    var_16 = var_11;
    var_17 |= (min(((var_5 - (var_3 - var_2))), 0));
    var_18 = ((var_12 ? ((((!(((var_5 ? var_6 : var_8))))))) : (((((var_12 ? var_3 : var_5))) ? (min(var_0, var_12)) : (340298992558666414 / var_9)))));
    #pragma endscop
}
