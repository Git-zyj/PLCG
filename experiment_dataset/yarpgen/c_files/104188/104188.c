/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    var_15 = (max(var_15, ((min((((!var_2) - (var_7 & var_0))), ((((((var_8 ? 4872 : 30720))) || 0))))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (!64156);
        var_16 &= ((((((var_7 << var_6) * (((~(arr_1 [i_0]))))))) ? ((-0 << ((((min(var_6, (arr_1 [15])))) - 53)))) : (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    arr_13 [i_2] [19] = 1165637921356670307;
                    var_17 = 4294967266;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                var_18 = ((((min((var_5 % var_0), (min(15, var_7))))) ? var_4 : (((((var_1 / (arr_16 [i_1] [i_2] [i_2] [i_5])))) ? (~var_7) : (arr_4 [i_1])))));
                                arr_22 [i_1] [3] [i_2] [i_4] [i_5] = 288225978105200640;
                                arr_23 [i_1] [11] [i_3] [2] [17] = (((((var_9 ? var_5 : ((var_13 ? (arr_21 [i_5] [i_5] [i_5] [13] [i_5]) : -1031996522))))) ? (7455 * 32761) : (min(var_13, ((max((arr_10 [i_1] [i_2] [i_2] [i_2]), (arr_20 [i_1] [i_2] [i_5]))))))));
                            }
                        }
                    }
                }
            }
        }
        arr_24 [i_1] = ((((1151795604700004352 == (((arr_17 [i_1] [i_1] [i_1] [i_1]) ? var_12 : var_3)))) ? (((((((arr_4 [0]) + var_13)) == (~0))))) : ((-3546101669 ? var_5 : 11))));
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        arr_28 [i_6] [7] = (((arr_3 [i_6]) ? ((-(arr_3 [i_6]))) : (((arr_7 [i_6] [i_6] [i_6]) >> (((arr_3 [i_6]) + 80))))));
        var_19 ^= (-597136632700559508 ? (arr_27 [0] [i_6]) : (((var_3 ? var_12 : 6257732699409075866))));
    }
    for (int i_7 = 1; i_7 < 15;i_7 += 1)
    {
        var_20 = (arr_19 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]);
        var_21 = (min(var_21, (((((-((0 ? var_6 : 65535)))) % ((var_4 ? ((9007199254740991 ? -1 : 873)) : var_2)))))));
    }
    #pragma endscop
}
