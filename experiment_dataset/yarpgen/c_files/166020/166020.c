/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = 106;
                var_19 -= (((arr_6 [i_0] [i_0]) ? 106 : ((((106 / -1092146623) != (((arr_5 [i_0]) ? -1 : var_15)))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    var_20 = var_15;
                    var_21 = (arr_8 [i_2]);
                    var_22 = var_8;
                    var_23 = (min(var_23, var_15));
                }
            }
        }
    }
    #pragma endscop
}
