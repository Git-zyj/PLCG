/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((((var_10 ? var_13 : var_4))) / var_10))) ? (max((max(var_7, 1)), ((min(var_9, -8239))))) : var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = (6534 << ((((max(var_5, -8244))) + 120)));
                arr_5 [5] [10] [10] = (max(((-8257 ? var_10 : 8238)), ((((arr_0 [i_0]) & (arr_0 [i_1]))))));
            }
        }
    }
    var_21 = (min((((var_18 <= (var_11 == -8223)))), (var_16 <= -627192102)));
    var_22 = var_6;

    for (int i_2 = 3; i_2 < 15;i_2 += 1)
    {
        var_23 = (((((var_11 && 738933187) ? (((-1 || (arr_6 [7])))) : ((-(arr_0 [i_2]))))) | ((((8246 <= var_7) && var_8)))));
        arr_8 [i_2] &= var_17;
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_24 = var_7;
        var_25 = 1;
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        var_26 = (max(var_26, ((((~249) && (((-(arr_12 [i_4])))))))));
        var_27 += ((-((-6524 ? 1729519000337436631 : 16))));
        var_28 &= var_2;
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_29 += (((((min(-6545, (arr_11 [1]))))) + ((((min((arr_11 [i_5]), 1))) ? 1055443559 : ((var_13 ? var_18 : (arr_12 [i_5])))))));
        var_30 = (min(var_30, -64));
    }
    #pragma endscop
}
