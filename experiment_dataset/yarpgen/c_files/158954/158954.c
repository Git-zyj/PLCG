/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((((-(((arr_4 [i_0] [i_1]) - var_11))))))));
                var_16 += (max((arr_2 [i_1]), var_5));
                var_17 = (min(var_17, (((254 ? (((arr_4 [i_0] [i_1 + 2]) << (((arr_4 [i_1 + 1] [i_1 + 2]) - 61392)))) : (min((~4), 65531)))))));
                arr_7 [2] [10] |= (((((((arr_3 [i_1]) >> (-805383786 + 805383799)))) ? ((var_6 ? 17788209054628936028 : var_13)) : (arr_6 [i_1] [i_0] [i_0]))));
            }
        }
    }
    #pragma endscop
}
