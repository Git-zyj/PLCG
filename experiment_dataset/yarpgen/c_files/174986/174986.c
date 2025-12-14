/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_18 = ((-((((((arr_3 [i_0]) ? var_15 : (arr_0 [i_0])))) ? (((arr_2 [i_0 - 1]) * (arr_1 [i_0] [i_0]))) : -806713831))));
        arr_4 [i_0] [i_0] = 15;
        var_19 = (2465 == 15);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_20 = (var_4 | var_16);
        var_21 = (((122 / 18446744073709551575) ? ((-(-10607 - 2469))) : -170847433));
        var_22 = (min(var_22, ((((max(2147483641, -10592)) >= ((((arr_0 [i_1]) >= ((806713821 ? -170847402 : -806713854))))))))));
        var_23 = (min(var_23, ((((((min(var_8, 806713855)) / 3465404483910885246)))))));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_24 = var_6;
        var_25 = (((((arr_9 [i_2] [i_2]) & 1)) % (arr_9 [i_2] [i_2])));
        arr_10 [i_2] = (((arr_9 [i_2] [i_2]) ? (15242467404303994825 % 1125198440) : 6876271984422388621));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_26 = -2337290958;
                                arr_24 [i_4] [i_5] [i_5] [i_4] [i_3] [i_4] = ((+((((((arr_18 [i_4]) * (arr_17 [11] [i_5] [i_6])))) ? ((((arr_12 [i_2] [i_2]) ? var_9 : -806713854))) : (6876271984422388605 / 1)))));
                                var_27 &= 63071;
                            }
                        }
                    }
                    arr_25 [i_4] [i_3] [i_3] [i_4] = 7;
                }
            }
        }
        var_28 -= ((+((var_14 ? (~-10607) : (6 && 17400712644428712641)))));
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                {
                    var_29 = ((((((-98 + 2147483647) << ((((-(arr_0 [i_7]))) + 8080))))) ? (arr_22 [i_9] [i_8] [i_8] [i_8] [i_8] [i_9]) : (((2962894881905080124 * 1) ? var_2 : (max(6876271984422388616, 12850))))));
                    arr_33 [i_7] [i_8] [i_9] = (((arr_22 [i_9] [i_9] [i_9] [i_9] [14] [i_8]) ? (var_7 + 8728) : (2081821628 / -116)));
                    var_30 = var_5;
                    var_31 = (arr_22 [i_9] [i_7] [i_8] [i_8] [i_9] [16]);
                    var_32 = 12826;
                }
            }
        }
    }
    var_33 = ((~(((170 ? -2193791794972522417 : -2081821626)))));
    #pragma endscop
}
