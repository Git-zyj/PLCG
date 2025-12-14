/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 = 16012355880338508896;
                    arr_8 [i_0] [i_1] [i_2] [i_1] = min((~var_13), (min(var_13, 17847832561649287203)));
                    var_18 = (arr_2 [i_1]);
                }
            }
        }
    }
    var_19 = (min(var_16, (~4242483997)));
    var_20 = 1;
    #pragma endscop
}
