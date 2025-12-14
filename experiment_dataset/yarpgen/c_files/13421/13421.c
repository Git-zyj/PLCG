/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_18 = (min(var_18, (((71 ? 46684 : 3417354210022001644)))));
        var_19 = 18015705688875788143;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_10 [i_0 + 3] [i_1] [i_2] [i_2] [4] [i_3] = arr_3 [7] [9];
                        arr_11 [4] [i_1] [i_1] [13] [0] [10] = (((arr_3 [i_1] [i_3]) ? (arr_2 [i_0]) : 46671));
                        arr_12 [i_0] [i_1] [7] [i_3] = ((-224 ? (((!(arr_5 [i_0 + 1])))) : (((arr_7 [i_0 + 3] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1]) ? (arr_5 [i_0 - 1]) : (arr_5 [i_0 + 1])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
