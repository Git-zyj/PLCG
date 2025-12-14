/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_8));
    var_12 = (min((((((-32766 ? var_5 : 50279))) ? (var_6 < var_10) : (1 * var_7))), ((((var_3 ? var_0 : var_10)) | (1073741824 * var_10)))));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_2 [8] = ((((arr_1 [6]) < (arr_0 [i_0] [i_0 - 2]))) ? ((-var_5 | ((-(arr_0 [i_0 + 1] [i_0]))))) : (((max((var_10 || -31193327), (240 != -31193326))))));
        var_13 = (min(((((-2952652120100261119 % -2) > var_4))), (((var_9 <= var_1) * (min(31193332, (arr_1 [i_0])))))));
        var_14 = ((((((-119 >= -5044628480835742627) ? (arr_0 [i_0 + 1] [i_0 - 1]) : ((((arr_1 [i_0]) ? var_3 : (arr_1 [i_0]))))))) || (arr_0 [i_0 - 1] [i_0 - 1])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {
            arr_7 [i_2] [i_2] = ((+((((arr_3 [i_1]) <= -497561504)))));
            arr_8 [i_2] [i_2] = (2069912827 >= 4094);
        }

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    {
                        var_15 = (min(var_15, ((((((var_0 ? 2681920200 : var_0))) < -1045755426214187812)))));
                        var_16 = var_5;
                        arr_16 [i_5] [i_1] [i_4] [i_5] [14] [i_1] = (arr_5 [i_5] [i_3]);
                        var_17 ^= (arr_9 [i_4 - 2] [i_5]);
                        arr_17 [i_5] [i_4] [i_5] [i_3] [i_1] = (((arr_13 [i_4 + 1] [i_3] [1]) | -var_9));
                    }
                }
            }

            for (int i_6 = 3; i_6 < 15;i_6 += 1)
            {
                var_18 = ((((-(arr_15 [i_3] [i_3]))) == -31193344));
                var_19 = ((!(var_3 / var_5)));
            }

            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                var_20 = ((21 >> ((((arr_13 [i_7] [14] [i_1]) != (arr_18 [i_1] [i_3]))))));
                arr_24 [i_7] [i_7] = (arr_18 [i_1] [4]);
                var_21 = (max(var_21, ((((((99 ? 6228 : -115))) ? (((~(arr_9 [i_1] [i_3])))) : (arr_20 [5] [4] [i_7] [i_1]))))));
            }
            for (int i_8 = 1; i_8 < 14;i_8 += 1)
            {
                var_22 -= ((-(((var_5 + 9223372036854775807) >> (2105762356493114570 - 2105762356493114561)))));
                arr_27 [i_3] [i_8] = var_1;
            }
            arr_28 [i_1] = ((1183614910 ? var_8 : (arr_10 [i_1] [i_3] [i_3])));
            var_23 = (min(var_23, 15360));
        }
        var_24 = (max(var_24, (arr_20 [8] [i_1] [3] [3])));
    }
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        arr_32 [12] |= 2105762356493114563;
        arr_33 [i_9] [i_9] = (((((~var_6) ? (405105926035075469 == -497561492) : (arr_5 [i_9] [i_9]))) < (((((14336 ? 1073741832 : var_5))) ? ((-1073741822 ? var_7 : 4092)) : ((max((arr_10 [5] [i_9] [i_9]), 32756)))))));
    }
    #pragma endscop
}
