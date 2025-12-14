/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((1 != -47) ? var_14 : (max(var_4, var_8))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = (((((((var_13 >= (arr_6 [0])))) / (1 + -21)))) ? (arr_4 [i_0] [i_1 + 2] [i_2]) : ((((((arr_0 [i_0]) ? 2500937716372206838 : (arr_5 [i_2])))) ? 9930 : 252)));
                    var_21 = (arr_6 [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_22 = (((max((arr_11 [i_2] [0]), (arr_11 [i_0] [i_1 + 2]))) >> (((((arr_2 [i_1] [i_1]) ? (~591874440) : ((((arr_12 [i_2] [i_2] [i_2] [i_3]) && var_11))))) + 591874455))));
                                arr_15 [i_2] [i_1 + 1] [i_2] [i_3] = ((var_13 >> (((((arr_4 [i_1 + 2] [i_3 + 1] [i_3 - 2]) ? var_18 : (arr_4 [i_1 + 1] [i_3 + 1] [i_3 - 2]))) - 15580772066371335771))));
                                arr_16 [i_0] [i_1] [i_2] [i_2] [i_3] [i_1] [i_0] = (min((max(0, ((1 - (arr_11 [i_0] [i_0]))))), (arr_5 [i_0])));
                                arr_17 [i_0] [i_1] [i_3] [i_4] = (max((((arr_6 [i_3 + 1]) - ((0 ? 230254940 : (arr_6 [i_2]))))), (((arr_14 [i_3 - 1] [i_3 - 1] [i_3] [i_3 + 1] [i_3]) ? 20075 : (arr_14 [i_3 - 1] [i_3] [i_3] [i_3 + 1] [2])))));
                            }
                        }
                    }
                    var_23 = (max(((min(var_9, (min(var_17, 2153657044))))), (((arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? (arr_4 [i_1 + 1] [i_1 - 1] [i_1 + 2]) : (arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
                }
            }
        }
    }
    var_24 = var_0;
    var_25 = ((((((((min(12582912, var_1))) ? (~var_10) : ((2181431069507584 << (230254940 - 230254932))))) + 9223372036854775807)) << ((((((((min(var_0, var_9))) + 2147483647)) << (var_2 - 1))) - 2147473898))));
    #pragma endscop
}
