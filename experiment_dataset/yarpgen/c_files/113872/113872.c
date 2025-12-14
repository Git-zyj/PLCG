/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (2135543124 / 2135543131);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_1] [1] [i_1] = 0;
                var_12 -= 2159424193;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    var_13 |= 2135543124;
                    var_14 -= ((-(min(((max((arr_8 [11] [i_3]), (arr_9 [i_2] [i_3] [10])))), (var_0 | 2135543104)))));
                }
            }
        }
    }
    #pragma endscop
}
