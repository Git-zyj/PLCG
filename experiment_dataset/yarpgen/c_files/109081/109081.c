/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [9] [i_0] = (186 / -57);
                    arr_9 [i_0] [i_0] [6] [i_2] = ((((min(14400177777662768511, (-9223372036854775807 - 1)))) || (((max(var_10, 1))))));
                    arr_10 [i_0] [i_1] [i_0] = max(-1, 70);
                    arr_11 [i_0] = (min((min(14246, var_9)), ((((var_9 - 405757460) >= (min(3, 3889209839)))))));
                    var_14 = ((min(-6205, (-2147483647 - 1))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {
                        var_15 ^= ((((var_5 ? (min(15, 1028716480)) : (((var_0 ? 15 : 9772))))) | (var_3 & 1)));
                        var_16 *= (-32749 / -3512234576874778422);
                        arr_21 [i_0] [i_0] [i_0] = (!1);
                    }
                }
            }
        }
    }
    var_17 = var_12;
    var_18 = ((max(-2147483641, -8191)));
    var_19 = (49318 ? 9223372036854775807 : 4619177994716088514);
    #pragma endscop
}
