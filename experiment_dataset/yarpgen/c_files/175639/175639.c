/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_4;
        var_18 = ((-((-(min(var_16, 11357162950065080894))))));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_10 [i_1 - 1] [i_2] = (arr_3 [i_1]);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_19 += min(((11357162950065080891 << (24175 - 24139))), (min(27338, 7089581123644470722)));
                            var_20 = (-2147483647 - 1);
                            var_21 = (i_2 % 2 == zero) ? (((var_13 << ((((var_11 ^ (((arr_11 [i_2]) >> (-2390821976952961552 + 2390821976952961575))))) - 154))))) : (((var_13 << ((((((var_11 ^ (((((arr_11 [i_2]) + 2147483647)) >> (-2390821976952961552 + 2390821976952961575))))) - 154)) + 70)))));
                        }
                        for (int i_6 = 2; i_6 < 15;i_6 += 1)
                        {
                            var_22 = -8;
                            var_23 = ((+(((-2147483647 - 1) / (var_3 / var_6)))));
                            var_24 = ((!((99 || (((1095376034 ? 11357162950065080894 : 0)))))));
                        }
                        var_25 = (min(((min(var_5, (var_4 >= var_11)))), (((0 ? var_2 : 0)))));
                        arr_23 [i_2] [i_3] = ((((((arr_1 [i_4 - 1]) > var_17))) - 2147483647));
                    }
                }
            }
            var_26 = ((14 ? var_12 : 20));
        }
        var_27 = (min(((var_6 ^ (arr_20 [i_1] [i_1 + 3] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 2] [i_1 + 3]))), (min(-2147483646, (((arr_7 [i_1] [i_1 + 3] [i_1]) % 17999595413869842895))))));
    }
    for (int i_7 = 1; i_7 < 18;i_7 += 1) /* same iter space */
    {
        var_28 = (min(var_3, -704452500));
        var_29 -= (((arr_24 [i_7] [i_7]) ? 1437814004 : var_9));
    }
    for (int i_8 = 1; i_8 < 18;i_8 += 1) /* same iter space */
    {
        arr_28 [i_8] = ((((((arr_24 [i_8] [i_8 - 1]) ? var_4 : var_4))) ? (((arr_24 [i_8 + 1] [i_8]) ? 25675 : 14)) : (arr_24 [i_8 - 1] [i_8 + 1])));

        for (int i_9 = 3; i_9 < 18;i_9 += 1)
        {
            var_30 = (max(var_30, var_11));
            var_31 -= ((~(((!(arr_25 [14]))))));
        }
    }
    var_32 = ((+(max(var_4, ((-9223372036854775803 ? (-2147483647 - 1) : var_16))))));

    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        arr_36 [i_10] [i_10] = var_13;
        var_33 -= (((!30) ? (((min((61646 || var_13), var_14)))) : (arr_33 [i_10])));
        var_34 += (!var_8);
    }
    #pragma endscop
}
