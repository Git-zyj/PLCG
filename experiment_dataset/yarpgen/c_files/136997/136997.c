/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_17 ^= (((arr_5 [i_0] [i_1]) <= (arr_3 [i_0] [i_1])));
                var_18 += (((((arr_5 [i_0] [i_1]) ? (arr_3 [i_0] [i_0]) : (arr_2 [i_1])))) ? ((-8255202661874848687 ? (arr_4 [i_0] [i_1]) : var_0)) : (arr_4 [i_0] [i_0]));
            }
        }
    }
    var_19 = (!var_9);
    #pragma endscop
}
