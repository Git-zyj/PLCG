/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_10 ^= var_4;
                var_11 = ((~((min((arr_4 [i_1 - 1] [i_1 - 1]), (arr_4 [i_0] [i_0]))))));
                arr_6 [i_1] [i_1 - 1] = (min((max(614002622454843978, var_2)), var_7));
            }
        }
    }
    var_12 *= (!(((var_9 ? var_6 : var_6))));
    var_13 = ((max(var_6, var_1)));
    #pragma endscop
}
