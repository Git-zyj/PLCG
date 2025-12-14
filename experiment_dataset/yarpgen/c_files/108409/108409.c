/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, (((!((min((arr_6 [i_0 - 2] [i_0] [i_2 - 1]), 2792787694))))))));
                    var_16 = (!8191);
                    arr_7 [i_2] [i_2] = 1580976168;
                    var_17 = 8191;
                }
            }
        }
    }
    var_18 = (var_2 + var_7);
    #pragma endscop
}
