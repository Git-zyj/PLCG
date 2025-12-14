/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((((max(((1229671241 ? 4199615397 : 3095986871)), 32106))) ? var_11 : ((((((-93706610237022310 ? var_2 : var_5))) ? ((var_8 << (var_13 - 5425895352876959491))) : var_5)))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            var_17 &= (((1198980425 ? 3095986854 : 1)) / (min((arr_2 [i_1 + 2] [i_1 - 2]), (((arr_2 [13] [13]) ? var_11 : (arr_3 [11]))))));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_18 = (max(var_18, (arr_2 [i_0] [1])));

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_19 = (max(var_19, ((((((((arr_2 [i_2 + 3] [i_2 + 3]) > var_13)))) / (((arr_0 [7]) ? ((var_3 ? (arr_1 [5]) : (arr_6 [i_1]))) : (arr_11 [i_0]))))))));
                            var_20 = (max(var_20, (((!((max((arr_8 [i_0] [2] [i_0] [i_1 - 1] [10]), (arr_8 [i_0] [i_1] [i_1] [i_1 - 4] [8])))))))));
                            var_21 ^= ((3095986871 ? ((var_3 ? ((~(arr_11 [i_0]))) : (arr_6 [i_0]))) : var_12));
                        }
                        var_22 = (max(var_22, 1588413071));
                        var_23 = (min(var_23, ((max((max((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_1] [i_1]))), (min(((var_14 ? (arr_12 [2]) : (arr_2 [8] [i_3]))), ((((arr_7 [1] [5]) ? (arr_2 [3] [i_1]) : 15613))))))))));
                    }
                }
            }
        }

        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            var_24 = (max(var_24, ((max((arr_3 [i_5 + 2]), (arr_3 [i_5 + 2]))))));
            var_25 = (min(var_25, ((((max((arr_15 [i_5 - 1] [i_5 - 1] [i_5 + 1]), (arr_16 [i_0] [i_5 + 1] [i_0])))) ? var_13 : (arr_3 [2])))));
        }
        for (int i_6 = 1; i_6 < 13;i_6 += 1)
        {
            var_26 = (min(var_26, (42 && 2)));
            var_27 = (min(var_27, (((2706554234 < (((arr_6 [i_6 + 1]) ? (arr_6 [i_6 + 1]) : var_5)))))));
        }
        var_28 = (max(var_28, var_1));
        var_29 = (min(var_29, var_13));
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                {
                    var_30 += (((var_5 >= (var_3 == var_8))));
                    var_31 = (min(var_31, ((min(((max(((var_12 ? var_14 : var_6)), (arr_20 [i_7] [11])))), var_15)))));
                }
            }
        }
        var_32 = (max(var_32, var_9));
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        var_33 = (min(var_33, ((max(((-67 ? 48566 : (max(14598, 11430987937373654447)))), (((((arr_22 [15]) ? var_3 : var_6)))))))));
        var_34 += (arr_9 [i_10] [i_10] [4] [i_10] [i_10]);
    }
    var_35 ^= var_0;
    #pragma endscop
}
