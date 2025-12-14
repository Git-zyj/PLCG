/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_15 = ((((1 ? 1474421498545258784 : (~106))) << (16972322575164292845 - 16972322575164292841)));
                var_16 = (min((arr_0 [i_0] [i_0]), var_4));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    var_17 = (min(var_17, (((((arr_0 [i_2 - 1] [i_3 - 1]) ? -106 : (arr_8 [i_2 - 1] [i_2 + 1])))))));
                    var_18 = ((max((arr_9 [i_2 - 1] [i_4] [i_2 - 1]), (arr_9 [i_2 + 1] [i_4] [i_2 - 1]))));
                }
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 8;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        {

                            for (int i_7 = 2; i_7 < 11;i_7 += 1)
                            {
                                var_19 = (((arr_5 [i_2]) ? var_0 : ((((min(var_5, 2147483647))) ? var_5 : -var_3))));
                                arr_20 [i_2] [i_3] [i_3] [i_5] [i_5] [i_6] [1] = (arr_2 [i_7]);
                            }
                            for (int i_8 = 0; i_8 < 12;i_8 += 1)
                            {
                                arr_23 [i_5] [i_3 + 1] [i_6 + 2] [1] [i_8] [i_3 - 1] = ((~(arr_8 [i_2 + 1] [i_5 + 2])));
                                var_20 = (max(-101, (arr_9 [i_2 + 1] [8] [i_2 + 1])));
                                arr_24 [i_2] [i_3] [i_5] [i_6] [i_8] = (!((min((arr_17 [i_2]), var_9))));
                            }
                            var_21 = ((((max((var_8 < -107), 1))) != ((-(~var_5)))));
                            var_22 = (((var_3 ? (arr_19 [i_5 - 2]) : (arr_19 [i_5 - 1]))));
                        }
                    }
                }
                var_23 = (max(var_23, ((min((((arr_13 [i_2 + 1]) + (arr_13 [i_2]))), (max((arr_13 [i_2 + 1]), (arr_13 [i_3 + 1]))))))));
            }
        }
    }
    var_24 = (max((((((var_6 ? var_2 : var_3))) ? var_14 : (max(var_0, var_1)))), ((max(149, ((var_13 ? 2147483629 : 1)))))));
    var_25 = ((min(var_11, (~var_10))));
    #pragma endscop
}
