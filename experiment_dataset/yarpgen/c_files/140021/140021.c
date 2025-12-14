/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    var_15 = (((var_4 ? (!51469) : (18446744073709551608 || var_8))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_16 ^= (arr_4 [i_1] [i_1] [i_1]);

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_17 = 38750;

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            arr_13 [i_0] [i_1] [i_0] [14] [10] [i_1] [i_0] = (arr_5 [i_0] [i_0 + 1] [i_0]);
                            var_18 = var_1;
                        }
                        var_19 = (((arr_0 [i_0] [i_0 + 3]) <= 1133233586));
                    }
                }
                var_20 = ((((min((min((arr_3 [i_0] [i_0]), 15)), ((((arr_9 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) != var_11)))))) ? (min(var_1, (arr_5 [i_0] [i_0] [i_0]))) : (((!1133233593) ? (((var_7 >> (((arr_4 [i_0] [14] [i_1]) + 8725827342176475293))))) : ((var_6 ? (arr_3 [1] [i_0]) : (arr_4 [i_0] [i_0] [16])))))));
                arr_14 [i_1] [i_0] [8] = (((((arr_8 [i_0 + 2] [i_0 + 2] [i_1] [i_1] [1]) ? (arr_8 [i_0 - 1] [i_1] [i_1] [i_1] [i_1]) : var_3)) | (arr_8 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0])));
            }
        }
    }
    var_21 = ((1133233579 ? (min(var_12, var_2)) : var_10));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 14;i_6 += 1)
        {
            {
                var_22 = (((-(arr_8 [i_5] [i_5] [i_5] [i_5] [i_5]))));
                var_23 = ((1133233578 ? (!16) : ((-(~var_12)))));
                arr_19 [i_5] [i_5] = (min((max((((arr_1 [i_5]) | var_12)), (arr_3 [i_5] [i_5]))), (arr_6 [i_6] [i_6] [i_5])));
            }
        }
    }
    #pragma endscop
}
