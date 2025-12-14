/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((min(((var_6 ? var_8 : var_0)), (var_2 >> var_10))) >> (((~var_12) - 16976817226124168471)));
    var_14 = (((((min(var_9, 11)))) ? var_5 : ((((min(13303571186079084852, var_0))) ? var_12 : var_8))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_15 = (min(var_15, (((~(arr_2 [i_1] [i_1] [i_0]))))));
            var_16 = (min(var_16, (var_11 < 9)));
            var_17 -= (((arr_0 [i_0]) != (arr_0 [i_1])));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
        {
            var_18 = (!-var_7);
            var_19 ^= (((((min(var_12, var_6)) + (arr_3 [i_0]))) + (arr_5 [i_0])));
            arr_8 [i_2] [i_0] [i_0] = (((((min((arr_7 [i_0] [i_0] [i_2]), var_5))) || ((min((arr_5 [i_0]), 1748619329))))));
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
        {
            var_20 -= 1;
            arr_12 [i_0] [i_0] = (arr_1 [i_3] [i_3]);
        }
        var_21 = (min(var_21, (!var_5)));
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] [i_4] = (arr_3 [i_4]);
        var_22 = (arr_9 [i_4] [i_4] [i_4]);
    }
    var_23 = (min((((((var_7 ? var_2 : var_4))) | var_7)), ((((!var_3) / ((1 ? var_0 : var_11)))))));
    #pragma endscop
}
