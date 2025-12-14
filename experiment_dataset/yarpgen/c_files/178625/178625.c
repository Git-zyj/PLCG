/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((~var_11) < (var_4 <= var_4))) ? (max(var_10, ((var_3 ? var_12 : var_3)))) : -7403));
    var_19 = (min(var_19, (((((((~var_12) ? 1 : ((var_7 ? var_5 : 2042974365))))) >= ((2588961836 ? (-127 - 1) : 159299183)))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = (min(var_20, (min(-4135668113, (((!var_15) ? (arr_1 [i_0] [i_0]) : (arr_2 [i_0])))))));
        arr_3 [i_0] = ((((var_10 & (arr_1 [i_0] [i_0]))) != (arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        arr_7 [i_1] = ((~(arr_6 [i_1])));
        arr_8 [0] |= (((arr_1 [i_1] [i_1]) < (arr_1 [i_1] [12])));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_11 [0] = ((((((min(32, (arr_9 [i_2])))) && ((!(arr_9 [i_2]))))) ? var_6 : (((((max((arr_9 [i_2]), var_17))) + var_10)))));

        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            var_21 = (min(2588961836, 1));
            arr_14 [i_3] [i_2] [i_3] = (arr_9 [i_3]);
            var_22 = ((((~(arr_9 [i_2])))) >= (((!((max((arr_12 [i_2] [i_2] [i_3]), (arr_12 [i_3] [i_3] [i_3]))))))));
        }
        arr_15 [7] [7] = ((((var_9 || 0) % ((var_16 ? var_10 : (arr_9 [i_2]))))));
    }
    #pragma endscop
}
