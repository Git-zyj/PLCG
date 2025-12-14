/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (-(max(var_12, (var_11 - 6917518937550805825))));
    var_21 = ((-0 ? 9272319218800677565 : (((-((var_5 ? var_15 : 4294967295)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [2] [i_1] [2] = ((1 | ((~(arr_0 [i_0] [i_1])))));
                arr_7 [0] = ((arr_0 [i_0] [i_0]) ? 4294967274 : (arr_2 [1]));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0] [6] [i_0] [2] = ((~(min((arr_0 [i_0 - 1] [i_0 + 2]), (arr_10 [i_0 + 2] [i_0 + 2] [i_1])))));
                            arr_15 [8] [i_2] [2] [2] [i_0] [i_0] = ((-(18446744073709551586 % -1)));
                            arr_16 [i_0] [i_0] [i_2] [i_3] = (max(((-(arr_3 [i_0 - 1]))), (arr_3 [i_0 - 1])));
                            arr_17 [0] [i_0] [i_0] [i_0] = (((((-(arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 3])))) ? ((-0 ? ((((!(arr_5 [i_0] [i_0] [7]))))) : (arr_12 [i_0] [i_1]))) : (1583567805 % 14173184563866438)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 11;i_5 += 1)
                    {
                        {
                            arr_22 [i_5] [i_0] [i_0] [i_1] [i_0] [i_0] = (arr_12 [i_0] [i_1]);
                            arr_23 [4] [1] [10] [i_5] = (max((((-(arr_20 [i_0] [6] [6])))), (max((33554432 | var_3), 2047))));
                            arr_24 [i_0] [0] = -10;
                            arr_25 [i_0] [2] [i_0] [i_5] = var_18;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
