/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, (((((((var_12 ? var_12 : var_17)))) ? (arr_13 [2] [i_1]) : (arr_12 [i_1 + 2] [i_2 - 1] [i_3 - 3] [2] [i_4 + 1] [i_4 - 1]))))));
                                var_19 = ((1 ? (arr_10 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]) : var_15));
                                var_20 = (((arr_10 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]) ? (((arr_10 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]) ? 7 : 1)) : 1443155828));
                            }
                        }
                    }
                    var_21 = (max(var_21, (arr_7 [i_0] [i_0] [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_22 = var_0;
                                arr_18 [i_0] [i_1 - 3] [2] [i_5] [i_6] = (min(((var_0 ? 1443155828 : var_14)), (arr_7 [i_2 - 1] [i_2 - 1] [i_2] [i_2])));
                                var_23 = (min((((((min(2239649761, 0))) ? (max(1, var_5)) : 148))), (min(0, 0))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = ((var_13 ? ((var_13 ? var_15 : var_15)) : var_11));
    var_25 = ((var_12 ? ((((((156 ? var_6 : 31))) ? var_5 : ((var_5 ? 4177920 : var_9))))) : (max((((var_4 ? var_1 : var_14))), ((var_8 ? var_13 : 8719094042674919865))))));
    #pragma endscop
}
