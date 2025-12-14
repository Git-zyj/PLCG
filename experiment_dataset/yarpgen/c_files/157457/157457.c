/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 = (((((((-488 ? 1283275226 : 1)) - 3011692051))) ? (arr_1 [i_2]) : (((((arr_4 [1]) || (arr_2 [i_0] [i_0] [i_0]))) ? (arr_7 [i_0]) : ((-(arr_7 [i_2])))))));
                    arr_8 [3] [i_1] [i_2] = ((((((arr_5 [6]) ? (arr_5 [i_0]) : (arr_5 [i_1])))) ? ((((arr_5 [i_0]) && (arr_5 [i_1])))) : (!2313242791170863436)));
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((((min((((!(arr_1 [10])))), ((6546269741228090046 ? 7 : var_12))))) ? (((~(arr_5 [i_0])))) : (arr_0 [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_21 = (min(var_21, ((max((arr_15 [i_0]), var_10)))));
                                arr_16 [4] [9] [i_2] [i_3] [9] [i_4] = (min(11900474332481461558, -14712));
                                var_22 = (!-var_4);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            {
                arr_21 [i_6] = (((arr_19 [i_6]) ? (!0) : (((arr_18 [i_5]) ? (arr_19 [i_6]) : (~11900474332481461578)))));
                arr_22 [i_5] [i_5] [i_6] = (max(var_7, var_2));
                var_23 -= ((-(arr_19 [9])));
            }
        }
    }
    var_24 = ((1756696242 ? (!-155804346) : var_11));
    #pragma endscop
}
