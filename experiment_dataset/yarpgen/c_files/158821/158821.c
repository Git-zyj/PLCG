/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;
    var_19 = (((((((((max(var_9, var_2)))) <= ((var_10 ? -897727126243521155 : var_17)))))) / -897727126243521169));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = (((arr_3 [i_0] [i_1]) ? -1 : (((!(arr_7 [i_0] [i_0] [11] [i_1]))))));
                    var_21 = (max((((arr_6 [i_0] [i_1 - 2]) % (arr_2 [i_1 - 2]))), var_2));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_22 = ((((arr_8 [i_1 - 1] [i_1] [i_1 + 1] [i_1 - 2]) > (arr_10 [i_1 - 1] [i_1 - 1] [i_1 + 1]))));
                                var_23 |= ((~((98 ? (min(-897727126243521164, (arr_9 [5] [i_3] [i_2] [i_2] [i_1] [i_0]))) : (1 || 113)))));
                            }
                        }
                    }
                    var_24 = (max(var_14, 12));
                }
            }
        }
    }
    var_25 = var_5;
    #pragma endscop
}
