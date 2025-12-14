/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (var_1 == ((-15186 ^ (max(var_6, var_8)))));
    var_13 ^= -536854528;

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (((((3758112774 ? 536854515 : 536854513))) ? 536854535 : 536854500));
        arr_4 [i_0] [i_0] = (max((max((arr_0 [i_0 - 1]), (arr_0 [i_0 - 1]))), (arr_0 [i_0 - 1])));
        var_14 *= (((var_3 ^ ((var_0 << (63882 - 63852))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_15 = (18446744073709551615 == 7690);
        var_16 = ((((arr_2 [i_1] [i_1]) ? (arr_2 [i_1] [i_1]) : (arr_2 [i_1] [i_1]))));
        var_17 ^= 3758112766;
        var_18 = (arr_1 [4]);

        /* vectorizable */
        for (int i_2 = 2; i_2 < 7;i_2 += 1)
        {
            arr_9 [6] [8] = ((((((arr_0 [7]) == -9558))) * var_8));
            var_19 = (max(var_19, ((((arr_6 [i_2 - 1] [i_2 - 2]) ? var_3 : var_5)))));
            arr_10 [4] = (((arr_5 [i_1]) <= 51321));
            var_20 = (max(var_20, ((((arr_7 [i_2 + 2]) ^ (arr_5 [i_2 - 2]))))));
            arr_11 [i_1] = (((arr_8 [i_2 - 2] [i_1]) ? (arr_8 [i_1] [i_2]) : (arr_8 [i_2 + 1] [i_1])));
        }
        for (int i_3 = 1; i_3 < 6;i_3 += 1)
        {
            var_21 -= (arr_13 [i_3 + 2] [i_3 - 1] [i_3 + 2]);
            var_22 ^= 1;
            var_23 = (((max(((var_8 ^ (arr_13 [i_3] [i_3 - 1] [i_1]))), -var_4)) * (arr_12 [i_3] [i_3] [9])));
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_24 = ((var_4 ^ (arr_7 [i_1])));
            var_25 = (max(var_25, ((((3758112760 || ((min(3758112742, 3758112773)))))))));
            var_26 ^= (((14021245465488290641 ? 12737 : (arr_14 [i_1]))));
        }
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
    {
        var_27 *= (((((((((((arr_7 [i_5]) + 2147483647)) << (var_0 - 284533671)))) || (var_9 / var_7)))) ^ ((((max(var_5, 91))) ? -30042742 : (var_7 >> 1)))));
        var_28 = var_11;
        arr_20 [i_5] = (((((arr_12 [i_5] [i_5] [i_5]) + 2147483647)) << (((((((-2147483647 - 1) - -2147483621)) + 47)) - 20))));
    }
    #pragma endscop
}
