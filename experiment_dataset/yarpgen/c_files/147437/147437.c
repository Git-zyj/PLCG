/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    arr_11 [i_2 - 2] [i_1 + 1] [i_0] [i_0] = ((!(((7246824259861023337 ? 7 : 544144146)))));
                    arr_12 [0] [0] [i_0] = arr_0 [i_0] [i_1];
                    arr_13 [i_0] = ((!(arr_4 [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_19 [i_4] [i_1] [i_4] [i_1] [i_4] [i_0] [i_3] = ((2180622736 == (arr_7 [i_0 + 2] [i_1] [i_0])));
                                arr_20 [i_4 + 1] [i_3] [i_2 - 1] = ((-(((arr_17 [i_4 + 1] [i_3] [i_1 + 1] [i_3] [i_0 + 1]) ? ((min(32768, var_3))) : (~94)))));
                                arr_21 [i_4] [i_1 + 1] = (((2032 ? 984383746253455693 : 10)));
                                arr_22 [i_4] [i_3] [i_4] [i_1] [i_0 + 2] = (((arr_5 [i_0]) ? ((~(((!(arr_15 [i_1 - 1] [i_2] [i_1 - 1])))))) : ((((1 != -110) == (arr_14 [1] [i_1] [i_3] [i_3]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = ((!((max(var_0, (max(var_5, var_10)))))));
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 16;i_7 += 1)
            {
                {
                    arr_30 [8] [i_6] = ((((~(arr_29 [i_7 - 1] [8] [8] [i_5]))) << (((arr_29 [i_7 - 1] [6] [6] [i_5 + 1]) + 14708))));
                    arr_31 [0] &= ((((var_3 && (arr_29 [i_7 - 3] [8] [8] [i_6]))) ? ((var_1 ? var_8 : (arr_29 [i_7] [12] [12] [i_5]))) : (((arr_29 [i_7] [4] [4] [i_7]) * (arr_29 [i_7] [12] [12] [i_6])))));
                    arr_32 [i_7] [i_5] [i_5] [i_5] = (((arr_24 [i_5] [i_5]) << (((-79 + 100) - 14))));
                    arr_33 [8] [i_6] [i_6] [8] &= 52235;
                    arr_34 [8] [i_6] [i_7 - 2] [i_7 - 2] = ((~(arr_27 [i_5] [i_7])));
                }
            }
        }
    }
    #pragma endscop
}
