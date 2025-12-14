/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((max(((((max(var_15, -15133))) ? var_6 : -var_6)), var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 15;i_4 += 1)
                            {
                                var_18 = (min((((((arr_3 [i_0] [i_0] [i_0]) ? 15110 : (arr_4 [i_3] [i_1]))) << (min((arr_1 [i_3] [i_4]), (arr_2 [i_1]))))), (((!(arr_0 [1]))))));
                                var_19 = (arr_7 [i_4] [i_4] [i_4] [i_4]);
                                var_20 = (min(var_20, 26723));
                                var_21 = var_15;
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                var_22 += ((((-((var_12 ? -15133 : var_13))))) || (!51017));
                                var_23 = (((!(arr_6 [i_0 + 1]))));
                            }
                            for (int i_6 = 3; i_6 < 12;i_6 += 1)
                            {
                                arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] = (((min(15126, (arr_4 [i_3 - 1] [i_1]))) != (arr_1 [i_2] [6])));
                                var_24 = (max(((max((15126 | -2010650123040501271), var_3))), (max(((min(1, 2659983939))), (((arr_10 [i_0] [i_0] [i_0]) & var_7))))));
                            }
                            arr_18 [1] [1] [i_2] [6] |= (arr_2 [i_0]);
                        }
                    }
                }
                var_25 ^= ((4095 ? ((((arr_3 [i_0 + 1] [i_0 - 1] [i_0 + 1]) || (arr_3 [i_0 + 1] [i_0 + 2] [i_0 + 2])))) : (min((arr_3 [i_0 - 1] [i_0 + 2] [i_0 - 1]), (arr_10 [i_0 - 1] [i_0 - 1] [i_0 + 1])))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            arr_25 [i_1] [i_1] [i_1] [i_1] [7] = var_16;
                            var_26 = ((!(arr_0 [i_0 + 2])));
                            arr_26 [i_8] [i_7] [i_8] [i_8] [i_8] [i_8] |= max(var_6, 15133);
                            var_27 &= (((var_12 || 8191) <= ((max((arr_14 [i_7] [i_8] [i_0] [i_1] [i_7]), 1)))));
                        }
                    }
                }
                var_28 = (+(min(((max((arr_6 [i_1]), (arr_1 [i_1] [i_0])))), (arr_24 [i_1] [i_1] [i_0 - 1] [i_0] [11]))));
                arr_27 [i_1] [i_1] [i_1] = ((((max((arr_14 [i_1] [i_0 + 2] [i_0] [i_0 + 2] [i_1]), (((arr_1 [i_0 - 1] [i_0 + 1]) ? 65371 : (arr_9 [i_0] [i_0] [i_0] [i_1] [i_1])))))) ? (arr_4 [i_0] [i_1]) : ((4294967295 ? -6811480874834557551 : 204857201857598535))));
            }
        }
    }
    #pragma endscop
}
