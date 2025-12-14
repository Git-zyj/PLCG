/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(9, var_3));
    var_11 = ((max(((var_5 ? 17592152489984 : var_4)), var_6)) >> (((min(var_0, var_9)) + 1800309977)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 1;
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 *= (min(((min(-1418793445, 18446726481557061631))), var_0));
                    arr_10 [8] [i_0] = (((max((arr_7 [i_0] [i_1 + 2] [i_0]), (arr_9 [i_0] [i_1 - 1] [i_0] [i_0]))) >> (((~var_4) - 11794))));
                    arr_11 [i_0] [i_0] = (((((var_2 >> (var_7 + 26)))) ? (min(18446726481557061626, var_8)) : (arr_4 [i_1] [i_0])));
                }
            }
        }
        var_13 ^= ((((arr_9 [i_0] [i_0] [i_0] [i_0]) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (arr_0 [i_0]))));
        var_14 = ((((((max(var_8, 1880535809)) >> (((~1) + 16))))) ? ((-(((arr_1 [i_0]) ? (arr_9 [i_0] [10] [i_0] [i_0]) : var_9)))) : 51475));
    }
    #pragma endscop
}
