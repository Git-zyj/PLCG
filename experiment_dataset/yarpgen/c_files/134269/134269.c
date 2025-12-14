/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_10));
    var_15 = var_3;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = (min(var_16, (((+((((((arr_1 [i_0]) & (arr_0 [i_0]))) != (arr_1 [i_0])))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_17 += (((min(1, 1)) ? (min(1, ((811475204 ? 4083638300 : (arr_4 [11] [11] [i_3]))))) : ((((arr_9 [i_0] [i_1] [i_2] [i_3]) | 174)))));
                        var_18 = ((+((((((arr_9 [i_0] [i_0] [i_2] [i_3]) / (arr_6 [i_0] [i_1] [i_3]))) != (((~(arr_9 [i_0] [i_3] [i_2] [i_3])))))))));
                        var_19 = (3483492092 - 1);
                        var_20 = (max(((!((((arr_5 [0] [i_2] [i_3]) | 2104))))), (!-894286817177752976)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
