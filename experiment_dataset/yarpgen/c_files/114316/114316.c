/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 = (max((((((3183765673 ? 16624 : 3183765671)) > (arr_2 [i_1] [i_1] [i_2])))), (max(1111201640, 20))));
                    var_20 |= (max(((-(arr_4 [i_2]))), (((!(~-17585))))));
                    arr_8 [i_0] [i_0] [i_0] [10] = var_15;
                    arr_9 [i_0] [i_1] [i_1] [i_2] = (arr_2 [i_0] [1] [i_2]);
                    arr_10 [i_0] [i_1] [i_0] [i_1] = var_4;
                }
            }
        }
    }
    var_21 = var_2;
    var_22 = ((1 << (1053537030 - 1053537013)));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {
            {
                var_23 -= (max(17576, (((!(arr_14 [5] [6] [i_3]))))));
                arr_16 [i_3] = (max(0, 1048572));
                var_24 = (((max(((((arr_14 [i_3] [19] [i_3]) <= -32749))), var_18)) >= 27));
                arr_17 [i_3] [i_4] [i_3] = (arr_11 [i_4 + 2]);
            }
        }
    }
    #pragma endscop
}
