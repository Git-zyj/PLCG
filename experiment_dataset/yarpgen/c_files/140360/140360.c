/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((((((~var_4) ? 524287 : (~var_11))) & (((~(~524291)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_15 = (~var_4);
                    var_16 = (max((((arr_5 [20] [20] [16]) ? var_2 : ((~(arr_0 [i_0]))))), var_6));
                }
            }
        }
    }
    var_17 = (!var_11);
    #pragma endscop
}
