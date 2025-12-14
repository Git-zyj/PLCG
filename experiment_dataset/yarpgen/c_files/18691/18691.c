/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~0);
    var_19 = (min(var_19, ((max(12251192460204796096, 12251192460204796072)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_20 = (arr_2 [i_2] [i_1] [i_0]);
                            arr_10 [i_3] [i_2] [i_1] [i_0] = ((((43 ? (((arr_9 [i_0] [i_0] [i_0]) ? (arr_3 [11] [11] [3]) : (arr_0 [i_2] [4]))) : (((~(arr_0 [7] [10])))))) | (arr_7 [i_0] [5] [i_0] [i_0])));
                        }
                    }
                }
                var_21 = min(8563476082879340271, 2270454459250827978);
            }
        }
    }
    var_22 = (!1952183660);
    #pragma endscop
}
