/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_14 = 4095;
                    var_15 |= ((((420098542 < (arr_4 [i_1 + 2] [i_1 + 4]))) ? 1 : (((arr_4 [i_1 + 3] [i_1 + 1]) << (((arr_4 [i_1 + 4] [i_1 - 1]) - 2757584914))))));
                    var_16 = (min(var_16, ((((((+(((arr_6 [i_0] [16] [i_2]) / (arr_2 [i_1])))))) ? (((((arr_3 [4] [4]) ? (arr_4 [i_1 + 1] [i_1 - 1]) : (arr_6 [i_2] [8] [i_0]))) - var_6)) : (((((arr_1 [i_1]) || (arr_4 [i_1 + 2] [i_1 + 2]))))))))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_17 = -19;
                        var_18 = (max(var_18, (((18421687274181580696 ? (arr_4 [i_0] [i_0]) : (arr_7 [1] [i_1 + 2] [i_1] [i_1 + 4]))))));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_19 = 65527;
                        var_20 = (max(var_20, (-2 | -110)));
                    }
                }
            }
        }

        for (int i_5 = 1; i_5 < 23;i_5 += 1)
        {
            var_21 = ((~0) ? (arr_8 [i_0] [i_0] [i_5 - 1] [i_5 + 1]) : -120);

            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                var_22 = -47;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        {
                            var_23 = ((18 + (((arr_4 [i_5] [i_5 - 1]) ? var_12 : var_8))));
                            var_24 = (min(var_24, (arr_6 [i_5 - 1] [i_8] [i_8])));
                            var_25 -= (127 - 240);
                            var_26 = (~-60);
                        }
                    }
                }
            }
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                var_27 = ((var_0 ? 9671858411586251170 : (arr_18 [i_0] [i_0] [i_5 + 1] [0] [i_5 - 1] [i_5 - 1] [i_9])));
                var_28 += (((arr_1 [i_5 + 1]) % ((((arr_5 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]) ? (arr_7 [i_9] [i_5 + 1] [i_5] [i_5 + 1]) : 17116)))));
                var_29 = ((((var_13 && (arr_16 [i_5] [i_5 + 1] [i_5 - 1]))) && (arr_16 [i_5] [i_5] [i_5 - 1])));
                var_30 = (((((min(18, var_3)) == (((65535 ? (arr_4 [i_0] [i_0]) : 31))))) ? (arr_4 [i_0] [i_0]) : 4064));
            }
        }
    }
    var_31 = ((((((0 | var_3) >= var_2))) >= var_3));
    #pragma endscop
}
