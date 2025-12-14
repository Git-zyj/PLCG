/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= ((var_8 & (var_6 + -55)));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (((((((!(arr_0 [i_1 - 1]))))) >> (-21 + 43))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] = -45;
                                var_19 = ((-674767115548828174 ? (-32767 - 1) : -122));
                                var_20 &= (~121);
                                arr_14 [i_0 - 1] [i_4] [i_2] [i_4] [0] [i_1] = (min((min((((arr_12 [i_0] [i_1 + 2] [i_1] [i_3] [i_0 - 1] [i_3 + 1] [i_3]) ? (arr_3 [i_1] [i_1]) : 115)), (138 - var_3))), ((((min((arr_10 [i_1]), -115))) | (27374 ^ var_3)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
