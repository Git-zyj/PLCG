/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_10 [i_0] [i_0] [i_2] = var_3;
                    arr_11 [i_0] [i_1] [i_0] = var_1;
                    var_16 = var_14;
                }
                var_17 = (min(var_17, var_8));
                arr_12 [i_0] [i_0] = ((8191 ? -3 : 18650));
            }
        }
    }
    #pragma endscop
}
