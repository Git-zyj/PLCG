/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_8 [i_0] = -3265;

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_17 = (min(var_17, (((!((((65535 ? 3265 : 15104)))))))));
                    var_18 = arr_10 [i_1] [i_0];
                }
                arr_12 [i_0] = var_15;
            }
        }
    }
    var_19 *= ((var_8 ? (var_12 - var_1) : ((max(var_8, var_14)))));
    #pragma endscop
}
