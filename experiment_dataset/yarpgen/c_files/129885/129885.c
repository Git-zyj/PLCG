/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                var_20 = (min((max(((min(0, var_16))), -var_7)), (arr_3 [i_1 + 3] [i_1] [i_1])));
                arr_5 [i_1] = (arr_1 [i_0]);
                var_21 = 127;
            }
        }
    }
    var_22 &= var_11;
    #pragma endscop
}
