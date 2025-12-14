/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= (-var_3 < (!var_11));
    var_18 = -var_15;
    var_19 ^= (-127 - 1);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_2] [i_1] [13] = (max(((-150432361297407746 ^ (arr_1 [i_0 + 3] [i_1 - 2]))), (max(var_1, 150432361297407764))));
                    var_20 += var_1;
                }
            }
        }
    }
    var_21 &= ((((max((max(var_16, var_12)), (max(-150432361297407746, 1))))) ? (-5590850467284090832 && var_14) : 1));
    #pragma endscop
}
