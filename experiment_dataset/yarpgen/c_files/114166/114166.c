/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(((191 ^ (min(var_13, -6136)))), var_9));
    var_18 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 += (min(293005768, ((max(var_12, (((arr_1 [7]) & 59976)))))));
                    arr_11 [i_0] = 112757445;
                }
            }
        }
    }
    #pragma endscop
}
