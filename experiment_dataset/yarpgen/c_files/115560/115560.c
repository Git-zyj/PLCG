/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        arr_11 [7] [i_1] [i_1] [i_3] = 2177;

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            arr_14 [i_1] [i_1] [i_1] = (arr_7 [i_0 + 1] [i_1] [i_2 + 1] [i_3 + 1]);
                            arr_15 [i_0] [i_2 - 1] [i_1] = (arr_2 [i_0]);
                            var_14 = var_1;
                        }
                        for (int i_5 = 0; i_5 < 0;i_5 += 1)
                        {
                            var_15 = (max(var_15, (arr_5 [6])));
                            arr_18 [i_3 - 1] [i_1] = (max(-14148, 2179));
                        }
                    }
                    arr_19 [i_0] [i_0] [i_1] [i_2 - 1] = -9518;
                    var_16 += (max(243, ((((arr_13 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_2 + 1] [i_2 - 1]) && var_5)))));
                }
            }
        }
    }
    var_17 = (var_9 | var_3);
    var_18 = var_3;
    var_19 += 10591;
    var_20 = (min(var_20, ((min((((min(var_0, var_10)))), (min(((-1 ? 9524 : var_3)), var_1)))))));
    #pragma endscop
}
