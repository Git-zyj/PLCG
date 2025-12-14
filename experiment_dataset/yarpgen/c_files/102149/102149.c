/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= ((((var_5 ? (var_9 / 5130446977583673085) : -9223372036854775805)) >> (min((9223372036854775805 && var_0), (min(var_10, 3638854960762166411))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, (min(((-(arr_8 [i_1 + 1] [i_1 - 1] [i_1 - 2]))), var_10))));
                    var_14 -= (max((max(9223372036854775804, -9223372036854775805)), (((arr_4 [i_1]) ? (max(var_6, 53622)) : 9223372036854775793))));
                }
            }
        }
    }
    #pragma endscop
}
