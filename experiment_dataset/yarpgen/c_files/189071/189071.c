/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 7148330194448110722;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_13 = 60;
        var_14 = (max(((((!var_0) ? (((!(arr_0 [i_0])))) : (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0 + 1]) : 1))))), (max((arr_0 [i_0 + 3]), (min(7148330194448110722, var_10))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_15 = ((((((32767 + var_10) ? (arr_4 [i_1]) : (((7 ? var_11 : -633)))))) ? ((7 & (((-(arr_0 [i_1])))))) : var_2));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        var_16 &= (max(var_7, (((-((((arr_8 [2] [0] [0] [i_4]) != var_3))))))));
                        var_17 = (min(((((arr_3 [i_3 - 1]) ^ (arr_3 [i_3 + 2])))), (min((arr_5 [i_3 + 1] [i_2] [i_3 - 1]), 1))));
                        var_18 = ((~((~(arr_0 [i_4])))));
                    }
                }
            }
        }
        var_19 = ((-659 ? (((18446744073709551615 * 11298413879261440886) >> ((((arr_8 [i_1] [1] [i_1] [i_1]) && 7))))) : (~18446744073709551615)));
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_20 = ((var_7 ? (arr_17 [i_5] [i_5]) : ((~(arr_0 [i_5])))));

        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            var_21 = ((((((arr_23 [i_5] [i_6] [i_6]) > (arr_23 [i_5] [i_5] [i_5])))) >= (arr_23 [i_6] [i_6] [i_5])));
            var_22 = ((((-(arr_16 [i_5] [i_5]))) != (min(0, (arr_1 [i_5] [i_5])))));
            var_23 = 473426608;
            var_24 = var_3;
            var_25 = ((((var_7 ? (11298413879261440893 & 0) : 127)) | (((((((arr_20 [i_6]) & (arr_18 [i_5])))) ? ((max(32548, 2))) : (~1))))));
        }
    }
    #pragma endscop
}
