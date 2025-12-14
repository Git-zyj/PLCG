/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        var_11 = var_9;
        var_12 = (max(var_12, ((max(1, 1)))));
        arr_3 [i_0] [21] = max(var_8, (arr_1 [i_0 - 1] [i_0]));
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1] = (min(((min(var_7, 1761994472))), (((var_8 ? var_8 : (max(var_8, (arr_1 [1] [16]))))))));
        var_13 = (max((max((arr_2 [i_1 + 2]), (-9223372036854775807 - 1))), 10405410638030172766));
        var_14 = (max(var_14, 1761994472));
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                var_15 *= ((((((min(-1761994473, var_4))) || var_0)) ? ((((arr_10 [i_2 - 1] [i_2 - 1] [i_2 + 1]) ? ((min((-2147483647 - 1), var_2))) : 1))) : var_4));
                arr_12 [12] [i_2 + 3] [i_2 + 3] |= ((1059292953 ? 1 : 1059292953));
            }
        }
    }
    var_16 = var_0;
    var_17 = var_4;
    #pragma endscop
}
