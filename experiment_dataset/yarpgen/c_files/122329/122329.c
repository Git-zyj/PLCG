/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (2548 ? 101 : -1965236200);
    var_15 = (((((((min(-32083, 58))) + 2147483647)) >> (var_7 + 3996521919450040673))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_1] = (arr_7 [i_0 - 1] [2] [i_0 - 1] [i_2 - 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_14 [i_0 - 2] [i_1] = (min(var_13, (arr_0 [6] [i_1])));
                                var_16 = (min(var_16, ((min(((!(arr_4 [i_0] [i_1]))), ((((1 ? (arr_3 [i_2] [i_3]) : var_11)) == (var_9 / 48))))))));
                                var_17 = (arr_12 [i_1] [i_1] [i_2 - 3]);
                                var_18 = (min(var_18, var_7));
                            }
                        }
                    }
                    arr_15 [i_1] [0] [i_1] = var_8;
                    var_19 = 8;
                }
            }
        }
    }
    var_20 += ((1 - ((min(65525, 668518325)))));
    #pragma endscop
}
