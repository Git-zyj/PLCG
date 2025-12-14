/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_2 - (((var_17 ? var_5 : -55960)))));
    var_20 = (min(var_20, 16));
    var_21 = (1 <= 18446744073709551615);

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] |= (222 | 26);
        var_22 = (min(var_22, (((0 <= ((max((arr_0 [i_0 - 1]), (arr_1 [i_0 + 2] [i_0 - 1])))))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_23 = (arr_5 [i_0] [i_0] [i_0] [i_0]);
                    var_24 = ((((max(var_7, (arr_8 [i_1 + 1] [i_1] [i_1 - 3])))) != (arr_8 [i_1 - 3] [i_1] [i_1 - 2])));
                    var_25 |= ((!(((-1 | (1311863534 == 16))))));
                    arr_9 [i_1] [i_1] [i_2] [i_2] = arr_4 [i_0];
                }
            }
        }
        var_26 ^= (((((max((arr_7 [i_0]), 2983103762)) & (max(255, (arr_7 [i_0]))))) <= 9099186397707065141));
        var_27 = (((arr_3 [i_0 + 3] [i_0]) <= 2983103762));
    }
    #pragma endscop
}
