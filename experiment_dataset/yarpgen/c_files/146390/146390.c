/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_18 += (((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : 1)) * (((!(arr_2 [i_0] [i_0]))))));
        var_19 += ((((arr_1 [i_0]) ? var_16 : (arr_1 [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_20 = 1;

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_8 [i_1] = (1 % 4032);
            var_21 += (arr_5 [i_2] [i_1]);
        }
        var_22 = (arr_0 [3] [3]);
        var_23 = (min(var_23, (((((var_12 ? (arr_2 [i_1] [i_1]) : var_17)) / ((((arr_2 [i_1] [i_1]) || (-32767 - 1)))))))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_24 = (((((arr_10 [i_3]) & (arr_9 [i_3] [i_3]))) ^ (arr_10 [i_3])));

        /* vectorizable */
        for (int i_4 = 1; i_4 < 23;i_4 += 1)
        {
            var_25 ^= (((arr_13 [i_4 + 1] [i_4 + 2]) < (-40 || 224)));
            arr_14 [i_4] = ((var_3 * (arr_9 [i_4 + 2] [i_4 - 1])));
            var_26 = ((!((((arr_12 [i_3] [i_4 + 1]) ? 224 : 59)))));
        }
        var_27 ^= (((min((arr_9 [i_3] [i_3]), (arr_9 [i_3] [i_3])))) ? var_2 : ((max((arr_9 [i_3] [i_3]), var_2))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_28 = (min(var_28, (((!(!-4033))))));
        arr_17 [i_5] [i_5] = (!1);
        var_29 = (min(var_29, var_15));
        var_30 = var_3;
    }
    var_31 = (((~((var_13 ? 1 : -4032)))));
    #pragma endscop
}
