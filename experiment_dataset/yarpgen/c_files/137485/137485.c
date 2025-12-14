/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_6 ? (((var_14 ? var_10 : ((max(var_0, var_1)))))) : ((((min(var_8, 17))) ? (max(34, 4294967249)) : (~var_9)))));
    var_16 = (((((~4294967285) && -1929803443))) != var_11);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 6;i_2 += 1)
            {
                {
                    arr_8 [i_0] [4] [i_2] &= (((min(4294967280, 9)) <= ((((20 > (arr_5 [i_0 - 1])))))));
                    arr_9 [i_0] [i_1] [i_1] = 31;
                }
            }
        }
    }
    #pragma endscop
}
