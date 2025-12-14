/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((15 >> (((min(var_7, -8619222471286156875)) + 8619222471286156898))))) ? 0 : (((max(-23358, 25196))))));
    var_16 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [4] [i_1] [16] &= 3773904052;

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_17 = (arr_3 [i_0 - 1]);
                        arr_11 [i_0] [i_2] [15] [0] = -23358;
                        var_18 = (i_2 % 2 == zero) ? ((((((arr_7 [i_0 - 2] [i_0 + 1]) ? (arr_6 [i_2] [i_0 + 1] [i_0] [i_0 - 1]) : (arr_7 [i_0 - 2] [i_0]))) >> (((arr_6 [i_2] [i_0] [i_0] [i_0 - 1]) - 46366))))) : ((((((arr_7 [i_0 - 2] [i_0 + 1]) ? (arr_6 [i_2] [i_0 + 1] [i_0] [i_0 - 1]) : (arr_7 [i_0 - 2] [i_0]))) >> (((((arr_6 [i_2] [i_0] [i_0] [i_0 - 1]) - 46366)) + 36114)))));
                    }
                    var_19 = (239549338 % 23357);
                    arr_12 [i_0 + 1] [10] [i_2] = (58051 == 19318);
                }
            }
        }
    }
    var_20 = var_13;
    var_21 = var_10;
    #pragma endscop
}
