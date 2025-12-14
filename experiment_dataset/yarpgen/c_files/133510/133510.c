/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((max((1 & 1600080810), -110)));
    var_18 = ((var_2 ? ((((var_3 || var_16) ? ((var_10 ? var_10 : var_12)) : ((1779471862 ? 0 : -15802))))) : (((((var_2 ? var_11 : var_11))) ? var_0 : var_3))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = ((((((arr_0 [i_0] [i_1]) ? (arr_4 [i_0]) : (arr_6 [i_2] [i_0 + 1] [i_0 + 1]))))) ? (arr_0 [i_1] [i_1]) : ((((min((arr_8 [i_0] [i_1]), (arr_8 [i_1 + 2] [i_1])))) ? (arr_8 [i_0 - 1] [i_0]) : (((arr_1 [i_0]) ^ (arr_6 [i_2] [i_1 - 1] [i_0]))))));
                    var_20 = (max(var_20, ((((arr_2 [i_0 + 1]) ? -1 : (((arr_2 [i_0 - 1]) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 + 1]))))))));
                }
            }
        }
    }
    var_21 *= (max((((((-5 ? 18446744073709551595 : -1))) ? ((max(var_1, var_13))) : ((0 ? -15 : (-32767 - 1))))), ((var_12 ? var_11 : var_3))));
    #pragma endscop
}
