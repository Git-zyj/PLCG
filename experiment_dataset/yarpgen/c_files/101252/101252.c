/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((((min((35 << var_3), (var_14 ^ 0)))) ? var_15 : ((var_4 ? ((max(var_15, var_1))) : -var_9)))))));
    var_17 = ((var_13 + ((((var_7 ? var_4 : 8)) | var_15))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 = var_5;
                    var_19 = (min(var_19, (arr_0 [i_1])));
                    arr_7 [i_2] [i_1] = (arr_4 [i_0] [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_20 = ((((((min(0, (arr_1 [i_0]))) ? 10009 : (min(16248045810475446275, 0))))) ? (((((var_12 ? -95 : 21629))) ? -2147483641 : (~2198698263234105340))) : (((((arr_10 [i_2] [i_4 - 1] [i_4] [i_4] [i_4 + 1] [i_4]) && ((max(1, 56208)))))))));
                                var_21 = (min(var_21, var_3));
                                var_22 = ((min((arr_0 [i_0]), (arr_12 [i_0]))));
                                var_23 = (max(var_2, 1));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = var_2;
    #pragma endscop
}
