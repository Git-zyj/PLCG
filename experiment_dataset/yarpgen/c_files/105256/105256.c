/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((-((1024 ? 2147483647 : -102)))));
    var_14 = ((var_2 ? (!var_10) : var_11));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 = ((~((~((1052 ? 8796092760064 : var_0))))));
        arr_4 [i_0] = ((-(((var_8 ? 224 : var_2)))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_8 [i_0] = (((arr_1 [i_1]) ? ((-573779027 ? 2147483647 : ((min(var_12, 248))))) : (arr_6 [i_0] [i_1])));
            arr_9 [6] [i_0] [i_0] = var_4;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                var_16 = (arr_16 [i_0] [i_2] [i_3]);
                var_17 = var_2;
                var_18 *= (arr_7 [i_2] [i_3]);
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 7;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            arr_23 [i_0] [i_2] [i_2] [i_2] [i_2] = 201;
                            var_19 = (min(var_19, 55));
                            var_20 += (((!(arr_6 [4] [i_2]))));
                            var_21 = 398785339208216783;
                            var_22 = 43;
                        }
                    }
                }
            }

            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                var_23 = 70931694131085312;
                var_24 |= ((46592 ? 33423360 : -1596140298));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        {
                            arr_31 [i_0] [1] [i_0] [i_7] [i_8] = (((59 && 182) <= 1006632960));
                            var_25 = (((-var_1 == var_7) ? ((((154 ? (arr_12 [i_7]) : (arr_21 [i_6] [i_6] [i_6] [6] [i_6]))))) : (-124 + 59)));
                        }
                    }
                }
                var_26 ^= ((!((((((2122045538 ? 51 : (arr_14 [i_0] [i_2] [i_6])))) ? ((213 ? 4261543935 : 4261543935)) : 103)))));
                var_27 = (min(var_27, (((((min(var_2, var_11))) <= (arr_24 [1] [1] [1]))))));
            }
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                arr_36 [i_0] [i_0] [i_9] = (!var_1);
                var_28 = -1052;
                arr_37 [i_0] [i_2] [i_0] = ((((((17641409785238684424 ? var_9 : 255)))) != ((((arr_2 [7]) && var_12)))));
                var_29 = (max(var_29, ((((-((var_2 ? var_5 : 55))))))));
                var_30 = 249;
            }
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                var_31 += 67;
                var_32 = ((-(((!(arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
            }
            var_33 *= ((-((9738 ? 1 : var_8))));
        }
        for (int i_11 = 4; i_11 < 9;i_11 += 1)
        {
            arr_43 [0] [i_0] [i_11] = var_4;
            var_34 = 288230376151711744;
        }
    }
    #pragma endscop
}
