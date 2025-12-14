/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((var_0 ? 137 : var_10)) * var_4))) ? (((-127 & (108 >> var_6)))) : var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [15] = ((((((max((arr_0 [7]), var_6))) ? ((min(var_3, 99))) : -var_10)) <= (arr_2 [i_1] [i_1])));
                arr_5 [i_1] = ((((((var_0 + 2147483647) >> (29658 - 29633))) << (((((var_5 + 9223372036854775807) >> (arr_3 [i_0] [i_0] [i_0]))) - 3063195002139810467)))));
            }
        }
    }
    #pragma endscop
}
