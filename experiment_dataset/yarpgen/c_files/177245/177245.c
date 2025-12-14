/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= var_2;

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_17 = (((max(-2111343706567434638, (arr_1 [i_0] [i_0])))));
        arr_3 [i_0] = (max((((((-2111343706567434638 ? 3072 : var_4))) * 0)), (arr_2 [i_0])));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_18 = (357826117 != 2111343706567434642);
            var_19 = (-1293975136518907001 != 4094704419);
            var_20 = ((((((((~(arr_0 [8])))) ? (min(0, (arr_2 [i_1]))) : (max((arr_2 [i_0]), (arr_2 [1])))))) ? ((~(arr_6 [i_0 + 2]))) : -1293975136518907001));
            var_21 = ((!(arr_0 [i_1])));
        }
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            var_22 = (((arr_11 [i_0] [i_0] [i_0]) ? (arr_7 [i_0] [i_2] [i_2]) : (((((arr_9 [i_0] [i_2]) ? (arr_2 [i_0]) : var_7)) & (var_11 && 0)))));
            var_23 = (((((((((arr_1 [i_0] [i_0 - 1]) == (arr_10 [i_0] [i_0] [i_2]))))) < (arr_7 [i_0] [i_0 - 1] [i_0 + 3]))) ? (((((0 <= 2515165208607945112) != var_11)))) : var_9));
            arr_12 [i_0] [i_0] [i_2] = -1293975136518907004;
            arr_13 [i_0] [1] = ((((min(var_4, (arr_6 [i_0 + 3])))) ? (((arr_1 [i_0] [i_2]) ? ((~(arr_10 [8] [i_0] [i_2]))) : (arr_0 [i_0 + 2]))) : (arr_1 [i_0] [i_2])));
        }
        arr_14 [i_0] = ((+(((arr_4 [i_0] [i_0]) ? (arr_4 [i_0] [i_0]) : (arr_4 [i_0] [i_0])))));
    }
    var_24 = (min(var_5, ((((min(var_1, var_8))) ? (max(7909425767524402178, 10999)) : var_10))));
    var_25 = 21403;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 10;i_7 += 1)
                        {
                            {
                                arr_28 [i_7] = (((!((((arr_5 [i_3] [i_7] [i_5]) ? (arr_8 [i_5] [i_7]) : var_14))))));
                                arr_29 [i_3] [5] [i_7] [7] [i_7] = var_3;
                            }
                        }
                    }
                    arr_30 [i_5] [1] [i_3] = ((~((((((arr_0 [i_3]) ? var_7 : (arr_2 [i_3])))) ? (arr_16 [i_4] [i_5]) : ((min((arr_8 [i_3] [i_5]), 4294967293)))))));
                }
            }
        }
    }
    #pragma endscop
}
