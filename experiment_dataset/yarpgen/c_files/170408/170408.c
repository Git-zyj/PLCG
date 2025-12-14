/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((min(((var_4 ? var_17 : var_2)), (var_7 && 1))), (((var_12 % var_1) ? ((min(1, var_1))) : var_0))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_20 = (((!var_5) ? 9922501233117538537 : ((min((max(var_13, 255)), 1)))));
        var_21 += ((!((max(((((arr_1 [i_0]) || var_2))), -24576)))));
        var_22 = (((2 % 1) >= ((-(~var_5)))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_23 = (1007880852 && var_7);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_24 = ((((1 * ((1 ? var_7 : var_15))))) ? (2147483647 <= 5271037669801125034) : -var_13);
                            var_25 = (min(var_25, ((((((!(~1)))) - ((var_8 + (~var_8))))))));
                        }
                    }
                }
            }
            arr_14 [i_0] [i_0] = var_10;
            var_26 = ((~((var_10 / (arr_13 [i_0] [i_0] [i_0] [i_1] [9])))));
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    {
                        var_27 = (17 & 8524242840592013082);
                        var_28 = (((-2147483647 - 1) <= 1));

                        for (int i_8 = 2; i_8 < 14;i_8 += 1) /* same iter space */
                        {
                            var_29 = (min(((((arr_15 [i_8] [i_5]) > -5055092568812293875))), ((((max((-2147483647 - 1), var_4))) ? -var_0 : var_5))));
                            arr_26 [i_0] [i_5] [5] [5] [i_8] = (((var_0 * 1257065149) || ((max(15394767677793438514, 127)))));
                        }
                        for (int i_9 = 2; i_9 < 14;i_9 += 1) /* same iter space */
                        {
                            arr_30 [14] [i_0] = var_6;
                            var_30 = (max(var_30, ((max(2193576929539823368, 45503)))));
                            arr_31 [i_5] [i_5] [i_6] &= (min(9922501233117538533, -2193576929539823369));
                        }
                        var_31 = (36427 + 63);
                        var_32 += 58;
                    }
                }
            }
            var_33 = 2438236872;
            var_34 = ((~(min(2193576929539823374, 6138625958413183045))));
        }
    }
    var_35 = (((var_5 % -1) + (max(var_11, (var_5 + var_12)))));
    var_36 = (1 - 2193576929539823368);
    #pragma endscop
}
