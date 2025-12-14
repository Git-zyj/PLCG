/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_11 += 1;

                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    var_12 = (max(var_12, ((min(0, 65535)))));
                    var_13 -= var_0;

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_11 [i_1] [i_1] [i_0] [0] [2] = (min((var_4 + 4498481247056853867), var_5));
                        var_14 = var_9;
                    }
                    for (int i_4 = 2; i_4 < 14;i_4 += 1)
                    {
                        var_15 = -1;
                        arr_15 [i_0] [i_1] [i_2] [i_0] [6] [i_4] &= ((32767 ? ((var_5 * (!-450835984))) : (arr_7 [i_2 - 2] [i_4 - 1])));
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        arr_19 [i_1] [i_5] [i_2] [i_5] [i_5] [13] &= ((-((((arr_18 [i_0] [i_1] [i_1] [i_2 - 2]) > ((36871 ? (arr_17 [i_5] [i_2] [i_1] [i_0]) : 1)))))));
                        var_16 = (arr_6 [i_0] [i_0] [i_2 + 1] [i_0]);
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] &= (arr_4 [i_1]);
                        var_17 = (((arr_18 [i_0] [i_1] [i_2] [i_5]) ^ ((((((arr_0 [i_0]) ? var_7 : (arr_1 [i_5] [i_2 - 2])))) ? (((max(1, (arr_0 [i_0]))))) : (arr_10 [1])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
