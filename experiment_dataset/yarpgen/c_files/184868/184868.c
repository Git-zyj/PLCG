/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (max((max((arr_1 [i_1 + 1]), (arr_1 [i_1 - 1]))), (1 != -1211481409)));
                arr_5 [i_0] [i_0] = 3531314620;
                arr_6 [i_1 - 2] [i_0] = -1;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    arr_16 [i_3] = ((((!(arr_1 [i_2 + 1])))));
                    arr_17 [i_3] [i_3] [i_2] = ((~(max(4267139161, (arr_13 [i_2 - 2] [i_2 - 2] [i_3])))));
                }
            }
        }
    }
    #pragma endscop
}
