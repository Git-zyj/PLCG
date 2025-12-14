/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((((var_5 ? var_1 : var_9))) ^ ((var_1 ? 140737479966720 : 14326))))) ? 243 : var_5));
    var_13 = (((((~((1 ? var_8 : 123))))) ? var_9 : 1));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 = var_9;
                    var_15 = 43235;
                    var_16 = (min(var_16, (((~((-var_9 ? var_11 : (arr_5 [i_0 - 3] [1] [i_0]))))))));
                }
            }
        }
    }
    #pragma endscop
}
