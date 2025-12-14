/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = 124;
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_20 = var_9;
                    var_21 = (max(var_21, 28384));
                }
            }
        }
        arr_8 [i_0] = (((~var_8) != 8988815365977068649));
    }
    var_22 = 15286;
    var_23 = (1 ? (!var_5) : -18446744073709551615);
    var_24 = (!-1);
    #pragma endscop
}
