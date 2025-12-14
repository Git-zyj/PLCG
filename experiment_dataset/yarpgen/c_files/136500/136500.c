/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_3, -11669));
    var_12 = ((((-11653 - ((var_9 ? 120858789 : -7987800251191201782))))) ? (((var_4 ? var_7 : (120858785 + 4174108522)))) : ((((min(913998699, 653967333))) ? ((var_0 ? var_10 : var_6)) : (var_5 & var_4))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = var_5;
        var_13 = (max(-11639, 28466));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_14 = ((((((min(var_7, var_3))))) ^ ((4174108494 ? -653967333 : (((arr_3 [i_1] [i_0]) ? (arr_6 [i_0] [i_1] [i_1]) : -2150))))));
            arr_8 [i_1] = (arr_0 [2] [i_1]);
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_15 = ((arr_6 [i_0] [i_0] [i_2]) ? ((4174108506 ? (max(614218230, 653967341)) : (((var_2 ? (arr_3 [i_0] [i_2]) : var_0))))) : (min(((((arr_1 [i_2]) ? (arr_2 [i_0]) : var_3))), (((arr_5 [i_0] [i_0] [i_0]) ? (arr_10 [i_2] [i_0]) : 17264)))));

            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                arr_15 [i_0] [i_0] = ((-(((((1 ? (arr_5 [i_3] [i_2] [i_3]) : (arr_11 [i_3] [i_2] [i_0] [i_0])))) ? var_1 : var_4))));
                arr_16 [i_0] [i_2] [i_3] [7] = 7987800251191201782;
                arr_17 [i_0] = (32767 == 11653);
            }
            for (int i_4 = 2; i_4 < 8;i_4 += 1)
            {
                arr_20 [i_4] [i_2] [i_2] = (~((var_8 ? (arr_0 [i_4] [i_4 + 2]) : (arr_6 [i_4] [i_2] [i_0]))));
                var_16 = (((arr_11 [i_4 - 2] [i_4 + 1] [i_4 + 1] [i_2]) ? (min((arr_11 [i_4] [i_4 - 2] [i_2] [i_0]), (arr_11 [i_4] [i_4 - 1] [i_4] [i_4 + 1]))) : (arr_11 [i_4 - 2] [i_4 - 1] [i_4] [i_4])));
            }
        }
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_17 = ((!((((65507 ? 2147483643 : 48283))))));
        arr_25 [i_5] = ((((!(arr_24 [i_5]))) ? ((11632 - (arr_24 [i_5]))) : (0 < 1)));

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_28 [i_6] = (((arr_26 [i_5] [i_6]) <= ((((((arr_24 [i_6]) ? var_1 : -31564)))))));
            var_18 = ((~(((arr_26 [i_5] [i_5]) ? (((arr_24 [i_5]) ? (arr_21 [i_6]) : (arr_27 [i_5]))) : ((min(4294967295, 1)))))));
            var_19 -= ((((((((arr_21 [i_5]) + (arr_26 [i_5] [i_6]))) + (((var_2 ? (arr_21 [i_5]) : var_2)))))) ? ((((arr_22 [i_5] [i_6]) - ((var_10 ? (arr_21 [i_6]) : var_2))))) : (min((arr_26 [i_5] [i_5]), 17021918952745047848))));
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            var_20 ^= (((32767 + var_1) / (-2147483647 - 1)));
            var_21 = (min(49, (510 < -10)));
        }
        var_22 = ((((((4294967288 ? var_5 : (arr_23 [i_5] [0]))) | (arr_29 [i_5] [i_5] [i_5]))) / (((min(var_2, ((((arr_30 [i_5] [i_5]) || (arr_32 [i_5]))))))))));
    }
    #pragma endscop
}
