/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_10 [9] [i_0] [i_1] [i_0] = ((((min(8191, (arr_9 [i_0])))) % (((arr_9 [i_0]) ? (arr_9 [i_0]) : (arr_9 [i_0])))));
                    arr_11 [i_0] [i_1] [i_1] [i_0] = 24732;
                    arr_12 [i_0] [i_0] [i_1] [i_2] = (arr_9 [i_0]);
                    var_10 = (min(var_10, (((-8191 ? (-9223372036854775807 - 1) : (((((((1 ? 37809 : (arr_3 [i_2])))) || 1)))))))));
                }
            }
        }
    }
    var_11 = var_6;
    var_12 = var_0;
    #pragma endscop
}
