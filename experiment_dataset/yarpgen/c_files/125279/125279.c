/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    var_15 = ((13 ? 6541 : -72));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = (min(var_16, ((((((251 ? var_11 : var_12))) ? 225 : ((var_12 ? 23 : -50)))))));
        arr_2 [i_0] [i_0] = (((-243 ? 30452 : ((var_0 ? var_2 : 148)))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = ((max(-3, (max(var_1, -1407636052326312541)))));
        var_17 = min(((8955 ? 157 : 1555856916427829185)), (((var_0 ? 212795917 : 1212927894))));
        var_18 = var_8;
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_19 ^= (((!var_4) ? ((59304 ? -1742943253 : 13879)) : 1016));
        var_20 += (((((var_10 ? 10467797467914825675 : var_13))) ? -var_4 : var_3));
    }
    #pragma endscop
}
