/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_3, var_4));
    var_16 = 13594758269641118053;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((max((min(-23502, 13594758269641118053)), (((0 && (arr_0 [i_1])))))) - (18446744073709551615 == -23502)));
                arr_6 [i_0] [2] [i_1] = var_14;
            }
        }
    }
    #pragma endscop
}
