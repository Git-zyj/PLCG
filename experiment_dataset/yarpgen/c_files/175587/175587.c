/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-(min(((-1596407919 ? 136 : 0)), var_5))));
    var_13 = var_11;
    var_14 &= ((min(var_5, var_9)));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = ((!(((+(((arr_0 [i_0]) ? 2936076776172908460 : var_1)))))));
        var_16 = ((max(var_0, var_10)));
        var_17 = (max(var_17, var_8));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_6 [i_1] = var_10;
            var_18 = (arr_5 [i_1] [i_1]);
        }
        var_19 = ((((+(((arr_3 [i_1]) ? var_3 : -1642923998)))) < var_8));
        var_20 = (((arr_3 [i_1]) ? (arr_4 [i_1] [i_1]) : ((((!((max(var_9, (arr_5 [i_1] [i_1]))))))))));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        arr_10 [i_3] [i_3] = (((((arr_3 [i_3]) - (arr_3 [i_3]))) == (!var_1)));
        arr_11 [12] = (255 + 255);
        var_21 = var_10;
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_22 ^= (!209);

        for (int i_5 = 1; i_5 < 20;i_5 += 1)
        {
            var_23 -= (((!2019858769) % (min((arr_15 [i_5 - 1] [i_5 - 1]), var_8))));
            arr_19 [i_4] [i_5] [i_5] = (max(var_6, var_8));
        }
    }
    #pragma endscop
}
