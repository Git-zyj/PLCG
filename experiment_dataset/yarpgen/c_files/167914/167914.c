/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = min((max((arr_2 [i_1 - 2] [i_0 + 1] [i_0]), (((arr_3 [i_0]) * (arr_1 [i_1 - 1]))))), (((arr_2 [i_0 - 2] [i_0] [i_1 - 1]) ? (arr_1 [1]) : ((~(arr_4 [i_0 + 1]))))));
                var_15 = var_10;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_16 = ((28403 ? 4294967275 : 2926449724));
                            arr_10 [i_0] [i_1] [i_2] [i_3] = ((arr_7 [i_0] [i_0] [i_2] [10]) <= (!25907));
                            var_17 ^= arr_8 [i_0] [i_0] [i_0] [i_1];

                            for (int i_4 = 0; i_4 < 19;i_4 += 1)
                            {
                                var_18 = (max((arr_12 [i_0 - 2] [i_1 + 1] [i_2] [i_1 + 1] [i_2]), (arr_3 [i_0])));
                                var_19 = (arr_9 [i_0] [i_1 - 2] [i_2] [i_3] [i_4]);
                                arr_14 [i_0 - 2] [i_1] [i_0 - 2] [i_2] [i_3] [i_3] [i_4] = ((min((arr_5 [i_1 - 2] [6] [i_0 - 2]), (arr_5 [i_1 + 1] [i_1 - 2] [i_0 - 1]))));
                            }
                            for (int i_5 = 0; i_5 < 19;i_5 += 1)
                            {
                                var_20 = (max(((((max(var_7, (arr_11 [i_5] [i_2] [i_0] [i_0])))) ? (min(var_10, (arr_0 [i_0]))) : var_0)), (arr_0 [i_0])));
                                arr_17 [i_0] = ((((min((arr_3 [i_2]), 2926449730))) && (((((((arr_8 [i_0] [i_2] [i_3] [i_5]) << (((arr_4 [i_3]) - 14171553308441855829))))) ? (arr_3 [i_1]) : (~var_8))))));
                                var_21 = (((arr_15 [2] [i_3] [i_2] [i_2] [i_0] [2] [i_0]) ? (arr_7 [i_0] [i_0 - 2] [i_0 - 2] [i_0]) : (arr_11 [i_0 - 2] [i_0 - 2] [i_1 - 2] [i_1 - 2])));
                                var_22 -= (arr_15 [i_1] [i_1 - 2] [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                }
                arr_18 [i_1] [i_1 - 1] [i_0] = (((((((var_10 + (arr_15 [i_0 + 1] [i_0 - 1] [i_0] [0] [0] [i_1] [i_0]))) % var_0))) ? (arr_1 [12]) : (((max((arr_5 [i_0 + 1] [i_1] [i_0]), (arr_0 [i_0]))) + var_6))));
            }
        }
    }
    var_23 = (min(var_23, (((((max(var_5, var_10))) || var_11)))));
    var_24 -= var_11;
    #pragma endscop
}
