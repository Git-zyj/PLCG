/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(((!((min(4233145863127797687, 1))))), (((~10196) <= ((max(1, 1)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = 65535;
                arr_5 [i_0 - 1] [i_1] [i_0 - 1] = (((((-9223372036854775807 - 1) ? (arr_2 [i_1 + 1] [i_1 - 2]) : (arr_2 [i_1 - 2] [i_1 - 2])))) ? ((211 ? (arr_2 [i_1] [i_1 - 2]) : (arr_2 [2] [i_1 - 2]))) : (~1));
                var_21 = (max(var_21, var_1));
            }
        }
    }
    var_22 = var_16;
    var_23 = ((var_13 ? (min(-var_17, (((0 ? 1092540332 : 1))))) : (((((max(var_18, var_19))) >> (var_15 + 8497332818153513055))))));
    #pragma endscop
}
