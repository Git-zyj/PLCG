/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_11 = ((21350 << (((arr_2 [i_0 - 1]) - 99))));
                    var_12 ^= (min(((min((arr_9 [i_0 - 1]), (arr_2 [i_0 - 1])))), ((3573665717987761975 ? (((arr_5 [i_0] [i_0] [i_2]) & (arr_9 [i_0]))) : 32))));
                    var_13 &= min(((((arr_5 [i_0] [i_0] [i_1]) ? (max(var_2, (arr_8 [i_1] [i_2] [i_1] [15]))) : (max((arr_0 [i_1]), 120))))), 15);
                    var_14 = (max(var_14, ((min((max((arr_10 [i_0 - 1] [i_0 - 1]), (arr_10 [i_0 + 1] [i_0 + 1]))), ((((min(var_10, 168)) == 2))))))));
                }
            }
        }
    }
    var_15 = ((((max(var_10, (213 < 14873078355721789654)))) ? (((!((min(var_10, var_2)))))) : ((((min(var_9, var_1))) | (18014398492704768 <= 3931995129249904317)))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {

                /* vectorizable */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    arr_21 [i_3] [13] [i_3] [i_3] = var_9;
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                arr_27 [i_3] [i_3] [i_3] [i_6] [i_7] = 131;
                                var_16 &= ((-32 & (arr_22 [0] [i_6] [i_6] [i_6] [i_6] [i_6])));
                                var_17 = (min(var_17, (arr_25 [i_6] [i_6] [i_6 + 1] [i_6] [i_6] [i_6 - 1])));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                {
                    arr_31 [i_3] = (arr_3 [i_8]);
                    var_18 = (min(var_18, (((((var_8 >= (arr_30 [1] [i_4] [i_8]))) ? (arr_30 [i_3] [i_3] [i_3]) : 36764)))));
                    var_19 &= ((arr_12 [14] [i_4]) ? (arr_30 [i_8] [13] [i_3]) : (arr_10 [5] [i_4]));
                }
                for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                {
                    var_20 = (~var_3);
                    var_21 = (max(((((((var_9 ? (arr_7 [i_9]) : var_9))) && var_3))), (max((arr_25 [i_3] [i_3] [i_9] [14] [i_4] [i_4]), (arr_11 [i_3])))));
                }
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 21;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        {
                            var_22 = ((((max((~var_9), (36762 && var_9)))) & (min(1, 536870656))));
                            var_23 = (max((arr_0 [i_3]), ((((arr_0 [i_11]) <= (arr_0 [i_3]))))));
                            var_24 = (max(var_24, (arr_16 [i_3])));
                        }
                    }
                }
            }
        }
    }
    var_25 = (var_9 ? (min((var_2 && 12903506622919266480), ((var_7 ? var_5 : var_10)))) : var_5);
    #pragma endscop
}
