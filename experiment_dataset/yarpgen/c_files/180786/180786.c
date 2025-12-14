/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((arr_0 [i_0]) ? (arr_1 [i_0]) : (-9223372036854775807 - 1))) * (((-(arr_1 [i_0])))));
        var_16 = (max(var_16, ((((((27139 ? 9629792577332324524 : (arr_0 [i_0])))) ? ((var_8 ? (arr_0 [i_0]) : 2147483647)) : ((var_15 + (arr_0 [i_0]))))))));
        var_17 = 2174691302291256857;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((((((arr_5 [i_1]) || (-127 - 1)))) <= ((-103 ? var_0 : -2147483637))));
        arr_7 [i_1] = ((((((((arr_0 [i_1]) / 1385749753))))) <= (((-127 - 1) - (184042468 & 4922164857317017971)))));
        var_18 = (arr_1 [i_1]);
    }
    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_19 = ((var_1 == (arr_11 [i_2 - 2])));
            var_20 -= var_6;
            var_21 = ((31325 ? 1526587378 : 255));
            var_22 = (((arr_10 [i_2] [i_3] [i_3]) * (arr_5 [i_2 + 1])));
            var_23 *= (((-2147483647 - 1) ? (arr_11 [i_2 - 1]) : (arr_11 [i_2 + 1])));
        }
        arr_12 [10] = 487832229;
        var_24 &= ((arr_1 [i_2 - 2]) ? ((((arr_11 [i_2 - 2]) || (arr_11 [i_2 + 1])))) : -29193);

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            var_25 = (max(((((arr_5 [i_2 - 1]) ? (arr_5 [i_2 - 1]) : 247))), (min((126 ^ var_14), (min(-104, var_1))))));
            var_26 = (max(var_26, ((((-992130805 || 125) ? 1574254859 : 124)))));
            arr_15 [i_2] [i_2] [i_4] = ((-(((!(arr_1 [0]))))));
            arr_16 [i_4] = ((((!(arr_4 [i_2 + 1])))));
            arr_17 [i_2] [i_4] = (((arr_1 [i_2 + 1]) + ((-1 * (arr_3 [8])))));
        }
        var_27 = ((var_4 ? ((var_2 ? (arr_14 [i_2 + 1] [5] [i_2 - 2]) : var_1)) : (max(18446744073709551615, 13400413860877423585))));
    }
    var_28 |= var_12;
    #pragma endscop
}
