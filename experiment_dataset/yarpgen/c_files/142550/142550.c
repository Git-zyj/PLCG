/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (min(var_5, ((var_7 * (((var_10 >> (var_7 - 18015815850752170613))))))));
    var_12 = var_5;
    var_13 = (var_4 ? (((((var_3 < 54) > var_10)))) : (min((var_1 ^ var_7), var_8)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = var_4;
                arr_7 [i_0] = (max((((((max((arr_2 [i_0 - 3]), var_3)))) ^ ((~(arr_3 [i_0]))))), ((((~var_3) ^ (arr_2 [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 0;i_4 += 1)
                            {
                                arr_14 [i_0] = (arr_9 [i_0] [i_1] [i_2] [i_4 + 1]);
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] = ((-(((~var_10) * (arr_0 [15])))));
                            }
                            for (int i_5 = 0; i_5 < 25;i_5 += 1)
                            {
                                arr_20 [i_0 + 2] [11] [i_2] [i_0] [i_5] = ((((((((var_0 ? (arr_9 [i_0] [i_1 - 2] [i_2] [13]) : (arr_10 [i_2] [i_0])))) + (((arr_13 [i_0] [i_1] [i_2] [i_3] [i_5]) ^ -19738))))) || (arr_1 [i_5])));
                                arr_21 [i_5] [i_3] [i_0] [i_0] [i_1] [i_0] = ((((((((arr_8 [i_0] [i_0] [i_2] [i_5]) - (arr_4 [i_0] [i_1])))))) * ((var_1 / (arr_11 [i_3] [i_0] [i_0])))));
                                var_14 = (max(var_3, (arr_18 [i_3 + 2] [19] [i_1 - 2] [i_3 - 2] [i_0 - 3])));
                                arr_22 [i_0] [i_1] = (((((((!(arr_4 [i_0] [i_1]))) || var_6)))) + ((((((arr_9 [i_0] [i_2] [i_3] [i_5]) ? var_5 : (arr_5 [i_0] [i_2] [i_3])))) ? var_2 : (arr_11 [i_5] [i_0] [7]))));
                            }
                            for (int i_6 = 0; i_6 < 25;i_6 += 1)
                            {
                                var_15 = (max(var_15, ((min(((((arr_16 [22] [i_1] [i_3] [i_6]) - (arr_11 [i_0 + 1] [8] [i_0])))), ((var_5 ? -78 : -29)))))));
                                var_16 = (arr_16 [i_0] [i_0] [i_1 + 1] [i_3 - 2]);
                            }
                            for (int i_7 = 3; i_7 < 21;i_7 += 1)
                            {
                                var_17 = (max((((arr_24 [i_0 + 2] [i_0 + 2] [10] [i_3] [i_3] [i_7]) / (arr_24 [i_0] [i_1 - 1] [i_2] [i_3 + 2] [i_7] [i_0]))), (((!(arr_8 [6] [i_0] [i_0] [i_0]))))));
                                var_18 = (min(((((arr_11 [i_0] [i_0] [i_3]) ^ (arr_18 [i_0 - 1] [i_1 - 1] [i_0 - 1] [i_3] [i_7])))), ((~((var_2 ? (arr_18 [i_7] [i_3 + 2] [i_2] [i_1 + 1] [i_0]) : 18446744073709551615))))));
                                var_19 = (max((((arr_3 [i_7]) >> (var_1 - 10131422509955096883))), (arr_19 [i_0])));
                            }
                            var_20 = -101;
                            arr_27 [i_0] [24] [i_2] [i_1] [i_0] = (arr_9 [i_0] [i_2] [i_1] [i_0]);
                        }
                    }
                }
            }
        }
    }
    var_21 = (max(var_8, var_10));
    #pragma endscop
}
