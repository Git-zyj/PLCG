/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_18;
    var_20 -= (min((((((min(var_10, var_5))) << (var_16 && var_15)))), var_2));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_21 = -var_13;
                        var_22 *= 0;
                        arr_11 [i_0] [14] |= var_16;
                        var_23 = 4294967295;
                        arr_12 [i_3] [i_3] [i_0] [i_0] [i_1] [i_0] = (((min(var_5, (var_11 % 13))) != (max(4294967282, 13))));
                    }
                    var_24 = (min((!var_17), (min(((min((arr_4 [6] [i_1]), var_5))), var_5))));
                }
            }
        }
    }
    var_25 = (min(var_25, (var_9 || var_17)));
    #pragma endscop
}
