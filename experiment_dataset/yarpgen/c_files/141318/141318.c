/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((1 ? (((((var_6 ? var_0 : var_11))) ? 13730872479180720703 : var_7)) : (((((var_1 - var_0) >= 255))))));
    var_14 -= (((((~(~var_2)))) / ((var_10 ? (((26404 ? var_7 : 192))) : ((var_0 ? var_1 : 4715871594528830913))))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_15 = (max(var_15, ((((arr_1 [i_0 + 1]) ? (max(var_11, var_11)) : (-17 != -20274))))));
        var_16 = ((((1103697695285888100 ? 1328902223 : -53))) ? (((max((arr_0 [i_0] [i_0]), (1103697695285888094 && -735069392))))) : ((+(((arr_1 [i_0]) >> (7668284534997728013 - 7668284534997727991))))));
        arr_2 [i_0] = var_4;
        var_17 |= ((var_2 ? ((((max(-4752, 192))))) : (((!var_5) ? (((arr_1 [i_0]) ? (arr_1 [21]) : var_5)) : (((((arr_0 [6] [i_0]) <= (arr_1 [i_0])))))))));
    }
    #pragma endscop
}
