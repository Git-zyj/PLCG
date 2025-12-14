/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_0] = (i_0 % 2 == 0) ? ((((arr_4 [i_0] [i_1 - 1]) >> (((arr_4 [i_0] [i_1 + 1]) - 5165163444030519964))))) : ((((((arr_4 [i_0] [i_1 - 1]) + 9223372036854775807)) >> (((((arr_4 [i_0] [i_1 + 1]) + 5165163444030519964)) + 511744210578619182)))));
            var_16 = (((arr_5 [i_0] [i_1] [i_1 + 1]) ? (arr_5 [i_1 + 1] [20] [20]) : 4294967295));
            var_17 |= ((var_7 + (arr_1 [4])));
            var_18 = (~var_7);
            var_19 -= var_0;
        }
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            arr_10 [i_0] [i_2] = (((arr_5 [i_2 + 1] [i_2 + 1] [i_0 - 1]) ? (((arr_0 [i_0]) & 1)) : 21));
            arr_11 [i_0] = ((((!(arr_0 [i_0]))) ? ((((var_0 || (arr_2 [i_0]))))) : (((arr_8 [i_0]) ? (arr_4 [i_0] [1]) : (arr_9 [i_0] [i_2])))));
        }
        for (int i_3 = 3; i_3 < 20;i_3 += 1)
        {
            var_20 = var_8;

            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                arr_18 [i_0] = ((~(arr_12 [i_0 + 2] [i_3 + 3])));
                var_21 = ((var_0 ? (arr_1 [i_0]) : (arr_4 [i_0] [i_0])));
            }
        }
        arr_19 [i_0] [i_0] = (arr_3 [i_0] [i_0] [i_0 + 1]);
    }
    for (int i_5 = 4; i_5 < 16;i_5 += 1)
    {
        var_22 = ((((((arr_4 [12] [i_5 - 2]) | -108))) ? (arr_4 [0] [i_5 - 3]) : (((~(arr_5 [i_5 - 1] [i_5 - 4] [i_5]))))));

        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_23 = (min(((min((min(110, (arr_4 [i_6] [i_6]))), (arr_8 [i_6])))), ((((arr_2 [i_6]) ? (arr_3 [i_5 - 2] [i_6] [i_6]) : 1)))));
            var_24 = (min(((~(!107))), (((min(var_10, (arr_8 [i_6])))))));
        }
        for (int i_7 = 1; i_7 < 14;i_7 += 1)
        {
            var_25 *= (((arr_24 [10]) * ((((((((arr_7 [18]) >= (arr_25 [i_5] [13] [i_7])))) != (((var_11 || (arr_26 [6] [6] [i_7]))))))))));
            arr_27 [i_5] [i_7 + 2] [i_7] = var_6;
        }
        arr_28 [i_5] = -103;
    }
    var_26 = (min(var_26, ((max(var_0, (((((var_2 ? var_8 : 0))) ? var_11 : (4323671325409990065 & 94))))))));
    var_27 = ((min(((var_14 ? -90 : 108)), ((max(var_11, var_13))))));
    #pragma endscop
}
