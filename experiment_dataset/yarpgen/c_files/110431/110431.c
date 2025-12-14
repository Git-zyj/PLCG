/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = ((!(((95 ? (arr_0 [i_1 + 1]) : 1)))));
                var_21 ^= (max((arr_2 [18]), ((((((arr_0 [i_1]) ? var_19 : 8485594957837676975))) ? (arr_0 [i_0 + 2]) : 6566318071247459119))));
                var_22 += ((+(((arr_0 [i_0 + 2]) ? (arr_0 [i_1 - 1]) : 612391288))));
            }
        }
    }
    var_23 &= (((((-89708471 ? var_13 : (~4999545518894095926)))) ? (((!((min(var_15, var_11)))))) : (max(696343130, (!224)))));
    var_24 = ((((((((-612391284 ? -5416497946281274974 : var_2)) < (((696343130 ? var_15 : 5416497946281274973))))))) / var_3));
    var_25 = (min((((~var_0) ? var_13 : (~18127410428815600634))), 5559669814669689273));
    var_26 = (max(var_26, var_14));
    #pragma endscop
}
