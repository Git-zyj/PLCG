/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [6] &= -var_8;
                arr_6 [i_0] [i_0] [4] &= (((((~var_3) + 9223372036854775807)) >> ((((((min(var_2, var_1))) ? var_6 : 11997)) + 29))));
            }
        }
    }
    var_11 = (max(((((9133979940701822216 == var_6) || var_6))), ((var_0 ^ (var_1 | var_6)))));
    var_12 = (((((max(1, var_2))) / -var_4)));
    #pragma endscop
}
