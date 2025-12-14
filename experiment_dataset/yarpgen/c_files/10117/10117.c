/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((((46068 ? var_5 : var_4))) ? (((46047 ? 111 : var_4))) : ((var_12 ? var_0 : var_6))))) ? ((((((755425164 ? var_2 : var_10))) ? (((var_1 ? 19 : -72))) : ((30359 ? var_0 : -30363))))) : (((((var_3 ? var_0 : var_7))) ? (((var_5 ? var_3 : 70))) : ((var_11 ? var_10 : var_9))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] = (((((((var_6 ? (arr_4 [i_0] [i_1] [i_0]) : var_7))) ? ((var_0 ? (arr_2 [i_0]) : (arr_1 [i_0 - 3]))) : ((5812458628606124212 ? (arr_3 [i_0]) : (arr_5 [i_0] [i_0])))))) ? ((((((7744 ? var_7 : -19))) ? (((arr_3 [i_0]) ? 19 : (arr_5 [i_1] [i_0]))) : (((arr_4 [i_0] [i_1] [i_0]) ? 1660761899 : (arr_4 [i_0] [i_1] [i_0])))))) : (((((var_6 ? 6 : (arr_6 [i_0] [i_1] [i_2])))) ? (((var_3 ? 163 : var_2))) : ((var_8 ? -8006767354766780089 : 45886)))));
                    var_14 ^= ((((((((-812335300 ? var_4 : 4095))) ? (((arr_7 [i_2] [i_0 + 1] [i_0 + 1]) ? var_6 : -23)) : ((var_11 ? var_12 : (arr_3 [i_0])))))) ? ((((((-22660 ? (arr_5 [i_2 + 4] [i_0 - 3]) : (arr_0 [i_0 + 1])))) ? ((var_9 ? 39 : (arr_2 [i_0]))) : ((var_1 ? (arr_6 [i_0 - 2] [i_1] [i_1]) : var_6))))) : (((((22289 ? (arr_6 [19] [i_1] [i_2]) : 32767))) ? (((arr_2 [i_2]) ? var_5 : 3326277346)) : (((var_8 ? (arr_6 [16] [i_1] [i_2]) : 30362)))))));
                }
            }
        }
    }
    #pragma endscop
}
