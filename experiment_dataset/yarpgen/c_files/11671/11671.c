/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [2] [8] [i_2] [i_2] &= ((((min((arr_5 [i_0] [i_1] [4] [i_1]), 15785))) ? (arr_5 [i_0] [6] [10] [i_0]) : ((((9189560180839427291 < (-9223372036854775807 - 1)))))));
                    var_11 = (((((var_6 << (((((-9223372036854775807 - 1) ? 274877906432 : 0)) - 274877906432))))) ? ((-9189560180839427306 ? -274877906433 : 227)) : ((((var_3 && var_6) + ((36028 >> (41210 - 41205))))))));
                    arr_10 [i_0] [i_0] [i_2] = (max(2730348728892114789, (((arr_0 [i_0]) ? 0 : (arr_0 [i_0])))));
                }
            }
        }
    }
    var_12 += ((((((var_4 ? var_1 : 227)) * (max(58149, var_7))))));
    #pragma endscop
}
