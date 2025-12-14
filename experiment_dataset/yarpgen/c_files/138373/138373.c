/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = (arr_1 [i_0 + 2] [i_2]);
                    arr_9 [i_1] [i_2 - 1] [i_2] = ((941622786 >= (((((max(var_7, 231)))) * ((var_7 / (-9223372036854775807 - 1)))))));
                }
            }
        }
    }
    var_20 = (min((73 & var_1), ((min((max(var_1, var_0)), var_19)))));
    #pragma endscop
}
