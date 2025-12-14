/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_6 ? (var_7 ^ var_3) : -var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = (((-9223372036854775807 - 1) ? var_10 : 1787185701));
                var_13 = var_8;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                var_14 = var_9;
                var_15 = (max(var_15, ((((((var_7 ? ((4294967295 ? 48087 : -9147967302539270323)) : ((max(var_6, (arr_1 [4]))))))) ? (min((((arr_1 [i_2]) ? var_8 : (arr_6 [i_3] [i_2]))), (arr_3 [i_2 + 1] [2] [i_2 + 1]))) : (var_7 + var_3))))));
                var_16 = (max(var_16, (((!((((arr_9 [0]) ? var_10 : (arr_2 [i_3])))))))));
                arr_10 [i_2] [i_2] [i_3] = ((((((arr_7 [i_3] [i_2 + 1]) ? (arr_7 [i_2 + 1] [3]) : var_10))) ? var_9 : ((var_5 << (((arr_3 [i_2 + 1] [i_2] [i_2]) + 19825))))));
            }
        }
    }
    var_17 = (~var_1);
    var_18 = (max(var_18, var_8));
    #pragma endscop
}
