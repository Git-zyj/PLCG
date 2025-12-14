/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (+-96);
    var_20 &= (~((-((min(var_13, var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = ((-(arr_2 [i_0 - 1] [i_0 + 1])));
                arr_5 [0] [i_1] [i_1] = (arr_2 [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
