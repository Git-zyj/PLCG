/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [4] [i_0] = (min((arr_4 [i_0]), var_2));
                arr_7 [i_0] = (((arr_2 [i_0] [i_0]) * (arr_2 [i_0] [i_1])));
                arr_8 [i_0] = 3710481059;
                arr_9 [i_1] [i_1] [i_1] = (((((((arr_0 [i_0] [12]) ? 3710481056 : 3529)))) - ((-(max(851404934, (arr_4 [i_0])))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    var_14 |= arr_16 [i_3 + 1] [i_2] [13];
                    arr_17 [i_2] [i_3] [i_4] = (max(((((max(65535, (arr_16 [i_2] [i_2] [i_2])))) ? var_11 : (arr_16 [i_2] [i_2] [i_2]))), ((16237 ? 224 : 49306))));
                }
            }
        }
    }
    #pragma endscop
}
