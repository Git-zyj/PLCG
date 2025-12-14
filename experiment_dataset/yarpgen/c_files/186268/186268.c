/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_10 = ((~((var_7 ? (~var_4) : (~1070778118)))));
                arr_5 [i_0] [i_0] [i_1] = (min((!var_0), (!var_5)));
                var_11 = -1;
            }
        }
    }
    var_12 = ((+(((!var_2) >> (((~var_9) + 6954919497402908315))))));
    var_13 = var_8;
    var_14 = var_2;
    var_15 &= ((max(var_7, ((var_9 ? var_5 : var_2)))));
    #pragma endscop
}
