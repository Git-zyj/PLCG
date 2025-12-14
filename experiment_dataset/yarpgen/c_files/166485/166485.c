/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_8 [8] [i_0] [i_1] [i_0] = var_2;

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            arr_11 [i_4] [i_2] [i_2] [i_0] [2] = ((var_12 > (((arr_7 [i_0] [i_0]) / (arr_0 [8] [8])))));
                            arr_12 [i_4] [i_4] [i_4] [i_3] [i_2] [i_1] [i_0] = (!var_4);
                            var_13 = (((arr_4 [i_1 - 1] [i_1] [i_1 - 1]) % ((var_6 % (arr_6 [i_2])))));
                            arr_13 [i_4] [i_3] [i_2] [4] [i_0] = ((((((arr_2 [i_1] [i_1]) & (arr_1 [i_3])))) && (!var_9)));
                            arr_14 [i_0] [i_0] [i_0] [3] [i_0] = (arr_3 [i_1 - 2] [i_1 - 1]);
                        }
                    }
                    var_14 = ((~(((var_6 < (arr_0 [i_1 + 1] [i_1 + 1]))))));
                    var_15 = ((!(((!var_10) >= (var_6 && 15230)))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 17;i_7 += 1)
            {
                {
                    var_16 |= (127 && 42593);
                    var_17 = arr_18 [i_5 + 1] [i_6];
                    var_18 = (min(var_18, ((min(((min((arr_22 [i_5 - 2] [i_6 + 1] [i_6 + 1] [i_5]), (arr_22 [i_5 - 1] [i_6 + 2] [i_6] [i_5])))), (arr_22 [i_5 - 2] [i_6 + 1] [i_7 - 2] [i_5]))))));
                }
            }
        }
    }
    #pragma endscop
}
