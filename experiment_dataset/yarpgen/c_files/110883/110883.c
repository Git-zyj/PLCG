/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_13 += (((-(max(1971991037, (arr_2 [i_0]))))));
                arr_6 [i_1] = (arr_3 [i_0 + 1]);

                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    arr_10 [2] [0] [0] [i_2] &= ((-(arr_4 [i_0 + 2] [5] [i_0])));
                    var_14 = (((!(arr_5 [i_0] [i_1] [i_2 + 3]))));
                    arr_11 [i_1] [i_1] = (min((((((((arr_7 [i_0] [i_1] [i_2] [i_0]) + var_10))) < (((arr_4 [i_2] [i_0] [i_0]) ^ (arr_1 [i_2])))))), (((arr_8 [i_0] [i_1] [i_2 + 2] [i_2 + 2]) + (arr_9 [i_0] [i_1 + 2] [i_2])))));
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    var_15 = (min(var_15, ((((((!((((arr_5 [i_0] [i_1] [i_3]) ? (arr_5 [1] [i_1] [i_3]) : (arr_0 [i_1]))))))) + ((max((arr_12 [5] [i_0 + 1] [i_1] [i_1 - 1]), (arr_12 [i_0] [i_0 + 1] [i_0] [i_1 + 2])))))))));
                    var_16 = (min(var_16, ((max((((!(arr_5 [i_0] [i_0] [i_3])))), var_7)))));
                }
                for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                {
                    arr_16 [i_1] [i_1] = (((414 && 63) ? (min(1057832265, 13226727811934394949)) : (arr_12 [i_0] [i_0] [i_0] [i_0])));
                    var_17 = -9234685207901620227;
                    arr_17 [i_1] [i_1] [i_4] [i_1] = -1971991037;
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                {
                    var_18 += (((arr_13 [i_0 - 2] [9] [11]) <= (!70)));
                    arr_20 [i_0] [i_1] [i_1] [i_5] = (((arr_5 [i_5] [i_1 - 1] [i_0]) ? (arr_5 [i_5] [i_1 + 2] [i_1]) : (arr_14 [i_5] [i_1] [i_1 - 1] [i_1])));
                    var_19 = (((((var_2 ? 192 : (arr_9 [i_0] [i_0] [12])))) && var_0));

                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        arr_23 [i_0] [i_1] [0] [i_5] [i_5] [i_1] = ((241 ? 743151835 : (arr_4 [i_0 + 3] [i_0 + 3] [i_1 + 2])));
                        arr_24 [i_0] [i_0] [i_1] = ((var_11 || var_9) ^ (arr_1 [i_0]));
                        var_20 = (min(var_20, (arr_3 [i_5])));
                        arr_25 [i_0] [i_1] [i_1] [i_1] [i_1] = ((!(arr_9 [i_1 + 1] [i_5] [8])));
                        arr_26 [i_1] [i_1] [i_5] [i_6] = -var_7;
                    }
                }
                arr_27 [i_1] = ((~(~-1)));
                var_21 = ((arr_9 [i_0] [1] [i_0]) ? ((-1971991037 ? 62017 : 0)) : (arr_8 [i_0] [i_1 + 1] [i_1] [i_0]));
            }
        }
    }
    var_22 = ((-(min(5064778572711290885, (((2588631517 ? 154 : 215)))))));
    #pragma endscop
}
