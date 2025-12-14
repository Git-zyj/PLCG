/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, 11));
    var_18 = ((-((3375820980 & (3375820978 | var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_19 = var_1;
                                arr_12 [i_4] [i_3] [i_0] [i_0] [i_1] [i_0] = var_5;
                                var_20 -= ((919146317 % (min(((var_6 % (arr_6 [i_0] [i_1] [18] [i_3]))), ((max(254, (arr_0 [i_2] [i_0]))))))));
                                var_21 = ((var_8 ? var_4 : (arr_6 [i_2] [i_1] [10] [13])));
                            }
                        }
                    }
                }

                for (int i_5 = 4; i_5 < 19;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_22 = (max(4294967295, ((max((arr_11 [i_0] [12]), ((-(arr_4 [i_0] [i_0] [i_7]))))))));
                                arr_20 [i_0] [i_0] = ((~((var_13 / (arr_13 [i_5 - 1] [i_7 + 1] [i_5])))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        var_23 += ((var_2 >> (arr_14 [i_5] [i_8] [i_8] [i_1])));

                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            var_24 = (((((35184372088830 ? var_7 : (arr_6 [i_1] [i_5 - 3] [i_8] [i_9])))) ? (arr_7 [i_0]) : (((!(arr_9 [i_0]))))));
                            arr_25 [i_0] [14] [i_5] [i_5] [i_5] [3] [i_5] = (arr_6 [i_5] [i_1] [i_5] [i_8]);
                            var_25 += var_15;
                        }
                        var_26 = var_15;
                    }
                }
            }
        }
    }
    #pragma endscop
}
