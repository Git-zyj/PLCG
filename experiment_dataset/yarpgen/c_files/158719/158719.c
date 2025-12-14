/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((-2147483647 - 1) ? (((var_4 || (((var_3 ? (-2147483647 - 1) : 2147483647)))))) : (((((-2147483640 ? var_11 : -8))) ? var_4 : ((max(var_9, 56149)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((~(arr_2 [i_0])));

                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    var_15 = (min(var_15, (((max(((((arr_3 [i_0]) ? (arr_0 [i_0]) : 2147483647))), (((arr_2 [i_2 - 1]) ? (arr_3 [i_1]) : 5989025353492798300))))))));
                    arr_9 [0] [i_1] [i_1] [i_2] = (max((((arr_6 [i_2] [i_1] [i_2] [i_2]) ^ 297058617)), ((((var_11 > var_5) < (arr_3 [i_0]))))));
                    arr_10 [i_2] [i_2] [i_2] = ((((((((arr_4 [i_0]) ? var_11 : var_0)) >> (((arr_2 [i_1]) + 97))))) ? (arr_2 [i_1]) : (~5207185242947478581)));
                    arr_11 [i_0] [i_0] [i_2] [i_2] = (((arr_3 [i_0]) & ((((max(var_5, (arr_7 [i_0] [i_0])))) ? 1 : (((!(arr_8 [i_0]))))))));
                    var_16 |= 520192;
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    var_17 = (((arr_1 [i_3]) ? (arr_3 [i_0]) : (((var_7 - var_8) ? var_13 : (arr_8 [i_0])))));
                    var_18 = var_1;
                    arr_14 [i_3] [i_1] [i_3] = (min((arr_4 [i_1]), (arr_8 [i_0])));
                }
                /* vectorizable */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    arr_17 [i_0] [i_1] &= (((var_12 == 124) == (arr_8 [i_4 - 1])));
                    var_19 = (((871090072 & 0) ? (((arr_3 [i_1]) ? (arr_1 [i_0]) : (arr_1 [i_1]))) : -var_12));
                }
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    var_20 = (((((1 ? var_9 : ((19012 >> (((arr_15 [i_0]) - 12531))))))) ? var_0 : ((min((arr_15 [i_1]), (arr_0 [i_0]))))));
                    arr_22 [i_1] [i_5] = var_3;
                    arr_23 [i_0] [i_1] [i_1] = 35;
                }
                arr_24 [i_0] = (((arr_4 [i_0]) ? (((1 ? (arr_4 [i_1]) : var_8))) : (arr_1 [i_0])));

                for (int i_6 = 2; i_6 < 11;i_6 += 1)
                {
                    var_21 += ((+(max(((var_11 ? (arr_13 [i_0] [i_0] [3] [i_0]) : (arr_3 [i_1]))), 55626))));
                    arr_27 [i_0] [i_1] = ((-((~(~724395666)))));
                    arr_28 [i_1] [i_1] [i_0] = ((((max(18446744073709551615, (199 - 32768)))) && ((((((-(arr_26 [i_0] [i_1] [i_1] [i_6 + 2])))) ? (max(var_2, var_6)) : (arr_26 [i_6 - 1] [i_6 - 2] [i_6 + 1] [i_6 - 2]))))));
                }
                var_22 = ((((1431328176 & ((18446744073709551615 ? 7 : (arr_4 [i_0]))))) & 0));
            }
        }
    }
    var_23 = (((max(((max(26, var_1))), (~var_13))) / -741814236));
    #pragma endscop
}
