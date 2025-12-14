/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0 - 1] [i_1] [i_0] [i_2] = 0;
                    arr_10 [i_0] [i_1 - 1] [i_0] = (max(((((arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1]) + 1))), -2985779394616282139));
                    arr_11 [i_0] [i_2] [i_0] [i_0] = ((((min((!var_3), (arr_5 [i_0 - 1] [i_0] [i_0])))) ? 2518318484 : (arr_7 [i_0 - 1] [i_0 - 1])));
                }
            }
        }
    }
    var_17 = ((((var_5 + 2147483647) >> 0)));
    #pragma endscop
}
