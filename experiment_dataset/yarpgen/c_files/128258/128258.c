/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_17 = var_8;
                    var_18 += (max((((var_3 ? 6771 : ((((arr_2 [i_1] [i_1]) != (arr_3 [i_1] [i_0 - 3]))))))), (min((arr_2 [i_1] [i_1]), (((arr_2 [i_1] [i_1]) % 164))))));
                }
            }
        }
    }
    var_19 = (!var_14);
    var_20 = ((var_9 ? var_8 : -var_10));
    var_21 = var_7;
    #pragma endscop
}
