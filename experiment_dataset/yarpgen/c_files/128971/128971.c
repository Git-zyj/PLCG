/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((((((1 & var_18) ^ 9223372036854775807)) ^ var_16)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 24;i_2 += 1)
                {
                    var_21 = (((~(24307 > var_4))));
                    arr_8 [1] [i_2] = ((!(arr_7 [i_0] [i_1] [i_0])));
                }
                arr_9 [0] = var_14;
                var_22 = (max((arr_7 [i_1] [i_0] [9]), 0));
            }
        }
    }
    var_23 += var_2;
    var_24 = var_8;
    #pragma endscop
}
