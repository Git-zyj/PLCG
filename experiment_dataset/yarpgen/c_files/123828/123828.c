/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_16 = ((((((9223372036854775807 >> (var_7 - 21979594))) + (!9223372036854775807))) * 43));
            arr_5 [i_1] [i_1] [i_1] = (max((arr_0 [i_0 - 1]), (((arr_0 [i_0 - 2]) ? (arr_0 [i_0 + 4]) : (arr_0 [i_0 + 4])))));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_9 [i_2] [i_0] = (max((arr_4 [i_0]), (arr_3 [i_0 - 1] [i_0 - 2] [i_0 + 4])));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_17 = (!(arr_13 [i_0 + 3] [i_0 + 4] [i_0 - 2]));

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            arr_19 [i_4] [i_2] [i_3] [i_4] [i_4] [i_4] [i_5] = ((((+((min((arr_15 [i_0] [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_0 + 2] [i_0 + 2]), 0))))) >= (((arr_6 [i_4] [i_4] [i_4]) * (((var_7 > (arr_14 [i_4]))))))));
                            var_18 = (max(var_18, ((min((min((((arr_11 [i_0] [15]) ? (arr_13 [i_0] [i_3] [i_3]) : (arr_12 [1]))), (arr_7 [i_0] [i_4] [i_4]))), (((arr_12 [i_4]) ? ((0 | (arr_13 [i_5] [i_0 + 4] [i_0]))) : (((!(arr_3 [1] [i_0 - 2] [i_0])))))))))));
                        }
                        for (int i_6 = 2; i_6 < 19;i_6 += 1)
                        {
                            arr_22 [i_6] [i_4] [i_4] [i_2] [13] = (min((((((var_3 | (arr_12 [i_4])))) ? (arr_1 [i_0 + 4]) : ((((arr_11 [i_2] [i_2]) & (arr_16 [3] [i_0] [2] [i_0] [15])))))), ((((arr_16 [i_4] [i_3] [i_6 + 1] [i_3] [i_4]) && (((~(arr_6 [i_4] [i_3] [i_2])))))))));
                            arr_23 [i_4] [i_4] [i_0] [i_2] [1] = (min((arr_21 [i_6 - 2] [i_6 - 2] [i_4] [i_0 + 1] [i_4] [i_0] [i_0]), 31));
                            arr_24 [i_6] [i_4] [i_4] [i_0] = (((29275 >> var_12) ? ((((max(var_0, var_5))) ? ((-9223372036854775807 ? (arr_14 [i_4]) : 4095)) : 1)) : (arr_14 [i_4])));
                        }
                    }
                }
            }
        }
        var_19 = (((arr_8 [i_0 + 4] [i_0] [13]) ? ((((-1 + 2147483647) >> (((arr_4 [i_0]) - 1742003373))))) : (min(((var_4 >> (arr_20 [i_0] [i_0] [i_0] [0] [i_0]))), (-9223372036854775787 != 1)))));
    }
    var_20 = var_15;
    var_21 ^= var_7;
    #pragma endscop
}
