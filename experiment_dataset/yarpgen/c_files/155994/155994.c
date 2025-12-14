/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (max(18, ((min((var_7 > var_9), var_17)))));
    var_19 |= -18;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] &= var_8;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 *= var_0;
                    var_21 += -18;
                    arr_10 [i_0] [i_0] [i_0] = var_12;
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        var_22 = ((~(~-var_3)));

        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            arr_17 [i_3] [i_3] = max(var_12, (max((max(var_17, var_10)), (3902629123 <= var_8))));
            var_23 = (min(var_23, var_4));
            var_24 = 127;
        }
    }
    #pragma endscop
}
