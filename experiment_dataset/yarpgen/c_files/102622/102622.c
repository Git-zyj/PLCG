/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_17 *= (((arr_3 [1] [5]) + (((arr_4 [i_0] [i_1] [i_0 - 2]) ? (arr_2 [7] [12]) : (arr_2 [i_0] [i_0])))));
                arr_6 [i_0] = (~126);
                var_18 = (min((arr_1 [i_0 - 1] [i_0 - 1]), (((((255 ? 62354 : 0)) < 255)))));
            }
        }
    }
    var_19 = -1;
    var_20 = ((-((((46 ? var_11 : 0)) * ((max(var_9, var_10)))))));
    #pragma endscop
}
