/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= ((var_8 + (42239784 % 703393794)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {
                    {
                        var_12 = (min((max((min(7974, 0)), (arr_9 [i_2 + 1] [i_3 - 2] [i_2 - 4] [i_0]))), (((((min(var_5, (arr_1 [i_2] [i_2])))) && (arr_9 [i_0] [7] [i_0] [4]))))));
                        var_13 = -697403166;
                    }
                }
            }
        }
        var_14 = (((max(-13090, (max(var_1, 7962))))));
        arr_10 [i_0] [i_0] = (max((arr_4 [i_0] [i_0] [i_0]), -127));
        arr_11 [i_0] [i_0] = (((((arr_2 [i_0]) + 2147483647)) << (((((arr_0 [17]) + 13441)) - 7))));
        arr_12 [i_0] = 144;
    }
    #pragma endscop
}
