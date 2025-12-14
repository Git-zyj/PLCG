/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = (max(var_18, (((-(max(var_1, var_13)))))));
                arr_5 [i_0] [i_1] [i_1] = (max((min(var_17, (~130048))), ((~(var_1 ^ var_16)))));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_2] = ((-((max(var_15, var_14)))));
                    arr_10 [i_0] [i_0] [i_1] = max(var_8, (var_14 ^ var_12));
                    arr_11 [i_1] = var_14;
                    var_19 += ((-((((min(var_12, (-2147483647 - 1))) == (var_7 == var_4))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 = ((max(var_15, var_0)));
                                var_21 = ((((-2147483647 - 1) ^ var_12)));
                            }
                        }
                    }
                }
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    arr_18 [i_1] [i_1] [i_5] = min(var_8, (min((max(var_11, var_6)), (var_17 % var_14))));
                    arr_19 [i_5] [i_1] [i_0] = ((var_0 < ((((((max(var_5, var_12))) || var_6))))));
                }
            }
        }
    }
    var_22 &= -var_8;
    #pragma endscop
}
