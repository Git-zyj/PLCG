/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(((var_6 ? 7714781104739088178 : 9223372036854775807)), (~44373)));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min(var_4, 44373));
        arr_3 [i_0] [i_0] = var_3;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_11 *= (!var_1);
                    var_12 = var_2;
                    var_13 = (min(var_13, var_4));
                }
            }
        }
    }
    var_14 = ((min((min(var_4, var_9)), (var_7 - var_4))));
    #pragma endscop
}
