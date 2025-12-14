/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_3;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (((((max((arr_1 [i_0] [i_0]), ((((arr_1 [i_0] [i_0]) <= (arr_1 [i_0] [i_0])))))))) * (((arr_0 [i_0]) ? var_10 : (arr_0 [i_0])))));
        var_17 = (max(var_17, ((max(((min((arr_0 [i_0]), (arr_1 [i_0] [i_0])))), (max(var_3, 0)))))));
        arr_3 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_7 [i_1] = max((min((arr_6 [i_1] [i_1]), (arr_6 [i_1] [i_1]))), (max((arr_6 [i_1] [i_1]), (arr_6 [i_1] [i_1]))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 23;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_2] = (((max((min(var_7, (arr_8 [i_1] [i_2] [i_1]))), (((!(arr_8 [i_3 - 1] [i_2] [i_2]))))))) > (max(-var_10, (arr_4 [i_2]))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                var_18 |= ((9399 ? 350788228 : (-9223372036854775807 - 1)));
                                arr_17 [i_2] [i_5] [i_2] [i_5] &= var_10;
                            }
                        }
                    }
                }
            }
        }
        arr_18 [i_1] = ((-(((arr_4 [i_1]) ? (arr_9 [i_1]) : (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1])))));
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 23;i_8 += 1)
                {
                    {
                        var_19 = ((((-(((arr_15 [i_7] [i_7] [i_7]) ? (arr_20 [i_1]) : (arr_8 [i_1] [i_6] [i_7]))))) <= ((((((min((arr_15 [i_1] [i_1] [i_1]), var_4))) > ((-(arr_24 [i_1] [i_6] [i_7 - 2])))))))));
                        var_20 ^= var_10;
                        var_21 = (arr_19 [i_8 + 1] [i_6 + 2]);
                    }
                }
            }
        }
        var_22 |= (((((50620 <= (-32767 - 1)))) > (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1])));
    }
    var_23 = var_12;
    #pragma endscop
}
