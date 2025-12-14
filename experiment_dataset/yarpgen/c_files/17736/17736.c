/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 10;i_2 += 1)
                {
                    arr_9 [i_2 - 3] = 41417;
                    var_18 = (arr_0 [i_1]);
                }
                var_19 = var_7;
            }
        }
    }
    #pragma endscop
}
