/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((((30 ? (max(4294967266, 50720)) : 240))), (((((var_17 ? var_8 : var_10))) ? 14418811128221160001 : 4203454127))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1 - 2] [i_2 + 1] [i_2 + 2] = (-((((min(var_17, var_16)) < var_9))));
                    var_19 = (max(var_19, (((~(min((arr_8 [i_0] [i_1] [6]), -var_12)))))));
                }
            }
        }
    }
    #pragma endscop
}
