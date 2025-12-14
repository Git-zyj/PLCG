/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((max(var_2, -26496)))) - var_2));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_21 = (arr_2 [i_0] [i_0 + 1]);
                var_22 = ((((((arr_2 [i_1 + 1] [i_1 + 1]) ? ((((arr_0 [i_0 + 1] [i_1 + 1]) ? (arr_5 [i_0]) : (arr_5 [i_1])))) : (arr_1 [i_0 + 3])))) ? (((((90 ? 3 : 2954702139))) ^ (((arr_5 [i_0]) ? (arr_1 [i_0 + 1]) : (arr_0 [i_1] [i_0 - 1]))))) : (arr_1 [i_0 - 1])));
            }
        }
    }
    #pragma endscop
}
