/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 15104912909791435454;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 = var_10;
                    var_16 = ((!((max((arr_9 [i_2 - 3] [i_1] [i_0]), (arr_11 [i_2 - 3] [7] [i_1]))))));
                    arr_12 [i_1] [i_1] [i_1] [i_0] = var_8;
                }
            }
        }
    }
    var_17 ^= var_0;
    var_18 = (8661245781396335791 == 9785498292313215825);
    #pragma endscop
}
