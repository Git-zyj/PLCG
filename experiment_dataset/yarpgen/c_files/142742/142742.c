/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_0] [3] [i_0] = (max(9, 1));

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        arr_11 [i_0] = (min(((((max((arr_4 [i_0] [i_0]), var_11))) | ((~(arr_9 [i_2] [i_1] [0] [i_3]))))), (~var_10)));
                        arr_12 [i_0] [i_0] [i_2] [i_0] = -429095755308771266;
                        arr_13 [i_0] [i_1] [i_2] [i_0] [i_3] = var_4;
                    }
                }
            }
        }
    }
    var_13 = ((var_7 ? var_0 : (((!-2) + (var_6 <= var_7)))));
    var_14 = (((min(18446744073709551610, 56049))));
    #pragma endscop
}
