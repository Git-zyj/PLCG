/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 *= ((((min(100, (arr_0 [i_0])))) + (((min(93, 158))))));
                    var_17 &= (max((((93 ? 93 : -6695))), (max((arr_6 [i_0] [i_1]), ((var_8 ? -9223372036854775799 : var_1))))));
                    var_18 = (((((-237 ? (arr_3 [i_1] [i_1]) : (((arr_3 [i_2] [i_0]) * var_13))))) ? (((var_4 ? 94 : ((min(42, 1)))))) : ((158 ? 2995266908 : (arr_7 [4] [i_1])))));
                    var_19 = (((((-20735 ? (arr_1 [i_1]) : (arr_1 [i_1])))) ? ((8793945538560 * (((max(1, (arr_3 [1] [1]))))))) : (arr_0 [20])));
                    var_20 -= var_11;
                }
            }
        }
    }
    var_21 = -2147483642;
    var_22 |= var_1;
    #pragma endscop
}
