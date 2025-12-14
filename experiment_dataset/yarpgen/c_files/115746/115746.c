/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, ((min((min((max(var_16, var_0)), (var_14 != 0))), (max((min(var_16, var_10)), var_3)))))));
                    var_18 = (max(var_18, ((min((min((min(8125927222367269793, 124)), (((21 >> (4018341830 - 4018341828)))))), var_10)))));
                }
            }
        }
    }
    var_19 = (min((((var_1 <= (min(-4514, -1953781015))))), ((var_2 >> (((min(var_15, var_3)) + 1606123525))))));
    var_20 ^= ((((((min(var_16, var_2))) >= (65529 | var_12)))) == (max((max(var_7, var_0)), var_7)));
    var_21 = (max((((((var_1 ? var_12 : var_1)) == (0 != var_4)))), (min(65535, 276625466))));
    #pragma endscop
}
