/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((2703258414 * 6115) ? ((var_9 & ((var_8 ? var_6 : var_10)))) : ((var_7 ? var_17 : (min(8534, var_6)))));
    var_20 = -var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_21 = ((((((var_11 & (arr_1 [i_0] [i_0]))) * ((min((arr_4 [i_0] [i_1]), var_5))))) & var_17));
                var_22 = (max(var_22, ((min(var_18, ((min((min(var_17, (arr_4 [i_0] [10]))), (min((arr_4 [0] [0]), (arr_0 [i_1])))))))))));
                var_23 = (min(((((arr_4 [i_0] [i_1]) >> (var_17 - 2672249023)))), ((var_18 - (arr_4 [i_0] [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [i_1] [1] [i_3] [i_1] = (((max((min((arr_2 [i_3] [i_3] [i_1]), var_6)), var_14)) * (min(var_13, var_13))));
                            var_24 -= (!var_5);
                            arr_12 [i_1] = (((arr_10 [i_1]) ? (min((arr_0 [i_1]), ((var_15 ^ (arr_6 [i_3] [i_3] [i_3] [i_3]))))) : ((~(arr_0 [i_0])))));
                            arr_13 [i_1] [i_1] = ((((((min((arr_4 [i_1] [i_1]), 32759))) ? ((var_15 * (arr_2 [i_0] [i_1] [i_1]))) : (((var_5 & (arr_6 [i_3] [i_2] [3] [1])))))) != ((((arr_6 [i_0] [i_0] [i_0] [0]) | ((var_1 ? (arr_6 [i_0] [i_0] [i_2] [i_3]) : -1746)))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
