/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    var_18 = (min(var_18, var_5));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_8 [i_0 - 1] [i_0 - 1] [i_2] [i_2] = 2765197949743363786;
                            arr_9 [i_0] [i_0] [i_3] = (max((min(13902, 22397)), (496 <= -32768)));
                        }
                    }
                }
                var_19 ^= (((2633067429 <= 0) ? (arr_1 [i_0]) : ((((arr_1 [i_0]) >= (arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))));
                var_20 = ((-(((arr_3 [i_0 - 1] [i_0 - 1] [i_1]) ? (arr_4 [i_0] [i_0 - 1] [i_1] [i_1]) : (var_4 > 1)))));
            }
        }
    }
    #pragma endscop
}
