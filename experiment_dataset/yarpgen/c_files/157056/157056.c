/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -75;
    var_21 &= var_15;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_22 = (min(var_22, var_2));
                                var_23 |= ((max(var_15, var_0)));
                                var_24 = (max(var_24, (!var_5)));
                            }
                        }
                    }
                    var_25 = ((((max(var_0, var_12))) >= ((min(2147483646, var_0)))));
                }
            }
        }
    }
    var_26 &= (max(var_10, ((min(1, 63960)))));
    var_27 = var_4;
    #pragma endscop
}
