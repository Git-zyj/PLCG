/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, (((!(var_9 == var_17))))));
                    arr_10 [i_0] [14] [0] [i_2] = (((((arr_3 [i_0] [i_2]) ? (arr_3 [i_2] [i_1]) : (arr_3 [i_0] [i_2]))) | (arr_3 [i_1] [1])));
                }
            }
        }
    }
    var_19 -= var_11;
    #pragma endscop
}
