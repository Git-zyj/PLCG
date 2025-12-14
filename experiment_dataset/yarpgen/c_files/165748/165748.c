/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 |= (min((((arr_3 [i_0]) ? ((~(arr_2 [i_0] [i_1]))) : var_8)), -23160));
                var_12 = ((((arr_3 [i_0]) ? (((max(var_10, -23170)))) : 2641786271)));
                var_13 |= 239;
                var_14 = (arr_1 [10]);
            }
        }
    }

    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        var_15 = (~(((((min(14, 23166)))) / (max((arr_8 [i_2] [i_2]), (arr_7 [i_2 + 1] [i_2]))))));
        arr_9 [i_2] = ((((arr_8 [i_2 - 1] [i_2 + 1]) / (arr_6 [i_2 + 1]))));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] [i_3] = ((var_4 <= (arr_3 [16])));
        var_16 += ((397317613 ? ((((!(-9223372036854775807 - 1))))) : 9223372036854775789));
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_17 = 3358;
        var_18 = min((max(-115, var_6)), (min((arr_6 [i_4]), (arr_6 [i_4]))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_19 = (((arr_18 [i_5]) && (arr_20 [i_5] [i_5])));

        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            var_20 &= -1789296711;
            arr_24 [i_5] = (((~var_3) ? ((((arr_23 [i_6] [i_6] [i_5]) ? (arr_8 [i_5] [i_6]) : (arr_19 [i_5])))) : (arr_23 [i_6] [i_5] [i_5])));
            arr_25 [i_6] [i_5] [8] = ((637493010 ? -23179 : -898526241));
            var_21 = 17;
        }
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            var_22 ^= -17;
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        {
                            var_23 = var_6;
                            var_24 = (((arr_6 [i_5]) ? 576460752269869056 : (((0 ? 6148313385978272719 : 12)))));
                            var_25 *= (((((697986301 ? 1 : 1555364986537701849))) ? (478032133 ^ -2147483645) : ((((arr_19 [i_5]) / 235694308)))));
                        }
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            var_26 = (((~var_5) ? (-1 <= var_3) : (arr_18 [i_5])));
            var_27 = -1665514652;
        }
    }
    #pragma endscop
}
