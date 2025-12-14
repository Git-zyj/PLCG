/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_13 = (arr_7 [i_0]);

                            for (int i_4 = 0; i_4 < 16;i_4 += 1)
                            {
                                var_14 = (((arr_6 [i_0] [i_1] [i_0] [i_3]) ? var_1 : (arr_2 [i_3] [i_2] [i_1])));
                                var_15 = var_10;
                                var_16 = ((+(min((~var_6), ((var_6 ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (arr_2 [i_4] [i_2] [i_0])))))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_9 [i_3] [i_1] [i_2] [i_3]);
                            }
                            var_17 = (min(var_17, (arr_2 [i_0] [i_1] [i_0])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            arr_19 [i_0] [i_1] [i_1] [i_0] = (arr_2 [i_6] [i_5] [i_1]);
                            var_18 = ((var_0 ? -var_7 : (!var_0)));
                            arr_20 [i_0] [i_0] [i_0] [i_0] &= var_6;
                            var_19 = (((((max(var_7, var_1)))) ? (arr_18 [i_6] [i_5] [i_1] [i_0]) : (min((~var_1), (arr_17 [i_1] [i_1] [i_5] [i_6] [i_0] [i_5])))));
                            var_20 = (min(var_8, var_9));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 2; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_21 = (min(var_21, (((~((max(((max(var_2, (arr_17 [i_9] [i_8] [i_7] [i_7] [i_1] [i_0])))), (arr_27 [i_0] [i_8] [i_7] [i_9] [i_9] [i_0] [i_9])))))))));
                                var_22 = ((+(max((arr_22 [i_8] [i_7] [i_0]), (~var_2)))));
                                arr_29 [i_0] [i_1] [i_7] [i_8] [i_7] = ((-(((~(arr_7 [i_0]))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 15;i_11 += 1)
                    {
                        {
                            var_23 = (max(((-(arr_25 [i_0] [i_1] [i_10] [i_11]))), (arr_30 [i_0] [i_11] [i_10])));
                            var_24 = (((arr_8 [i_0] [i_10] [i_11]) ? (min((((!(arr_7 [i_11])))), (max(var_3, var_2)))) : (((((((arr_27 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]) ? var_9 : (arr_17 [i_0] [i_1] [i_10] [i_10] [i_11] [i_11])))) ? (!var_6) : (~var_9))))));
                            arr_35 [i_0] [i_10] [i_1] [i_0] = var_3;
                            arr_36 [i_0] [i_1] [i_10] [i_11] = (arr_12 [i_0]);
                            var_25 = (!((((-(arr_27 [i_0] [i_1] [i_1] [i_1] [i_10] [i_10] [i_11]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
