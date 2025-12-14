/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = min(var_4, var_5);

    for (int i_0 = 2; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = max((min(16714100582326591013, ((max(-2147483634, 0))))), ((max(var_9, (arr_3 [i_0] [i_0])))));
        var_12 -= ((((((((1 ? var_3 : 8))) ? var_5 : (arr_0 [i_0])))) && (((~(max(1732643491382960602, var_0)))))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_13 += ((((((arr_8 [i_1] [i_1 - 2] [i_1]) <= ((((arr_6 [i_0]) > (arr_9 [i_3] [i_2] [i_1] [i_0 + 1]))))))) * ((((min(var_2, 159))) | (min(-1, var_5))))));
                        var_14 -= ((((232 ? 182 : 1))) ? var_2 : ((((max((arr_14 [i_3] [i_1]), var_7))) ? var_1 : (var_2 - var_9))));
                    }
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 10;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                {
                    var_15 *= min(((var_9 / (arr_5 [i_5 - 1] [i_5 - 3] [i_4 + 1]))), (!18446744073709551615));

                    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        var_16 = min(((((min(255, (arr_0 [i_6])))) * (!88))), (max((var_0 > var_3), (max(var_4, 251)))));
                        var_17 *= (-11 == -2145386496);
                        var_18 = (max(var_18, (((-40384756 < ((((((~(arr_25 [i_4] [i_5] [i_5] [i_4])))) || var_5))))))));
                        var_19 = (min(var_19, (((((min(1, 28))) & (max(var_6, (arr_19 [9] [i_5] [i_6]))))))));
                    }
                    for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                    {
                        var_20 *= (max((((((1 << (arr_21 [i_4] [i_4] [i_4] [0])))) ? ((var_10 ? var_4 : (arr_22 [7] [i_4] [i_6] [i_8]))) : (var_8 | var_6))), ((((65531 / -40384755) ? 1 : var_5)))));
                        var_21 = (max(var_21, ((max(((-((74 ? (arr_2 [i_4]) : var_3)))), ((137 ? 8191 : 226)))))));
                        var_22 -= -27201;
                        var_23 = ((23 >> (37756 - 37735)));
                    }
                    var_24 = (((((-616262777 + 2147483647) >> (2147483621 - 2147483594))) / var_0));
                }
            }
        }
        arr_29 [i_4 + 1] [i_4 - 2] = ((((arr_23 [i_4 + 1] [i_4]) ? var_4 : var_8)) % ((((arr_23 [i_4 + 1] [i_4]) && var_1))));
        var_25 = (min(var_25, 255));
        var_26 = (((((var_2 || (arr_22 [i_4] [1] [i_4] [i_4])))) >> ((((22474 ? 40384749 : (min(var_4, var_2)))) - 40384746))));
    }
    for (int i_9 = 2; i_9 < 10;i_9 += 1) /* same iter space */
    {
        var_27 -= ((((-(max(2, 881051727)))) << (!255)));
        var_28 = (min((((((arr_17 [i_9]) ? 50681 : var_6)) << ((((0 ? var_10 : (arr_11 [i_9 - 2] [i_9]))) - 37004)))), -38));
        arr_34 [i_9] [i_9] = (((22494 - 9223372036854775807) & var_2));
    }
    #pragma endscop
}
