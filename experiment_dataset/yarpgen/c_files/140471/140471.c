/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = (8170657804416243094 & var_4);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_22 = ((-1254721787 ? (!var_10) : var_18));
                    var_23 = 1;
                    var_24 = ((-((10276086269293308511 ? 11242 : -61))));
                    var_25 = 1;
                }
            }
        }
    }
    #pragma endscop
}
