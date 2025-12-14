/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~((min(var_9, var_13)))));
    var_19 = (min(((-(max(var_5, 18446744073709551615)))), var_14));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_20 = (max(var_20, (((var_10 ? (arr_1 [i_0 - 1] [13]) : (var_7 | var_10))))));
        var_21 = 612677666;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_22 = (!(~260014240));
        arr_4 [i_1] [9] = (-1556 > 3096921406561529821);
        arr_5 [i_1] = (max(((min(var_7, var_5))), (!var_0)));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_23 = ((-(!4294967295)));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    var_24 = (((-var_0 ? (max(17416465861919106606, var_6)) : (var_7 - var_2))));
                    arr_15 [i_3] [i_3] [5] [i_4] = max(var_8, (max(((min(12988, 65527))), ((var_10 / (arr_10 [i_2] [i_3]))))));
                }
            }
        }
        var_25 = (min((min(var_9, ((-(arr_10 [i_2] [i_2]))))), var_12));
        arr_16 [i_2] = ((~(min((!var_6), ((17950212608809175356 ? (-2147483647 - 1) : (arr_12 [i_2] [i_2] [i_2] [i_2])))))));
    }
    var_26 = (((((var_5 / -21603) ? var_8 : 260014243)) | -var_15));
    var_27 = var_16;
    #pragma endscop
}
