/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = max((1 - -20), ((((arr_0 [i_0]) < 1))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_14 ^= ((-924525972 ? ((((-4323 ? 1 : 1)) >> (((~1) + 33)))) : (arr_4 [i_1 + 2] [0] [i_2])));
                    var_15 = (min(var_15, (!1)));
                    var_16 = (max(var_16, 0));
                }
            }
        }
    }
    var_17 = (min((((((248 ? 1 : 17500744007124440997))) ? (var_12 * 8) : (((var_0 ? var_10 : 1))))), (((var_9 ? ((max(1, 1))) : (1 + 12755))))));
    #pragma endscop
}
