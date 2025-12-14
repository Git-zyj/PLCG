/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = -1739260719;
        var_19 = ((((var_16 + var_18) >= 26281)));
        var_20 ^= ((33 ? ((((((-(arr_0 [i_0] [i_0])))) ? ((var_9 ? 2957581986 : (arr_0 [i_0] [9]))) : 1))) : var_11));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((174748212 ? ((1337385306 >> (((~0) + 4)))) : (((7433519245227675386 ? 1 : 0)))));
                    var_21 = ((1 && (((~(~var_4))))));
                    var_22 -= (((1409095221 / 1) * -8404250829985971434));
                    var_23 = (min(var_23, var_14));
                }
            }
        }

        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            arr_11 [i_0] [5] [i_0] = (((1 || 256052058) || ((((arr_10 [20] [i_3 - 2]) ? 2957582015 : var_15)))));
            /* LoopNest 3 */
            for (int i_4 = 3; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        {
                            arr_19 [i_3] [i_0] [i_5] [i_6] = ((!(((58 ? (arr_16 [i_0] [i_4 + 2] [i_3 - 2] [i_6 + 1]) : 144)))));
                            arr_20 [i_0] [i_5] [1] [i_5] [i_6] = ((24972 < (((!(arr_0 [i_6 - 1] [i_3 - 1]))))));
                            var_24 = (min(var_24, (((!(((-var_5 / (var_18 ^ 245)))))))));
                        }
                    }
                }
            }
        }
        for (int i_7 = 1; i_7 < 20;i_7 += 1)
        {
            var_25 = var_14;
            var_26 = ((((((1 | -65877727) ? -608731701 : (!164)))) | (min(((var_11 ? (arr_12 [i_0] [20] [i_0] [i_0]) : (arr_10 [i_0] [i_7]))), 1))));
            arr_25 [i_0] [i_7] = (!var_16);
        }
    }
    for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
    {
        var_27 *= -1;
        var_28 = ((!(((-(!8948023406847796533))))));
        var_29 ^= (arr_12 [8] [i_8] [i_8] [8]);
        arr_29 [i_8] = ((!((((arr_21 [i_8] [i_8] [i_8]) - 36377)))));
        var_30 = -191;
    }
    var_31 ^= var_8;
    #pragma endscop
}
