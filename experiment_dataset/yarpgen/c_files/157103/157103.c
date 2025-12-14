/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((min((min(var_6, var_9)), (~var_6))) > (max((var_9 / var_6), ((var_7 ? var_4 : var_3))))));
    var_11 = (min(var_11, var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_12 = (((arr_5 [i_1 + 1]) && (((((((arr_0 [i_1 - 2] [17]) % var_2))) ? (min((arr_2 [i_0]), var_1)) : (((((arr_0 [i_0] [i_0]) <= var_8)))))))));
                arr_6 [i_0] [i_0] = ((((((arr_1 [i_1]) ? (arr_3 [i_0]) : ((0 >> (-9132431627322590631 + 9132431627322590662)))))) ? ((((arr_5 [i_1 + 1]) != (arr_5 [i_1 - 2])))) : (((min((arr_1 [i_0]), (arr_1 [i_0])))))));
            }
        }
    }
    var_13 = var_0;
    #pragma endscop
}
