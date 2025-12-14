/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = -14604;

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_13 = max(((min((arr_5 [i_0] [8] [i_0 - 3]), 57))), ((-57 ? 14602 : 55)));
            arr_7 [i_0] [i_0] = ((((max(((max((arr_5 [i_0] [i_0] [i_1]), 14589))), ((34 ? (arr_0 [i_0] [i_1]) : var_9))))) ? (((min((arr_5 [i_0 - 3] [i_0] [i_0 + 2]), (arr_5 [i_0 - 1] [i_0] [i_0 - 1]))))) : (min(53, (max(-1, 0))))));

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                var_14 -= (min(-55, -1));
                var_15 = -56;
            }
        }
    }
    var_16 = var_5;
    #pragma endscop
}
