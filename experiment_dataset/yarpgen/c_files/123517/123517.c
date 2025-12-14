/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, 9));
    var_13 = ((var_9 ? var_7 : (max(((4192256 ? 4192252 : var_0)), ((var_7 ? 4290775064 : var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = (min(var_14, ((max((((((max(-41, (arr_1 [i_1])))) < 50))), 10489)))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_15 *= ((250 ? 1 : -34));

                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        var_16 = -41;
                        arr_9 [i_1] [i_1] = var_5;
                    }
                }
                var_17 &= (((((arr_5 [i_1 - 1]) != var_5)) ? 34 : (~22060)));
            }
        }
    }
    #pragma endscop
}
