/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    var_19 = (((9172940589177942569 || var_14) ? (max(((var_8 ? var_11 : var_13)), ((var_6 ? var_3 : var_1)))) : (var_14 && 10501)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = (((((arr_4 [i_1 + 1] [i_1 - 1] [i_1 + 1]) >= (arr_0 [i_1 + 1] [i_1 + 1]))) ? (arr_0 [i_1 - 1] [i_1 + 2]) : ((-(arr_4 [i_1 + 1] [i_1 - 2] [i_1 + 2])))));
                arr_5 [i_1 + 2] [i_0] [i_0] = (((-22477 ? 255 : 28474)));
            }
        }
    }
    var_21 = (max(var_21, (var_16 * 14881130861475813689)));
    #pragma endscop
}
