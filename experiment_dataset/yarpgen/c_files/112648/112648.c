/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_19 *= ((((((arr_3 [4] [i_0 + 2]) % var_14))) || (((-(arr_3 [6] [2]))))));

                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_0] = ((255 ? 64253 : 207));
                    var_20 = (arr_1 [2] [0]);
                    var_21 = (((arr_5 [i_2 + 2] [i_0 - 3]) >> ((((~((65535 ? (arr_5 [i_0] [i_0]) : 49)))) + 56573))));
                    var_22 = (arr_6 [i_0] [i_0] [0] [i_0]);
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    arr_13 [i_0] [i_0] [0] = ((!((min(((max(255, 206))), var_9)))));
                    arr_14 [i_0] [i_1] [i_3] = (max(1711719004, (56140 || 65535)));
                }
                for (int i_4 = 4; i_4 < 9;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 7;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] [6] [i_0] [i_0] [3] = (!-82);
                                var_23 = var_12;
                            }
                        }
                    }
                    var_24 = (max((max(((18093 ? 288230376151695360 : 172)), (arr_0 [i_4 - 2] [i_1]))), ((max((arr_11 [2] [2]), ((var_2 ? var_13 : var_5)))))));
                    arr_23 [6] [0] [4] |= (arr_4 [4] [4]);
                    var_25 ^= arr_17 [i_0] [7] [i_1];
                    var_26 = ((((arr_18 [i_0]) ? (4496439671164486124 || var_6) : (arr_7 [i_0]))));
                }
            }
        }
    }
    var_27 -= 1023705218;
    #pragma endscop
}
