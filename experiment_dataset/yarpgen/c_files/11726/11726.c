/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_0] [11] [i_2 - 3] = (18237152710714763994 ^ -82);
                    var_16 = (max(0, 209591362994787613));
                    arr_8 [i_0] = var_1;
                    arr_9 [2] [i_1] [i_1] [i_1] = (18237152710714763994 | (((max((arr_0 [i_0] [i_2]), (arr_1 [i_0]))) * 16430140509095878221)));
                }
            }
        }
    }
    var_17 |= 63;
    #pragma endscop
}
