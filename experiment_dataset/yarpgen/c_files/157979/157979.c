/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((~(arr_4 [i_0] [i_1 + 4] [i_0])));
                    arr_8 [i_2 - 1] [i_1] [i_0] [i_0] = (~(arr_5 [i_2 + 4] [i_2 + 4] [i_2] [i_1 + 2]));
                    arr_9 [i_0] = ((132 == (((max(22212, (arr_5 [i_2 + 4] [5] [9] [i_1 + 4])))))));
                    arr_10 [i_0] [i_0] [i_0] = (arr_1 [i_0]);
                }
            }
        }
    }
    var_18 = var_2;
    var_19 = 2147483647;
    var_20 = (min(((((!-1) && (var_5 && var_4)))), (min(((var_7 ? 83 : var_1)), var_10))));
    #pragma endscop
}
