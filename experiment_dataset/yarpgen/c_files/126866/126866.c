/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((5915300488759685755 <= var_17) && (!var_13))) || (~23040));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_10 [i_1 + 2] [i_1 + 1] [i_1 + 2] = max(var_17, var_18);

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_13 [i_0 + 1] [i_1] [i_1] [i_0 + 1] &= 4998833982062677471;
                        var_20 = ((!((min(1830016879, 4638)))));
                    }
                    arr_14 [i_2] [i_2] [i_2] [i_1] = (max(((508 ? 4 : 0)), ((-((-(arr_8 [i_0 - 1] [i_1] [i_2])))))));
                }
            }
        }
    }
    #pragma endscop
}
