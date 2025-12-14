/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_14 = (arr_1 [i_0] [i_0 + 3]);
        arr_2 [i_0] = (min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])));
    }

    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_15 = ((+(((arr_4 [i_1] [i_1]) ? var_6 : (((arr_6 [i_1]) ? -29708 : (arr_1 [i_1] [i_1])))))));
        var_16 = (arr_0 [i_1]);
        arr_7 [i_1] [11] = (((~(((arr_3 [i_1]) ? 1 : (arr_3 [i_1]))))));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_17 = (min(var_17, ((max(var_5, (((((4652430214259992434 ? (arr_11 [14] [6] [i_1]) : 4652430214259992447))) ? (((arr_10 [13] [i_2 - 2] [i_4]) ? 4652430214259992434 : (arr_0 [6]))) : (((max(192, (arr_0 [i_2]))))))))))));
                        var_18 = min((max((arr_13 [i_2] [i_2] [i_3] [i_2]), var_2)), (arr_10 [i_1] [15] [15]));
                        var_19 += 13794313859449559177;
                    }
                }
            }
        }
        var_20 -= (((~13794313859449559169) ^ (((min(-59, var_13))))));
    }
    var_21 = var_12;
    var_22 = (min(var_22, ((min(58, (32767 ^ 1))))));
    var_23 -= 1;
    #pragma endscop
}
