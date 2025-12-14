/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_13 = (((arr_1 [i_0]) / var_9));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_4 [i_1] = ((((min((((arr_2 [i_1] [i_1] [i_1]) ? var_8 : (arr_0 [i_1] [i_0]))), (arr_2 [i_1] [17] [i_0])))) ? (arr_2 [i_0] [i_0] [i_0]) : var_1));
            arr_5 [i_1] [i_0 - 1] [i_1] = ((min(11118411487049258696, 1282488180)));
            var_14 &= ((((~(arr_1 [i_0]))) <= 24975));
            arr_6 [i_1] [i_1] = (arr_1 [i_0]);
        }
        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            arr_9 [i_0] [i_0] = (((((arr_0 [i_2] [i_0]) ? (arr_7 [i_0] [1] [i_2]) : var_7)) + -1282488155));
            arr_10 [i_0] [i_0] = (((((var_0 ? -21529 : (((max((arr_1 [i_0]), var_8))))))) ? ((((min((arr_3 [i_0] [14]), 47754))) ? var_12 : (arr_2 [i_2] [i_2] [9]))) : (arr_2 [i_0] [i_2] [i_2])));
            var_15 *= (min(((127 ? (21528 & 21525) : ((min(2812, 128))))), (arr_8 [17])));
        }
        for (int i_3 = 3; i_3 < 18;i_3 += 1)
        {
            arr_15 [i_0] [i_0] [i_3] = 21529;
            var_16 = (min(var_16, var_6));
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_17 *= (arr_3 [i_0 + 1] [6]);
            arr_19 [i_0 + 1] [i_0 - 1] &= (((((((max(var_1, 3430))) | ((var_3 ? (arr_17 [i_0] [i_0] [i_0]) : var_7))))) ? ((~((1571864741 ? -21551 : (arr_3 [i_0] [16]))))) : (arr_17 [i_0 - 1] [i_0 - 1] [i_0 - 1])));
            var_18 *= (arr_1 [i_4]);
        }
        arr_20 [i_0] = (arr_8 [i_0]);
    }
    var_19 &= ((((((((min(var_2, var_12))) == ((836721271 ? var_9 : var_8)))))) == -7674307010948358437));
    #pragma endscop
}
