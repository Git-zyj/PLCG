/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = var_16;
                var_20 = (max(var_20, (((((!((min(25636, (arr_1 [i_1])))))) && (11965464802745235203 == 6481279270964316425))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_21 = (~-8494454231842127987);
                            arr_11 [i_0] [i_1] [i_2] [i_1] = ((6481279270964316413 >> ((((((-13646 ? 928061336 : 928061336))) && 13646)))));
                            arr_12 [i_0] [i_0] [i_1] [i_1] [5] = ((3366905959 ^ (928061336 ^ 6481279270964316413)));
                        }
                    }
                }
            }
        }
    }
    var_22 = (!var_13);
    #pragma endscop
}
