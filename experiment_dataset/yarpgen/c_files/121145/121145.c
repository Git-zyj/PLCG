/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (512 ? (((((var_4 ? 22 : 23))) ? ((max(var_5, -512))) : var_5)) : var_0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        arr_13 [8] = ((((((arr_6 [i_1 - 1] [i_1 + 1] [i_1 - 1]) ^ (arr_6 [i_1 + 1] [i_1 - 4] [i_1 - 1])))) ? (arr_6 [i_1 - 4] [i_1 - 3] [i_1 - 1]) : (((524 ? 1 : -518)))));
                        arr_14 [i_0] [7] [i_1] [7] [i_0] |= ((-(arr_10 [i_0] [i_0] [i_2] [0] [i_3] [i_3])));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_16 = (max(var_16, ((((((arr_12 [i_1 - 1] [i_1]) ? (arr_12 [i_1 + 1] [6]) : (arr_12 [i_1 + 1] [i_1]))) % (max(512, (arr_5 [i_0] [i_0]))))))));
                                var_17 = (--1);
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (((-485 + 2147483647) << (488 - 488)));
    var_19 |= -var_1;
    #pragma endscop
}
