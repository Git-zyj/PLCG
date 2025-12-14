/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = ((-((var_4 ? var_9 : 32))));
                var_18 = (max(var_18, (max((~634002020), ((var_14 ? (arr_2 [i_1 - 2] [i_1 - 1]) : (arr_2 [i_1 - 2] [i_1 - 1])))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_16 [11] [6] [11] [i_5] [12] [i_5] [i_6] = (max((min((arr_13 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_5]), 634002020)), (((~(arr_12 [i_2 + 1] [i_2 - 1] [i_2 + 2] [i_2 + 1] [i_2 + 2] [i_2 + 1]))))));
                                arr_17 [i_2] [i_2] [1] [1] [i_5] = ((((max(-634002021, 634002020))) ? (min((max(var_12, 2482547502474876820)), var_0)) : (((((24001 ? 7 : -6401127986686274350))) ? -7990540349624070531 : (((-634002021 ? 3578148938 : -634002021)))))));
                                var_19 = (((!var_13) ? ((~(arr_15 [i_3 + 3] [i_2 - 1] [i_4]))) : (((arr_15 [i_3 + 1] [i_2 + 2] [i_2 + 2]) ? var_9 : var_13))));
                                var_20 = ((4142 ? (min(7990540349624070510, -168332393)) : 716818358));
                                arr_18 [i_2] [i_2] [2] [i_2] [i_5] [i_2] = (min(((max(2021, -2034))), (min(var_1, (arr_15 [i_2 - 1] [i_6 + 3] [i_3 + 2])))));
                            }
                        }
                    }
                    arr_19 [i_2] [5] |= ((!((max(((1328259137 ? 40123 : (arr_5 [i_2] [i_2]))), (~0))))));
                    var_21 = (min((((var_10 ? ((min((arr_11 [10] [i_3 - 2]), -1362478361))) : ((~(arr_10 [i_3])))))), ((1 ? var_1 : var_10))));
                    var_22 = (max((min((arr_13 [i_2] [i_3 - 3] [i_4] [18]), var_7)), ((min(330767916, 31041)))));
                    var_23 = (max(6878281345524697535, -634002014));
                }
            }
        }
    }
    var_24 = (min((!var_8), (((!var_10) ? (min(var_5, 140737488355327)) : ((min(0, 237219975)))))));
    var_25 = var_1;
    #pragma endscop
}
