/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_16 += 2002090735;
                arr_5 [10] &= var_7;
                var_17 = ((((arr_4 [i_0] [i_1] [i_1]) ? (arr_4 [i_0] [i_1] [i_1]) : (arr_4 [i_0] [i_0] [i_1]))));
            }
        }
    }
    var_18 = var_11;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                arr_14 [i_2] [i_2] [i_2] = (((max((arr_13 [i_2] [i_2] [i_2]), (arr_9 [i_2]))) >= var_10));
                arr_15 [i_2] [i_3] |= (max(16071, 36659));
            }
        }
    }
    #pragma endscop
}
