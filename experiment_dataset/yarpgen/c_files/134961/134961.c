/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_11 % (((~var_4) ? -244 : var_4))));
    var_16 ^= 25;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_17 = (((!(((123 >> (164 - 145)))))));

                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        var_18 = ((4095 * ((-((-(arr_5 [0] [3] [0] [i_3])))))));
                        var_19 *= ((17179869183 ? 32462 : 656380383));
                    }
                    var_20 = (min(var_20, ((((17179869178 && var_1) ? (((!(arr_3 [i_0] [i_1])))) : (((-121 && (arr_3 [5] [2])))))))));
                    arr_9 [i_0] = -123;
                }
                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    var_21 = (max((~43), 108));
                    var_22 = (max(var_22, (((((-1632042786 ? 1 : -116)) - (((var_4 / var_10) ? var_14 : (((arr_1 [i_0]) ? (arr_2 [i_0] [i_0]) : 3683)))))))));
                    var_23 = max((((var_14 <= (max(var_2, -28))))), 67);
                    var_24 ^= -65;
                }
                var_25 += ((max((((254 >= (arr_10 [i_0] [i_0] [i_0] [i_0])))), (var_7 | var_12))));
            }
        }
    }

    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        arr_15 [i_5] = ((-(min(var_13, (max(994798849, var_11))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    arr_21 [i_5] [i_6] [i_5] = ((~(((50812 == (arr_19 [i_5]))))));
                    var_26 = ((((((-433213428094474528 ? (arr_18 [i_5] [i_6] [i_6] [i_7]) : 441868511)))) ? (min(((min(var_6, (arr_14 [i_5])))), (min(var_0, (arr_17 [8]))))) : 2105857199069690350));
                    arr_22 [i_5] = ((-7129542401059859684 == ((-(arr_18 [6] [6] [i_6] [5])))));
                    var_27 = var_9;
                    arr_23 [i_5] [i_5] [i_7] = var_7;
                }
            }
        }
    }
    var_28 += (~((((-34 || -49) && (!var_7)))));
    #pragma endscop
}
