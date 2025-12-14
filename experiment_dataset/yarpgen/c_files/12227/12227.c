/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= 70;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = ((~((42085 ? ((~(arr_1 [i_1]))) : (!208)))));
                var_20 += (min((arr_0 [i_0] [i_0]), ((-(arr_0 [i_0] [i_1 - 1])))));
            }
        }
    }
    var_21 &= var_17;
    #pragma endscop
}
