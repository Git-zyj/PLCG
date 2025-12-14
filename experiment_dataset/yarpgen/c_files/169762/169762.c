/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_19 &= var_14;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_20 = var_6;
                            arr_11 [i_0] [i_3 - 1] = (min((arr_10 [17] [i_1] [i_3 - 1] [i_3 - 1]), (!-18)));
                        }
                    }
                }
                arr_12 [i_0] = (min((((((21 ? (arr_2 [i_0]) : 238))) ? var_9 : (!var_6))), ((((236 ? var_1 : 238))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_18 [1] [i_1] [i_0] [i_5] = (min((arr_0 [i_1] [i_4]), var_16));
                            arr_19 [i_0] [i_0] = (max((((((arr_4 [i_0] [i_0]) ? 238 : (arr_9 [i_1] [4] [i_1]))) & var_15)), var_16));
                            var_21 |= var_17;
                            var_22 = (max(var_22, ((((((((var_4 ? (arr_16 [12] [i_5] [i_4] [i_5] [i_5] [i_5]) : (arr_13 [i_0] [12] [i_0])))) ? var_14 : -var_16)) << (((((max((arr_16 [i_0] [i_1] [i_1] [i_4] [2] [i_1]), (arr_7 [i_0] [3] [i_4] [3]))) ? -5627812724444499147 : (((arr_1 [i_4]) ? var_6 : var_1)))) - 216407244)))))));
                        }
                    }
                }
            }
        }
    }
    var_23 = var_17;
    #pragma endscop
}
