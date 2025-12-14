/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [3] [i_1] [i_1] = arr_1 [i_0 - 1];

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_11 = ((var_8 * (var_3 == var_4)));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            arr_13 [i_2] [i_2] [i_4] [i_3] [4] [i_3] [i_4] = (((arr_12 [i_0] [i_1] [i_1] [i_3] [i_4]) ? 141 : (arr_8 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1])));
                            var_12 = (((arr_8 [i_1] [i_2] [i_3] [i_4]) & (arr_0 [i_0 - 1])));
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_13 = ((((arr_3 [i_3]) ^ (arr_3 [3]))));
                            arr_17 [i_0 + 1] [i_1] [i_2] [i_3] [i_5] |= (((((arr_11 [i_0] [i_1] [i_1] [i_2] [i_0] [i_5]) || (arr_2 [i_0] [i_0 - 1] [i_0]))) ? (arr_6 [i_0 - 1] [i_1] [i_0 - 1]) : (arr_2 [i_0] [i_1] [i_0])));
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            arr_20 [i_0] [i_1] [i_1] [i_3] [i_6] = 141;
                            var_14 = (80 || 65280);
                            arr_21 [i_0] [i_1] [i_1] [i_1] [i_1] [4] [i_1] = -4316;
                        }
                        var_15 = ((var_3 ? (arr_10 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 1]) : (arr_10 [i_0 - 1] [i_0] [1] [i_0] [i_0] [i_0 - 1])));
                        arr_22 [i_3] = var_1;
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        arr_26 [4] = (((arr_1 [1]) != 0));
                        arr_27 [i_1] [i_0] = (arr_9 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1]);
                    }
                    var_16 = var_3;
                }
            }
        }
    }
    var_17 = ((min(var_3, (var_4 && 5785827299914287527))));
    #pragma endscop
}
