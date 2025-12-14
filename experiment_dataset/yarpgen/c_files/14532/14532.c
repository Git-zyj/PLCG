/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(1, 14));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_1] = (min((arr_6 [i_2 - 2] [i_2 - 2] [i_2 + 1]), ((18446744073709551615 ? (arr_6 [16] [i_2 + 2] [i_2]) : 1638775816))));
                    arr_10 [11] [i_1] [i_1] = max((arr_6 [i_2] [i_2 + 2] [i_1]), (max(((((arr_3 [i_2] [i_1]) >> (var_1 - 63)))), (((arr_1 [i_0]) ? (arr_7 [0] [i_1]) : (arr_0 [i_1]))))));
                    arr_11 [18] |= (min(var_2, (max(-1, var_0))));
                }
            }
        }
    }
    var_15 = var_2;
    var_16 = var_13;
    #pragma endscop
}
