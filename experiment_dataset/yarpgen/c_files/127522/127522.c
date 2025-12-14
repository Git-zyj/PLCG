/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= -1406938906;
    var_11 = (((min(var_1, var_8))) ? var_2 : 1406938910);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_1] = (max((max(2675828656730698221, (((-(arr_0 [i_1] [i_1])))))), (((~(arr_1 [i_1]))))));
                arr_6 [i_1] [i_0] [i_1] = (min(((var_8 ? (arr_4 [i_1]) : (arr_0 [14] [i_0]))), (arr_2 [i_0])));
                arr_7 [i_1] = (((!-991812717) + ((((min(268435455, -17157))) ? (((var_0 ? -54 : 25641))) : ((var_3 ? (arr_0 [i_1] [13]) : var_1))))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_0] [i_2] [i_3] [i_1] = (((((-(min(-1406938915, (arr_9 [i_1] [i_1])))))) ? ((((((min((arr_9 [i_0] [i_0]), var_5))) || 16983361203976735585)))) : 14401611920149268058));
                                arr_17 [i_4] [i_3] [i_1] [i_1] [i_0] [i_0] = 18446744073709551613;
                                arr_18 [i_0] [i_2] &= (arr_4 [i_0]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_12 = 12861730705738352968;
                                var_13 = (max(-var_2, (min((max((arr_22 [i_2]), var_1)), (((var_3 ? (arr_1 [i_0]) : var_7)))))));
                                var_14 = ((-(arr_13 [i_0] [i_1] [9] [i_2] [11] [6])));
                                arr_24 [i_0] [i_1] [15] [i_1] [i_1] [i_6] = ((!((((arr_8 [i_0] [i_1] [i_0] [i_0]) ? (arr_9 [i_1] [i_1]) : (((arr_4 [i_0]) ? var_3 : var_0)))))));
                            }
                        }
                    }
                    arr_25 [i_1] [i_2] [i_1] = 12861730705738352968;
                    arr_26 [i_0] [15] [i_2] [i_1] = (13045266490983228889 << (-387463385 + 387463425));
                }
            }
        }
    }
    #pragma endscop
}
