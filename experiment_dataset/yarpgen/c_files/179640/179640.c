/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (0 & 240)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, (min(((((((6 >= (arr_7 [i_0] [9] [i_0] [i_2]))))) * ((var_5 ? var_7 : (arr_4 [15] [i_1]))))), (((-(~10))))))));
                    arr_9 [i_0] = 127;
                }
            }
        }
    }
    var_14 |= (min(0, 3772741354));
    var_15 = (min(var_15, var_5));
    #pragma endscop
}
