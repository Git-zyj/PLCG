/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((min(var_3, var_8)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = (((((min((arr_1 [i_1]), 15972))) ? (arr_5 [i_1 - 3] [i_0] [i_0 + 1]) : 18446744073709551615)));
                    var_15 = (min(var_15, (((((var_3 * (arr_3 [i_1]))))))));
                    var_16 = (min(var_16, (((((-(!-105))) << (min(var_2, ((((arr_4 [11] [i_1] [i_2]) <= var_8))))))))));
                }
            }
        }
    }
    var_17 = ((var_4 + (((0 ? 15972 : -126)))));
    var_18 = 380807845;
    #pragma endscop
}
