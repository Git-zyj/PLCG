/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((((max(-8, var_17)))), var_9));
    var_20 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [18] [18] |= (~(((-9223372036854775807 - 1) ^ -520465071)));
                var_21 -= (((((((-30 ? (arr_2 [i_0] [i_1]) : (arr_3 [18])))) ? (var_5 < -20) : (((arr_4 [18] [16]) & (arr_0 [1]))))) % ((((!(((arr_6 [2] [i_1]) < (arr_3 [0])))))))));
                arr_8 [i_0] = (((((var_3 + ((((arr_2 [i_0] [i_0]) >= (arr_5 [i_0] [i_0] [1]))))))) * ((-45 / (min(221, (arr_6 [i_0] [i_0])))))));
            }
        }
    }
    #pragma endscop
}
