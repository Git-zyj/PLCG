/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((254 ? var_9 : var_12));
    var_16 = ((((max((((var_2 ? var_3 : var_13))), ((254 ? var_11 : 35353))))) || var_14));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_17 ^= ((((max(((var_11 ? 251 : var_11)), ((((((-32767 - 1) + 2147483647)) >> (11470860056102762507 - 11470860056102762503))))))) ? 1760123213 : ((((max((-32767 - 1), var_7))) ? 117 : (((arr_1 [i_0] [i_0]) ? var_11 : 127))))));
        var_18 |= 12;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_19 = var_1;

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_20 *= 1713774666;
            var_21 = (((!(arr_3 [i_1] [i_2]))));
        }
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            var_22 = ((0 ? 122 : 4412));

            for (int i_5 = 1; i_5 < 12;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        {
                            var_23 = (max(var_23, ((max(var_5, (arr_10 [i_5 - 1] [i_5 - 1] [i_6]))))));
                            var_24 *= 18446744073709551597;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        {
                            arr_25 [i_9] [i_8] [i_8] [i_3] [i_3] [i_3] = (arr_23 [i_5] [i_5 + 1] [i_5 + 1]);
                            var_25 = (min(var_25, ((min((max((((0 >> (((arr_22 [i_5] [i_8 - 1] [i_9]) - 2334628812))))), (arr_18 [i_3] [i_4] [i_5] [i_8 - 1] [i_9]))), ((((((-(arr_9 [9] [i_9])))) ? var_12 : (!-1)))))))));
                        }
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
        {
            var_26 = 439588110;
            var_27 = (max((((!(((3511456524 ? -118 : 3511456524)))))), (max((((0 ? 3870256909 : var_8))), ((var_1 ? var_0 : 111))))));
        }
        var_28 = 0;
        var_29 = (min(var_29, ((((arr_1 [i_3] [i_3]) ? ((-var_8 ? var_0 : (((var_11 ? 23 : (arr_15 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))))) : 1)))));
        var_30 = 1760123198;
    }
    var_31 = var_8;
    #pragma endscop
}
