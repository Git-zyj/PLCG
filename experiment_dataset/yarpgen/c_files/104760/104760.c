/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = 11;
        arr_3 [14] [9] = ((26333 ? 9 : 8));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_16 *= (((max(var_4, var_0)) << ((((-(arr_1 [i_0]))) + 5224638544493920752))));
                    var_17 = (max(var_17, (~var_2)));
                }
            }
        }
    }
    #pragma endscop
}
