/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_1] [i_0] = (((((((4522330391164806517 ? 3759111602398038852 : var_1))) ? (arr_3 [i_0]) : (arr_6 [i_0]))) - var_11));
                    var_15 *= 7430252561892587597;
                }
            }
        }
    }
    var_16 |= min(((((10132829085429582 || 1) ? var_2 : -7430252561892587598))), ((min(var_2, 5245751988963538935))));
    #pragma endscop
}
