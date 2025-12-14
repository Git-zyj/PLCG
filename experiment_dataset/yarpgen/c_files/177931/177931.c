/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((((((var_2 ? ((var_1 ? var_11 : 15153086334251040294)) : var_1))) ? ((var_5 % ((1 ? var_3 : var_14)))) : (~var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [3] = 59;
                var_19 -= ((469926542527733335 ? ((((!((max(1, (arr_2 [i_0] [i_1])))))))) : ((0 ? 1 : 11519352333751237190))));
            }
        }
    }
    #pragma endscop
}
