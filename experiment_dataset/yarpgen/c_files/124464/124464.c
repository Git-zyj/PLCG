/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_16 += (((((var_13 > (arr_1 [6])))) * ((((arr_1 [4]) >= (arr_1 [2]))))));

        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            var_17 = var_9;
            var_18 = (min(var_18, ((((((((~(arr_0 [i_0])))) ? ((((!(arr_1 [8]))))) : ((1 ? (arr_1 [4]) : 3186975163)))) > ((min((arr_0 [i_0]), (arr_3 [4] [i_0])))))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_19 ^= (2959347606 - 2959347622);
            arr_10 [i_0] [1] [i_0] = (!var_7);
            var_20 = (min(var_20, ((((arr_2 [i_0] [i_0]) - (arr_7 [i_0]))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            arr_14 [i_0] [i_0] = (arr_12 [i_0]);
            var_21 = (((arr_2 [i_3] [i_0]) * (arr_2 [i_0] [i_3])));
            var_22 = (min(var_22, (arr_3 [i_0] [i_3])));
        }
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] = (((min(((var_6 ? var_10 : (arr_12 [i_4]))), ((var_8 ? (arr_13 [i_4]) : var_12)))) * (((max(var_7, (arr_11 [i_4] [i_4])))))));
        var_23 = (min(var_23, 222));
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
    {
        arr_21 [i_5] [i_5] = (arr_6 [i_5] [i_5] [0]);
        var_24 *= ((-(min((((!(arr_12 [i_5])))), (max(var_9, var_6))))));
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
    {
        arr_24 [i_6] [i_6] = var_9;
        var_25 -= ((((2959347610 ? (59425 || var_4) : 1335619673)) | (min((var_11 - 234), 1335619681))));
        var_26 += -71;
    }
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 17;i_8 += 1)
        {
            {
                var_27 = (max((((var_13 || (arr_26 [i_7 - 2])))), (arr_26 [i_7 - 2])));
                var_28 = (min(var_28, var_3));
                var_29 = (max(var_29, ((((((+((((arr_27 [i_7]) >= 27386)))))) || ((min((arr_27 [i_7 - 1]), (arr_27 [i_7 - 1])))))))));
                var_30 = (min(var_30, ((((~2469993631) && (((var_4 ? ((min((arr_27 [8]), (arr_28 [i_7] [8])))) : ((min(var_4, var_3)))))))))));
            }
        }
    }
    var_31 = var_8;
    var_32 ^= var_2;
    #pragma endscop
}
