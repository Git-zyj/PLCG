/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_13 = 1495539812;
        var_14 = (min(var_14, (((((((-1495539813 < (((arr_2 [i_0] [i_0]) * (arr_3 [i_0] [i_0]))))))) | 0)))));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_15 = ((1 ? (max(-16, (arr_4 [i_1 + 1] [i_1 - 2]))) : (((((arr_4 [i_1 + 2] [i_1 + 2]) || (arr_4 [i_1 + 2] [i_1 + 1])))))));
        var_16 = (max((((125 ? (arr_6 [i_1 - 2]) : 6179237891912846667))), (min((arr_4 [i_1 + 1] [i_1 - 1]), (arr_6 [i_1 - 2])))));
        var_17 += ((((((arr_6 [i_1 + 2]) ? (!1495539812) : ((min(-16, 48202)))))) ? (((-38 ? -6 : -14))) : (arr_5 [i_1])));
    }
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    {
                        arr_16 [i_2] [i_3] [i_4] [i_5] = ((53132 ? (((((min(var_10, 65535))) == ((((arr_1 [i_2]) <= (arr_8 [i_3] [i_3]))))))) : 0));
                        var_18 = (((!0) / (((((arr_12 [i_2] [i_3] [i_4] [1]) - (arr_0 [i_4]))) ^ (!var_10)))));

                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            arr_20 [i_2] = (min(var_7, (((arr_19 [i_2] [i_3] [i_4] [i_5] [i_6]) ? 17327 : ((5261209063041568262 ? (arr_7 [i_2]) : 1))))));
                            var_19 = ((~(((arr_9 [i_2] [i_2 + 1]) ? ((min(15, 65535))) : (!-1286994544)))));
                            arr_21 [i_6] [i_6] [i_5 - 1] [i_2] [i_4] [i_3] [i_2] = var_12;
                            var_20 = (max(((((1 <= (arr_15 [i_3] [i_4] [i_5] [i_3]))) ? -272820297 : (max(var_12, (arr_15 [i_2] [11] [i_6] [i_2]))))), ((min(((var_8 - (arr_6 [i_3]))), (arr_13 [i_6] [i_4]))))));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 0;i_8 += 1)
            {
                {
                    arr_28 [i_2] [i_7 - 2] [i_2] = (!127);
                    arr_29 [i_7 - 1] [i_2] [i_8] [i_7] = ((~(max((arr_23 [i_2]), (arr_26 [i_2] [i_2] [i_2 - 1])))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                {
                    var_21 -= ((-(((-9223372036854775807 - 1) ? (arr_32 [i_2 + 3] [i_2 + 3] [i_2 + 2] [i_2 - 1]) : (arr_19 [i_2] [i_2 + 3] [i_2 + 2] [i_2] [i_2])))));
                    var_22 = (((arr_9 [i_2] [i_2]) != var_5));
                    var_23 = (max((arr_31 [i_2]), ((((min(var_8, 1768767986))) ? ((var_6 ? 52148 : -466597731)) : -11))));
                }
            }
        }
        var_24 = var_1;
        var_25 = 1;
    }
    var_26 = var_5;
    /* LoopNest 2 */
    for (int i_11 = 1; i_11 < 1;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            {
                arr_41 [10] [i_12] &= 7890841192278890045;
                arr_42 [i_11] [i_12] = (((max(116, ((1 - (arr_0 [i_11]))))) ^ 2047));
                arr_43 [i_11] = (min((((((arr_0 [i_11]) ? 6 : 369914599)) + (arr_39 [i_11 - 1]))), 255));
                var_27 ^= (var_4 && var_0);
                arr_44 [i_11] [i_11] [i_11] = ((((~(arr_35 [i_11 - 1] [i_11]))) ^ (max((~var_7), ((var_12 ? (arr_6 [i_11]) : 0))))));
            }
        }
    }
    #pragma endscop
}
