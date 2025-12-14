/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (8772872696692759509 != 31);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_21 = (max(var_21, (((~(((!-113) ? var_17 : (arr_1 [i_0] [14]))))))));
                var_22 ^= ((((((arr_3 [i_0]) ? ((59541 ? 2405162173496760989 : 59541)) : (~var_8)))) ? (!19) : ((2405162173496760995 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [20])))));
            }
        }
    }
    var_23 = (((((((2742713636 ? var_13 : var_0))) ? var_3 : var_12)) <= (((((var_5 ? -1572627808 : var_7))) ? var_18 : var_0))));

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_24 = (min((max(-var_18, ((2405162173496760989 ? 120 : 13454918621132059112)))), ((min((min(var_11, 0)), ((min((arr_9 [22] [i_2]), var_13))))))));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {

            for (int i_4 = 3; i_4 < 22;i_4 += 1)
            {
                var_25 = ((~(((arr_14 [i_2]) ? (arr_9 [i_2] [i_2]) : ((~(arr_11 [i_3] [1])))))));
                arr_15 [i_2] [i_3] [i_4 - 1] [i_3] = ((((((18446744073709551615 ? 87541483 : 0))) ? ((min(80, var_12))) : ((var_0 ? (arr_12 [i_2] [3]) : var_4)))));
            }
            var_26 = 55;

            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                arr_18 [i_5] [i_5] = 19696;
                arr_19 [17] [i_5] [i_5] [i_2] = max((~1), (min((((arr_11 [i_2] [i_3]) ? var_3 : (arr_9 [i_2] [16]))), ((((arr_11 [i_2] [i_3]) == var_9))))));
            }
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_22 [i_6] [i_2] [i_6] = ((1 ? -5 : ((-100 ? (-127 - 1) : 0))));
            var_27 = (min((min((arr_8 [i_2] [i_2]), (-376 ^ var_19))), ((((((8 ? (arr_20 [i_2] [i_6]) : var_3))) ? (((var_14 < (arr_10 [i_2])))) : (56 == 0))))));
        }
        for (int i_7 = 1; i_7 < 21;i_7 += 1)
        {
            arr_27 [i_2] [i_2] [i_7 - 1] = (max(((((arr_23 [i_7 + 2] [i_2]) ? ((1 ? (-127 - 1) : 225)) : ((var_6 ? var_5 : var_15))))), -8248342520615126779));
            var_28 = var_0;
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        arr_30 [7] = -8248342520615126805;

        for (int i_9 = 2; i_9 < 16;i_9 += 1)
        {
            arr_33 [i_9 - 1] [i_8] [i_8] = (-7539207564598757815 ? (~var_13) : (1 ^ -23));
            var_29 = (arr_3 [i_8]);
        }
    }
    #pragma endscop
}
