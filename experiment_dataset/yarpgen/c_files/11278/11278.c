/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~(31 / var_0)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = (max(var_11, (((var_5 << (((var_7 == (arr_4 [4] [6] [4])))))))));
                var_12 = (min(var_12, (((var_1 ? (max(60997, (var_4 * 563212831599830942))) : (min((((4563 ? var_3 : var_0))), ((var_1 ? var_5 : var_8)))))))));
            }
        }
    }
    var_13 = var_2;
    var_14 = ((60973 + (min((var_7 + 60973), var_3))));
    #pragma endscop
}
