/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((-(var_0 / var_5))) >> (((((var_3 / var_3) ? ((max(var_11, var_5))) : (!var_12))) - 43238))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_18 = (((((arr_0 [i_0 + 1] [i_0 + 1]) ? (((arr_1 [i_0 + 2]) & (arr_0 [i_0 + 2] [i_0]))) : ((~(arr_0 [i_0 + 2] [i_0]))))) & (arr_1 [i_0 + 2])));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 18;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_19 = arr_13 [i_1] [1] [i_4];
                            var_20 += (max((((108 & 108) ? -56 : -102)), ((((arr_9 [i_2] [i_2] [i_2] [i_4]) || ((max((arr_3 [i_0 + 1]), (arr_4 [13])))))))));
                        }

                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_21 = (max(var_21, (((((((-(arr_9 [i_0] [i_1] [i_5] [i_5]))) & (((arr_6 [i_0] [i_0] [5] [i_0]) >> (((arr_7 [10]) - 16181)))))) << ((min(((!(arr_5 [i_0] [i_5] [i_3 - 3]))), (((arr_9 [i_0] [i_0 + 2] [i_0] [i_5]) && (arr_12 [i_0 + 1] [i_1] [i_2] [i_5] [i_3 - 3] [i_5])))))))))));
                            arr_18 [i_0] [i_1] [1] [9] [i_5] = (((((((min((arr_8 [i_0] [i_2] [i_2] [i_5]), (arr_11 [i_1] [i_3] [i_5])))) ? ((-(arr_3 [i_0]))) : (((arr_10 [i_1] [i_1] [i_1] [i_1] [i_1 + 3] [i_1]) / (arr_1 [0])))))) > (((9223372036854775807 ^ 45) - (((min((arr_12 [i_0] [i_0] [15] [i_1] [i_5] [i_0]), (arr_14 [i_0] [i_1] [i_5])))))))));
                            var_22 += (arr_4 [1]);
                            var_23 *= (((~(arr_17 [i_5] [i_1 + 2] [i_1 - 1] [0] [i_5]))));
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_24 = ((((((((-(arr_13 [11] [i_1] [i_1])))) || (((-(arr_3 [i_6]))))))) | (((((~(arr_8 [i_0] [i_1 + 3] [i_2] [i_3])))) ? (((arr_17 [i_1] [i_1] [0] [0] [11]) / (arr_16 [i_2] [i_3 - 2] [i_2] [i_0 + 1] [i_0 + 1]))) : ((~(arr_12 [0] [0] [0] [i_1] [i_6] [i_6])))))));
                            arr_23 [i_0 - 1] [i_1 + 1] [i_2] [i_2] [i_2] [i_3 + 1] [i_1] = ((~((((min((arr_14 [i_6] [i_1] [i_1]), (arr_2 [i_1] [i_2])))) ? (arr_1 [i_0]) : ((((arr_2 [i_1] [i_1]) && (arr_12 [i_0] [0] [i_2] [i_1] [i_6] [i_1]))))))));
                            arr_24 [i_0] [i_1] [i_6] [i_3] [i_6] |= (min((min((((arr_11 [i_0] [i_1] [i_3 - 1]) - (arr_9 [i_1] [i_2] [i_1] [i_6]))), (((arr_14 [i_0] [i_6] [i_3]) ? (arr_13 [i_0] [8] [8]) : (arr_13 [i_0 + 1] [i_0 + 1] [5]))))), ((2147483641 << ((((255 * (arr_7 [i_3 + 1]))) - 4126410))))));
                        }
                    }
                }
            }
        }
    }
    var_25 = ((var_16 && (var_4 - -var_5)));
    #pragma endscop
}
