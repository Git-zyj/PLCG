/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (min(-var_1, ((-64 ? var_6 : (!var_13)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = (arr_0 [i_0] [i_1]);

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_16 = (((arr_14 [i_0] [i_1] [i_4 + 1] [i_4 + 1] [i_0] [i_4] [i_0]) | (((arr_14 [i_0] [i_1] [i_4 - 1] [i_1] [i_4] [i_4 - 1] [i_1]) ? 2899111669 : (arr_14 [i_0] [i_1] [i_4 - 1] [i_4] [i_1] [4] [i_4 - 1])))));
                                var_17 = ((((((arr_2 [12] [i_1]) ? (arr_5 [i_0] [i_4 - 1]) : (((arr_5 [i_0] [i_0]) ? 64 : (arr_8 [i_4 - 1] [i_4 - 1])))))) ? ((64 ? 83 : 44800)) : (((arr_6 [i_0] [i_0] [i_2]) + var_5))));
                            }
                        }
                    }
                    arr_16 [0] [i_1] [i_0] [i_0] = -366854220226611576;
                }
                for (int i_5 = 3; i_5 < 21;i_5 += 1)
                {

                    for (int i_6 = 2; i_6 < 20;i_6 += 1)
                    {
                        var_18 = (min(var_18, ((((max((arr_3 [i_5 - 1] [i_1] [13]), ((~(arr_7 [i_0] [i_0] [i_0] [i_0]))))) ^ (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                        var_19 |= var_13;
                        var_20 = (38454 - 191);
                        var_21 -= ((max(-64, ((min(64, var_1))))));
                    }
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        var_22 = (min((arr_0 [6] [i_5 - 2]), (arr_6 [i_1] [i_5 - 3] [i_7])));
                        var_23 = (((((-((max((arr_17 [19] [16]), var_8)))))) ? var_1 : (((arr_7 [i_5 + 1] [i_5 + 1] [i_5] [i_7]) & (arr_14 [i_5 + 1] [i_5 + 1] [i_5] [i_5 - 3] [i_5 + 1] [i_5] [i_5 - 1])))));
                        arr_26 [i_0] [16] [i_0] [5] [i_0] = var_9;
                    }
                    var_24 = var_1;
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((min((arr_2 [i_0] [i_5 + 1]), (min(var_0, (arr_20 [7])))))) ? (((max((arr_23 [i_1]), var_2)))) : (max(var_5, var_0))));
                                var_25 = ((((min(-6059526258598067877, var_4))) ? (((arr_24 [18] [i_8] [i_1] [i_0]) ? -455797275 : (max((arr_4 [i_9] [i_1]), (arr_7 [i_0] [i_0] [i_0] [i_0]))))) : (((((var_4 ^ (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))) > (max(var_6, var_1)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            {
                                arr_38 [i_0] [i_0] [i_10] [i_5] [i_10] [i_5] = var_7;
                                var_26 &= var_13;
                                var_27 = var_5;
                            }
                        }
                    }
                    var_28 += ((min(1228268339, 122)));
                }
            }
        }
    }
    var_29 = var_10;
    #pragma endscop
}
