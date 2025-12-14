/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_3] [i_0] = (((((628832534 ? (((arr_5 [14]) + var_1)) : (((var_9 && (arr_11 [i_2] [i_0] [i_0 - 1]))))))) ? var_8 : (arr_7 [i_0])));
                                var_11 = (arr_2 [i_1] [i_0]);
                                arr_17 [i_0 + 1] [i_0 + 1] [i_1 + 3] [i_2] [i_1 + 3] [0] [i_0] = (119 & 628832534);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_24 [i_0 - 1] [14] [i_0 - 1] [1] [i_0] = ((((arr_9 [i_0 - 1] [i_0 + 1]) ? (arr_9 [9] [i_0 + 1]) : (arr_9 [i_0] [i_0 + 1]))));
                                arr_25 [i_0 + 1] [i_0] = ((-(arr_1 [i_0 - 1])));
                                arr_26 [i_0] [i_5] [i_6] = var_5;
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 = (3666134761 < 15254883649849932567);
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 10;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            {
                                var_13 = ((3191860423859619049 ? var_9 : (((arr_35 [i_8 + 1] [i_8 + 1] [i_8 - 2] [i_8 - 2]) + (arr_14 [i_8 - 2] [i_8 + 1] [i_11] [0])))));
                                arr_40 [i_7] [i_8 + 1] [0] [i_11] [7] = ((var_4 ? 0 : (((var_4 & var_10) ? (((arr_32 [3]) % (arr_9 [4] [10]))) : ((var_4 ? var_9 : var_5))))));
                                var_14 = (!1220553620);
                            }
                        }
                    }
                }
                var_15 = ((((((arr_33 [i_7] [i_7] [3] [7]) ? (((arr_9 [i_7] [i_7]) ? (arr_9 [i_7] [i_8 - 1]) : (arr_20 [i_7]))) : ((((!(arr_29 [8] [0] [i_8 - 1])))))))) && ((((arr_15 [i_8 - 2] [i_8 - 1] [i_8 - 1] [i_8 + 1]) ? (arr_15 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 + 1]) : (arr_15 [i_8 + 1] [i_8 + 1] [i_8 - 2] [i_8 - 2]))))));
                arr_41 [i_8 - 1] [i_7] = (-((((min(var_10, var_3))) ? (~var_5) : (arr_0 [i_7]))));
            }
        }
    }
    var_16 = var_4;
    #pragma endscop
}
