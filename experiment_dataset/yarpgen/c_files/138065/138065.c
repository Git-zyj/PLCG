/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = (min(var_12, (((!(((~(arr_1 [i_0] [i_1])))))))));

                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    var_13 = (max(var_5, var_2));
                    var_14 = (((arr_2 [5]) > (((arr_4 [i_2 - 1] [i_2] [i_2 + 2] [i_2 + 2]) ? var_6 : (arr_4 [i_2 + 1] [i_2] [i_2 + 3] [i_2 - 1])))));
                }
                var_15 *= (-127 - 1);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 3; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    var_16 -= var_10;
                    var_17 = ((-(arr_4 [13] [1] [i_5] [2])));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_18 = ((var_0 >> (((46344 != (((arr_0 [1]) ^ (arr_1 [i_4] [1]))))))));
                                var_19 = (max((arr_3 [i_4] [17] [i_3]), (((!(((var_1 ? (arr_13 [11]) : var_10))))))));
                                var_20 = ((4294967294 >> ((((max(var_3, var_6)) != (((max((arr_6 [i_3] [5]), var_6)))))))));
                                var_21 = ((~((~((var_7 ? var_7 : var_1))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (min(var_22, var_9));
    var_23 = var_1;
    var_24 = (((((2147483647 ? 1 : 428451090))) * (~var_10)));
    #pragma endscop
}
