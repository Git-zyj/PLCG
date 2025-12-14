/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = arr_0 [i_0];
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_14 [i_0] [i_0] [0] [0] = ((arr_3 [i_0] [i_0] [i_2 + 1]) ? ((13505999794238311122 ? 4940744279471240494 : 18446744073709551587)) : var_4);
                        arr_15 [i_0] [i_0] [i_2 - 2] [i_3 + 1] = (arr_7 [i_2] [i_2 - 2] [i_2 - 2] [i_2]);
                        var_14 = ((!((((arr_3 [i_0] [i_0] [i_2 - 2]) ? (arr_0 [8]) : var_9)))));
                        arr_16 [i_1] [i_1] = (arr_3 [i_2] [4] [i_2 - 1]);
                        var_15 ^= var_9;
                    }
                }
            }
        }
    }
    var_16 = ((var_3 ? var_5 : 1435164769));
    #pragma endscop
}
