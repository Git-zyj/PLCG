/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_5 ? ((min(10, 0))) : (min(var_9, ((var_6 ? var_7 : var_0)))));
    var_11 = (max(var_11, ((min(var_4, (((((var_6 ? var_1 : var_9))) - (min(var_8, var_1)))))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 += (max(((((((var_8 >> (((arr_0 [i_0]) - 21424))))) ? ((10 ? 1014119717 : 10)) : var_1))), ((-((var_0 ? var_6 : var_8))))));
        arr_2 [i_0] = (~-5837092781203772886);
    }
    for (int i_1 = 3; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            arr_9 [i_1] [i_2] [i_1] = ((((var_6 && var_3) * var_1)));
            arr_10 [i_1] = ((((((arr_3 [i_1 - 2]) ? var_5 : (((max(var_0, 65511))))))) ? (((~var_9) ? var_9 : 19839)) : var_2));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_13 = ((~(arr_13 [i_3] [i_3] [i_3])));
            var_14 -= (var_6 ? var_6 : var_2);
            arr_15 [i_1] [i_1] = ((var_8 ? var_7 : (arr_4 [i_1 - 1])));
            arr_16 [i_1] [i_3] [i_1] = ((var_5 ? 5837092781203772886 : 12373));
            var_15 = (min(var_15, var_6));
        }
        var_16 -= (max((var_7 || var_6), ((var_8 ? (((((arr_6 [22]) && var_1)))) : var_2))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        arr_20 [i_4] = (!var_8);
        var_17 = 0;
    }
    var_18 = (min(var_18, var_0));
    #pragma endscop
}
