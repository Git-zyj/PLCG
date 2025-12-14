/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_15;
        arr_4 [i_0] = (min((((-32767 - 1) ? 240 : 24)), var_4));
        arr_5 [i_0] [i_0] &= (min((((arr_2 [i_0] [i_0]) ? (arr_2 [16] [i_0]) : 53218)), (arr_2 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_9 [i_1] &= (max(62, (min((max(1, 3785864167)), (arr_8 [i_1])))));
        arr_10 [15] = arr_7 [1];
        arr_11 [i_1] [5] = (2759995213488243974 & 36028797018955776);
        arr_12 [i_1] = ((53219 ? ((var_14 ? (var_11 || var_6) : (((arr_6 [i_1] [i_1]) ? (arr_8 [i_1]) : 1355115626)))) : (((~(arr_8 [i_1]))))));
    }
    var_16 = var_10;
    var_17 = (min(var_3, 509103128));

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_15 [i_2] = (((var_9 << (((arr_1 [i_2] [16]) ? var_8 : var_5)))));
        arr_16 [i_2] &= (max((((var_10 ? (~67076096) : var_7))), (max((arr_0 [i_2] [3]), -23923))));
    }
    var_18 = var_10;
    #pragma endscop
}
