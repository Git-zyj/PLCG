/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += ((!((min(((max(1, 9353))), 9223372036854775807)))));
    var_14 = ((var_0 | (-8191 > var_2)));
    var_15 = ((var_9 <= (var_12 + -62)));
    var_16 = ((var_4 ? 2197786895 : ((((max(var_10, var_7)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_17 += ((((max((((2097180400 ? 1957885290 : var_5))), ((-62 ? 2097180397 : var_12))))) ? ((((((~var_7) + 2147483647)) >> ((1 >> (var_0 - 65368)))))) : (max(-1, (((arr_2 [i_0] [i_0]) + var_12))))));
                arr_7 [i_1] [4] [3] = ((3017527300 >= ((1 ? 2097180411 : (~62)))));
                arr_8 [i_0] [i_1] = ((((((var_0 + 2097180400) <= (-62 > -31614)))) & (!3017527307)));
            }
        }
    }
    #pragma endscop
}
