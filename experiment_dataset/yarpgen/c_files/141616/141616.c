/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 15;i_4 += 1)
                            {
                                arr_16 [4] [4] [i_2] [i_3 + 2] [i_4] = 255;
                                arr_17 [i_0] [i_0] [i_0] [4] [i_0] = ((244 & (arr_1 [i_0] [i_1])));
                            }
                            for (int i_5 = 0; i_5 < 15;i_5 += 1)
                            {
                                var_11 = (min(var_11, ((((max((!14), (-116 ^ 1))) >> ((((115 ? 238 : ((max(0, (arr_7 [i_0] [i_0] [i_0] [i_0])))))) - 231)))))));
                                arr_21 [i_0] [i_0] [i_0] = (((((var_0 + 2147483647) >> (((arr_18 [i_0] [10] [i_2] [10] [i_3] [i_5] [i_5]) - 21936))))));
                                var_12 += (!var_8);
                            }

                            for (int i_6 = 0; i_6 < 15;i_6 += 1)
                            {
                                arr_25 [6] [i_1] [i_2] [i_3] [6] = (((min((arr_11 [i_1] [i_2] [i_3 + 1] [i_3 + 2] [i_3] [i_3]), -8208391423119244849)) & (((((!1) && ((max(5, (arr_4 [5] [5] [i_3]))))))))));
                                var_13 = (((var_5 <= (arr_22 [5] [i_3 - 2] [i_6] [6]))));
                                arr_26 [i_0] [i_0] [i_2] [i_2] [1] [i_6] = ((-13100 > ((max(0, 24453)))));
                                arr_27 [10] [i_1] [i_1] [i_3 - 2] [i_6] &= 237;
                            }
                            arr_28 [i_0] [i_1] [i_2] [i_3] [i_2] [i_1] = arr_20 [i_1] [i_1] [i_1] [i_3 + 1] [i_3 - 2];
                            arr_29 [i_1] [i_0] [i_1] [i_3 - 1] [9] [i_0] = (min(var_1, ((((arr_20 [i_3 + 2] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 + 1]) ? (arr_20 [i_3 - 2] [i_3 - 2] [i_3 + 1] [i_3 + 2] [i_3 + 1]) : (arr_20 [i_3 + 1] [i_3 + 2] [i_3 + 1] [i_3 - 1] [i_3 - 1]))))));
                            var_14 = ((-(arr_15 [i_0] [i_3] [i_2] [i_2] [i_0])));
                        }
                    }
                }
                arr_30 [i_0] [i_1] = ((((arr_23 [i_1] [i_1] [i_0]) && (arr_23 [i_0] [i_1] [i_0]))));
            }
        }
    }
    var_15 |= 11;
    var_16 = var_7;
    #pragma endscop
}
