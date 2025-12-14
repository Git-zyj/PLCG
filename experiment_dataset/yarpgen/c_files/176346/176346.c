/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~var_4);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = ((((max(((max(var_2, 5841))), 3843354264))) ? var_2 : 18446744073709551604));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_13 [17] [i_0 + 1] [i_0] = ((((((((860973591 / (arr_1 [i_0])))) ? -var_7 : ((min((arr_2 [i_0]), 155)))))) ? 20541 : ((((min(31903, 15725))) ? (max(-4293, var_1)) : (arr_1 [i_0])))));
                                var_19 = (arr_0 [i_0 - 2] [i_1 + 1]);
                            }
                        }
                    }
                    arr_14 [7] [i_0] = 162;
                    arr_15 [i_0] [i_0] = -var_10;
                }
            }
        }
    }
    #pragma endscop
}
