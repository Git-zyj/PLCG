/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((max(((((var_0 ? var_6 : var_6)))), 0)))));
    var_11 = (max(var_11, (((((!(((17 ? var_1 : var_9))))))))));

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, (((((max(var_8, (arr_3 [i_0 + 1])))) ? (arr_3 [i_0]) : var_6)))));
                    var_13 = (max(206137273, 80));
                }
            }
        }
        var_14 += (arr_3 [i_0 + 1]);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {
                        var_15 ^= ((((max((arr_1 [i_0 + 1]), 80))) && 1));
                        arr_16 [i_0] [i_3] [i_0] [i_3] = (~(2090002107 != 80));
                        var_16 = ((!(((arr_6 [i_3] [i_3]) == (max((arr_8 [i_0] [i_0]), 187))))));
                    }
                }
            }
        }
        arr_17 [i_0] = var_6;
    }
    #pragma endscop
}
