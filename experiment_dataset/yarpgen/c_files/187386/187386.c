/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_14 ^ var_9);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 ^= min((arr_6 [i_2 + 2] [i_1 - 1] [i_1 + 1]), (((arr_6 [i_2 - 2] [i_1] [i_1 - 2]) ? 1356081144 : 3938023952)));
                    var_17 = (var_8 == var_2);
                    var_18 = max(-var_12, (((1356081118 == 340873185) - (min(var_4, var_13)))));
                }
            }
        }
    }
    var_19 = (((max(var_4, (min(var_8, var_10))))) ? (((var_5 ? 3954094101 : var_5))) : ((var_0 ? ((var_3 ? 2954686218 : var_12)) : (var_3 ^ 4294967295))));
    var_20 += var_4;
    #pragma endscop
}
