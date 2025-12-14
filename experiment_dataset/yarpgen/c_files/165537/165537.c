/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_1] = 2591113558;
            var_10 = ((1703853732 ? 567158927 : -721347092));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_8 [i_0] [i_0] [12] = -var_6;
            arr_9 [i_0] [5] [5] = var_7;
            var_11 = (402653184 <= var_4);
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_12 = ((1170010238 ? 1170010231 : -1170010244));
            var_13 = var_6;
            var_14 = ((721347092 ? 422169603 : 64663));
        }
        for (int i_4 = 2; i_4 < 11;i_4 += 1)
        {
            var_15 &= (((arr_13 [1] [i_4]) ? (var_5 <= var_6) : ((((((3727808369 ? (arr_4 [4] [i_4 + 3] [i_4]) : (arr_14 [i_0] [1] [i_0])))) ? var_3 : ((var_5 ? 33429 : var_0)))))));
            var_16 = ((var_1 - ((625982201123599457 ? 625982201123599442 : 15190))));
            arr_15 [i_4 + 1] = (arr_14 [i_0] [i_4 - 1] [i_0]);
        }
        var_17 = ((((!(min(var_6, var_6)))) ? (((((arr_6 [i_0] [i_0]) && (arr_6 [i_0] [i_0]))))) : (min(((526917648 ? 2155 : 249)), -1170010239))));
        arr_16 [i_0] = 7458260337443697956;
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        arr_21 [i_5] |= ((+(((arr_19 [i_5]) ? (arr_19 [i_5]) : -1528857835))));
        var_18 = min(((-2151 ? 50 : 11462416435122189168)), (((var_6 != (arr_20 [i_5])))));
    }
    var_19 = var_3;
    var_20 = var_6;
    var_21 = (min(((var_6 ? var_4 : var_7)), 29));
    var_22 = ((18446744073709551615 ? (((var_1 ? var_2 : 55167))) : var_8));
    #pragma endscop
}
