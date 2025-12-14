/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~(((var_14 || (var_6 >= var_7))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_19 = (max(var_19, (((var_14 ? (((arr_0 [i_0] [i_0]) ? 87 : (arr_0 [i_0] [i_0]))) : ((((!(arr_0 [i_0] [i_0]))))))))));
        arr_2 [i_0] = ((((!(arr_0 [i_0] [i_0])))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_20 = (max(var_20, (((~((~(arr_0 [i_0] [i_1]))))))));
            var_21 = (~-1715776736);
            var_22 = ((-3797378930658869232 ? 2209216984775258985 : 1));
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
        {
            var_23 = var_16;
            var_24 = (min(var_24, -var_17));
            var_25 = (((((15872 ? (arr_4 [i_0] [i_0] [i_0]) : var_10))) ? var_10 : (arr_8 [i_0] [i_0])));
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
        {
            var_26 += (((arr_7 [i_0] [i_3]) ? ((~(arr_1 [i_0] [i_3]))) : 1));
            var_27 &= (~47664);
        }
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_28 = (arr_8 [i_4] [i_4]);
        var_29 = (((((~(arr_4 [i_4] [i_4] [i_4])))) ? (((arr_14 [i_4]) ? (max((arr_1 [i_4] [i_4]), (arr_5 [i_4] [i_4]))) : (min(var_7, (arr_0 [i_4] [i_4]))))) : var_9));
    }
    var_30 = ((((min((var_10 % 1), var_14))) ? -var_0 : (~var_9)));
    var_31 = var_10;
    #pragma endscop
}
