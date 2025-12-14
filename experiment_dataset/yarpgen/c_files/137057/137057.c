/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_10 = (min(1073709056, 46));
                            var_11 = var_6;
                            var_12 = (max(((((195 ? 867794413176773976 : 15360)) >> (((arr_11 [i_3] [i_1] [i_2] [i_3] [3] [i_3]) - 16174025656355330937)))), (arr_10 [i_1 - 2] [i_1])));
                        }
                    }
                }
                var_13 ^= (-7271398566171856997 >= 15360);
            }
        }
    }
    var_14 = (~(min(var_9, 17506357395893489307)));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_15 = (max((max((arr_16 [i_4] [i_4] [i_4]), (arr_16 [i_6] [i_5] [i_4]))), ((3043239463 ? 0 : 2770))));
                    var_16 = var_0;
                    arr_20 [10] = ((~(~262016)));
                }
            }
        }
    }
    var_17 = (max(var_9, 203));
    #pragma endscop
}
