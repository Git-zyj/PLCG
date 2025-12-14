/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_11 = (max(var_11, (((~(min((2943403161 ^ -27), 2)))))));
                        var_12 = (((!6596) - ((((((arr_3 [i_0] [i_1] [i_2 + 1]) | 221))) ? (arr_7 [i_2]) : (((((arr_5 [i_0] [i_1] [i_2]) > 99))))))));
                        arr_12 [i_3] [5] [i_2] [i_1] [i_0] [i_0] = (min((max((!1351564154), 1351564135)), (arr_6 [i_1])));
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((!(96 * 4013732676)));
                        arr_14 [i_3] = ((((min((arr_8 [i_0] [i_0] [i_0] [13]), (min((arr_1 [i_0]), (arr_7 [i_0])))))) ? ((max((~255), (((arr_5 [i_0] [i_1] [i_2]) - (arr_8 [i_0] [i_1] [i_1] [i_3])))))) : (max(4013732676, (arr_10 [i_0] [i_0] [i_0] [i_0])))));
                    }
                    arr_15 [i_0] [i_1] [i_2] = (((max((arr_9 [i_1] [i_2] [i_2 - 1]), (arr_9 [i_0] [i_2 - 1] [i_2 - 1]))) >= ((-(arr_9 [i_0] [i_1] [i_2])))));

                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        arr_20 [i_0] [i_1] [i_4] [17] = (((arr_0 [i_0]) ? ((((arr_16 [i_0] [i_0] [i_2 + 1] [i_2 + 1]) ^ 281234619))) : (arr_11 [i_0] [i_4])));
                        arr_21 [i_4] [i_1] [i_2] [2] [17] [i_4] = ((+((2943403161 ? (arr_9 [i_0] [i_1] [i_2 + 1]) : (max((arr_4 [i_1] [i_1] [i_1]), 2943403153))))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_26 [i_1] [i_2] = ((~(arr_24 [i_0])));
                                var_13 = (min(var_13, (arr_1 [i_0])));
                                arr_27 [i_0] [i_1] [i_0] [i_6] = (((2943403143 ? 47 : -45)));
                            }
                        }
                    }
                    arr_28 [i_2] [i_0] = ((~(min(((((arr_22 [i_2] [i_1] [i_1] [i_0]) && (arr_10 [12] [i_1] [i_1] [i_1])))), ((1 + (arr_9 [i_0] [i_0] [i_0])))))));
                }
                arr_29 [i_1] = ((min((-2147483647 - 1), (arr_3 [i_0] [i_0] [i_1]))));
                var_14 = (max(var_14, (((!((1 > ((-4425093726891414139 ? 1957747156 : (arr_1 [i_0]))))))))));
            }
        }
    }
    #pragma endscop
}
