/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 = ((-((min(1, 126)))));
                    arr_9 [i_1] [i_1] [i_2] [i_1] = ((-(((!((((arr_2 [i_0] [i_2]) ? var_0 : 939990546))))))));
                }
            }
        }
    }
    var_14 = var_6;
    #pragma endscop
}
