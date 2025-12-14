/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_15 *= ((-var_7 <= ((var_12 & (arr_0 [i_0 + 1])))));
                var_16 *= arr_3 [1] [i_0 - 1] [i_0 - 1];
                var_17 -= (min((arr_1 [i_0] [i_0 + 1]), var_8));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                var_18 = (((arr_6 [i_2]) ? (arr_5 [i_2] [i_2]) : (arr_6 [i_3])));
                var_19 *= (arr_4 [i_2] [i_2]);
            }
        }
    }
    #pragma endscop
}
