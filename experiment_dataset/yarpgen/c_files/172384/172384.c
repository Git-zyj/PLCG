/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += 9223372036854775807;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = (min(var_15, ((((min((arr_1 [i_0]), (((arr_1 [i_0]) ? 1640810436 : var_1)))) < var_10)))));
        arr_2 [i_0] = var_11;

        for (int i_1 = 1; i_1 < 12;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] = ((((((arr_5 [i_0] [i_1 + 1] [i_0]) ? (min(var_4, -7366389351415517622)) : ((((!(arr_3 [i_0])))))))) ? (~111) : (((((134 ? var_11 : 3214503240005513029))) ? ((var_4 ? 562529907 : (arr_4 [10] [i_0] [i_1]))) : ((~(arr_4 [i_0] [i_0] [i_0])))))));
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        {
                            arr_16 [i_0] [i_1] [i_0] [i_3] [i_4] [i_4] = (((max(((((arr_15 [i_0] [i_0] [i_0] [i_1] [i_2] [i_0] [i_0]) + 2654156864))), ((var_6 ? var_3 : var_4)))) ^ (((((min(57, var_7))) ? (arr_15 [i_1] [i_1 + 3] [i_0] [i_1] [i_1 + 1] [i_2] [i_2 + 1]) : (arr_1 [i_3]))))));
                            arr_17 [i_0] [i_0] [i_2] [i_0] [i_4] = ((!((((arr_14 [i_1 - 1]) ? (arr_14 [i_1 + 1]) : (arr_14 [i_1 + 1]))))));
                            arr_18 [i_0] [i_0] [i_1 - 1] [i_2 + 2] [i_3] [0] [i_4] &= (max((arr_8 [2] [0]), (arr_7 [6])));
                            arr_19 [i_0] [i_0] [i_2 - 1] [i_3] [i_4] = (max((((arr_5 [i_2] [i_2] [i_0]) ? (arr_5 [i_1 + 1] [i_2] [i_0]) : var_11)), 6720));
                            var_16 = (((min((((var_1 ? (arr_10 [i_0] [i_0] [i_2 + 1] [i_3] [11] [i_4]) : (arr_5 [i_2 + 2] [i_3] [i_0])))), (((arr_1 [i_1 - 1]) + var_6)))) < ((max(121, (arr_3 [i_0]))))));
                        }
                    }
                }
            }
            var_17 = -1;
        }
        for (int i_5 = 1; i_5 < 12;i_5 += 1) /* same iter space */
        {
            var_18 = (((((602319912 ? 22 : (arr_0 [i_0] [i_5])))) ? ((((!((min((arr_12 [i_0] [i_0] [i_0]), var_4))))))) : (((arr_3 [i_0]) ? (arr_10 [i_0] [i_0] [i_0] [i_5] [i_5] [i_5]) : var_0))));
            arr_22 [i_0] [i_5 + 1] [i_0] = ((((min((4518 || 37548), 2654156856))) ? 29829 : ((var_11 << (((arr_4 [i_0] [i_0] [i_0]) - 4008502774))))));
            arr_23 [i_0] [i_0] [i_5] = (((((max((arr_1 [i_5 + 3]), 63488)))) > (max(5225491002544495642, 65535))));
        }
        arr_24 [i_0] = (max(var_8, (arr_4 [i_0] [i_0] [i_0])));
        var_19 = (min(((((var_12 ? 24 : 184)) + (arr_20 [i_0]))), (((((~(arr_8 [i_0] [i_0]))) >= -23374)))));
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        arr_27 [i_6] = ((-168670384 ? -108 : -1111));
        arr_28 [i_6] [22] = (((((15 ? (max(3140975272711819208, var_13)) : (((7 ? (arr_25 [i_6]) : -3)))))) ? ((max((((arr_26 [i_6] [i_6]) ? 3856 : (arr_25 [i_6]))), ((var_11 ? (arr_25 [i_6]) : 53))))) : ((-17825 - (arr_26 [i_6] [i_6])))));
        var_20 -= 2;
    }
    #pragma endscop
}
