/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += ((141 ? (max((min(var_8, var_7)), (((var_1 ? var_9 : var_0))))) : var_0));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 *= 0;
        var_15 = (min(var_15, ((max((min(((((arr_0 [i_0]) ? var_11 : (arr_1 [i_0])))), -7)), (((var_0 ? (arr_0 [i_0]) : (arr_0 [i_0])))))))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_16 = ((~((127 ? 125 : 122))));
            var_17 ^= (((var_11 ? (arr_1 [i_0]) : (max((arr_4 [i_0]), (arr_2 [14]))))));
            var_18 = (max(((max((arr_3 [i_0] [i_1] [i_0]), var_7))), 0));
            var_19 &= (max((((arr_4 [i_0]) ? (arr_0 [i_0]) : (((arr_0 [i_0]) | (arr_3 [i_0] [i_1] [i_1]))))), 4593671619917905920));
        }
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            arr_7 [i_2] [6] = ((max((arr_5 [9] [i_2 - 1]), (arr_5 [i_0] [i_2 - 1]))));
            var_20 = ((((min(var_2, var_10))) ? (arr_5 [i_2 - 1] [i_2 - 1]) : var_11));
            var_21 &= (min((((var_10 % var_3) ? (arr_6 [i_0] [i_0] [1]) : (max((arr_0 [i_2]), var_7)))), ((-1202396405427360189 ? -1195930803 : 28))));
            arr_8 [i_2] = (((((arr_2 [i_0]) ? (arr_2 [i_0]) : var_3)) | (min((arr_2 [i_0]), (arr_2 [i_0])))));
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            arr_12 [3] = (arr_0 [i_0]);
            var_22 += min(((max((arr_6 [i_0] [i_0] [i_3]), (arr_6 [i_0] [i_0] [i_3])))), (arr_1 [i_0]));
            var_23 *= ((((arr_5 [i_0] [i_3]) ? ((var_0 ? var_10 : (arr_0 [i_0]))) : (arr_3 [i_0] [i_3] [i_3]))));
        }
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            var_24 = ((max(85, ((-17432 ? 1202396405427360189 : -105)))));
            var_25 -= (((((-2135387924 ? -1680533102 : 1))) <= var_1));
            arr_15 [i_0] [i_4] = (max((min(0, 13445372087482274661)), ((((((var_9 ? (arr_2 [i_4]) : (arr_5 [i_0] [i_4])))) ? (var_12 && var_2) : var_3)))));
            var_26 = (max(var_26, ((max((arr_11 [i_0]), (min((arr_9 [i_4 - 2] [i_4 - 2]), ((((arr_14 [i_0] [i_0] [i_4]) || var_11))))))))));
            arr_16 [i_0] [i_4] = ((((arr_9 [i_4 - 2] [i_4]) ? (arr_4 [i_4 + 3]) : (arr_9 [i_4 + 3] [i_4 + 2]))));
        }
        var_27 = (((((arr_9 [i_0] [i_0]) || (arr_9 [i_0] [i_0]))) ? 60 : ((((min(var_12, (arr_5 [i_0] [i_0])))) ? var_1 : (max((arr_14 [i_0] [i_0] [i_0]), (arr_9 [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 10;i_5 += 1)
    {
        var_28 = ((!(arr_14 [i_5 - 1] [i_5] [i_5])));

        for (int i_6 = 2; i_6 < 10;i_6 += 1)
        {
            arr_22 [i_5] [i_6] = ((((arr_17 [i_5]) - var_7)));
            arr_23 [i_6] [i_6] [i_5] = (arr_6 [i_5] [i_5 - 1] [i_6]);
        }

        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            arr_27 [i_5 - 2] [i_7] = ((16869 ? 0 : 0));
            var_29 = (arr_14 [i_5 + 1] [i_5] [i_7]);
        }
    }
    var_30 |= var_6;
    var_31 = ((-1680533104 ? ((-1680533102 ? 121479325 : 6456217248337459403)) : 127));
    var_32 = (max(((var_8 ? (var_0 <= var_2) : ((var_7 ? var_6 : var_2)))), var_11));
    #pragma endscop
}
