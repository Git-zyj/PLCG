/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [0] [i_1] = (min((arr_5 [i_1] [i_0]), (var_13 > var_2)));
                var_16 = ((((268304384 ? 10644 : (min((arr_4 [i_0] [i_1] [i_0]), 2147418112))))) ? ((((arr_2 [i_1]) <= var_5))) : (((var_6 != (var_3 == var_4)))));
            }
        }
    }
    var_17 = ((var_15 ? var_6 : ((var_5 ? ((min(27926, 2019828522))) : (var_2 ^ var_7)))));
    var_18 = ((max((min(93, var_15), var_15))));
    #pragma endscop
}
