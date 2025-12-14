/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    var_12 = (-var_5 > var_3);

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_3 [i_0] = (min(var_8, ((-(arr_1 [i_0])))));
        var_13 = (((((1550068148 != (((1879048192 ? 0 : -5880)))))) ^ ((((((arr_2 [i_0]) ? 6807 : 5)) >= (arr_2 [i_0 + 1]))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_14 = (min(var_14, (((min((((6807 ? (arr_4 [6] [0]) : (arr_2 [1])))), ((9032221644123731230 | (arr_1 [i_1]))))) == ((max((max((arr_1 [i_1]), (arr_4 [i_1] [i_1]))), ((var_7 ? 6793 : -5646)))))))));
        var_15 = (max(var_15, ((((((1 ? 62184 : -6803))) && (arr_5 [i_1]))))));
    }
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        var_16 = (min(var_16, ((max((max((((arr_9 [18]) & var_7)), (arr_9 [6]))), (arr_10 [12]))))));
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    var_17 = (max(var_17, (arr_12 [15])));
                    var_18 = ((var_4 ? var_9 : (((((arr_11 [i_2] [i_3] [18]) ^ 4294967295)) & (arr_13 [i_2] [i_3])))));
                }
            }
        }
        arr_16 [i_2] = max((!6802), ((6127656500818712686 ? 3236413715558690030 : 0)));
        var_19 = (+((((1 ^ 0) != (arr_14 [i_2 - 1] [i_2 + 2] [i_2 - 1] [i_2 + 3])))));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 8;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    {
                        var_20 = ((-((((var_2 && (arr_26 [i_5] [i_6] [i_5] [i_8]))) ? (arr_23 [i_7] [i_5] [i_7 - 1] [10]) : (arr_12 [i_5])))));
                        arr_27 [i_5] [i_5] [i_5] [i_8] = ((min(var_4, ((-6793 ? 1 : (arr_25 [i_5] [i_5] [i_7]))))));
                        var_21 = (min(var_21, var_2));
                        var_22 = (((max(((max(-6803, 29273))), ((202 ? var_3 : var_1)))) | ((((arr_1 [i_7 + 3]) < ((var_2 ? (arr_0 [4]) : -6807)))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 7;i_10 += 1)
            {
                {
                    var_23 += var_3;
                    var_24 = (min(((((arr_14 [i_9] [i_10 + 1] [i_10 + 1] [i_10 + 1]) <= (arr_22 [10] [4] [i_5])))), (arr_23 [i_5] [i_5] [i_5] [i_5])));
                }
            }
        }

        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            arr_36 [i_5] [i_5] [10] = (max((max(-6793, 6793)), (arr_11 [i_5] [i_5] [13])));
            arr_37 [i_11] [i_5] = var_7;
            var_25 |= ((var_10 || (((~(arr_33 [1]))))));
            arr_38 [i_5] [i_11] = ((6803 ? 1 : 3738405478));
            var_26 = ((!(((((max(var_5, (arr_19 [i_5])))) ? ((var_10 | (arr_20 [i_5]))) : ((((arr_29 [i_5]) ? 17044 : (arr_34 [i_5])))))))));
        }
    }
    #pragma endscop
}
