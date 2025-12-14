/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_12 = (!3261);
                                arr_17 [i_0] [i_1] [i_1] [i_3] [i_0] = ((!(((var_10 ? 65531 : (arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 1]))))));
                                arr_18 [1] [i_1] [1] [1] [i_0] [i_1] [i_1] = var_5;
                            }
                        }
                    }
                    var_13 = (max(var_13, (((((((arr_12 [i_0] [i_0] [1] [i_0]) << 4))) ? ((-64 ? 10770 : 54765)) : (((57344 > (arr_1 [i_1] [i_1])))))))));
                    var_14 ^= (((arr_14 [i_0 + 1] [i_1] [i_2 - 2] [i_1]) == 65531));
                    var_15 = (min(var_15, 4));
                }
                var_16 = 14;
                arr_19 [i_0] = (max((min((((arr_13 [i_0] [i_1] [i_0]) ? var_3 : var_11)), ((((arr_7 [i_0] [i_0] [i_1] [i_1]) / var_7))))), ((((arr_8 [i_0] [i_1] [i_0 - 1] [i_0]) ^ (arr_15 [i_1] [i_1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]))))));
                var_17 = (((((((arr_9 [i_1] [i_0] [i_0]) != 65526)) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : ((var_0 ? (arr_5 [i_0] [i_0]) : (arr_9 [i_1] [i_0] [i_0])))))) ? (((((min(var_1, 102))) <= -1))) : 102);
            }
        }
    }
    var_18 = var_1;
    #pragma endscop
}
