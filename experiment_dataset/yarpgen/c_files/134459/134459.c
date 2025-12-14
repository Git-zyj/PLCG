/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_0] = (min(((((var_0 && (-9223372036854775807 - 1))) ? (min(36063, 1563529205)) : var_14)), (((((arr_6 [14] [i_1] [i_1]) ? var_0 : 1018517047))))));
                arr_8 [i_0 + 2] [i_0 + 2] [i_1] = -var_8;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 15;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_20 [i_2] [i_3] [i_3] [i_5] [7] = ((-(((arr_14 [i_6 + 1] [i_4 + 1] [i_2]) ? 1 : 31967))));
                                var_16 -= ((((((arr_1 [i_3 + 2] [i_4 + 1]) ? 36058 : 36058))) ? ((36082 ? (max(2043279780, 24248)) : (~1137617866))) : var_1));
                                arr_21 [i_2] [i_3] [i_5] [i_4 - 1] [i_4] [i_2] [i_3] = (((0 ? ((30826 ? -473166374 : 36084)) : (!4095222065))));
                                var_17 = (min(var_17, (((var_9 ? (((arr_6 [i_4 + 1] [i_3] [i_3 + 2]) - (arr_6 [i_4 + 1] [i_4 + 1] [i_3 + 2]))) : (arr_9 [i_5] [i_4 + 1]))))));
                                arr_22 [i_2] [i_2] [i_4] [i_5] [i_6 - 1] = 3276450249;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_18 = (((36058 + 64474) << (29451 - 29451)));
                                arr_27 [i_2] [i_3] [i_4] [i_7] [i_2] = 2085176099;
                                var_19 = ((16853034237118594839 == (arr_13 [i_3 - 2] [i_4] [i_4 - 1] [i_8 + 2])));
                            }
                        }
                    }
                    var_20 = (max(var_20, ((min(((!(arr_16 [5] [i_2] [i_3 + 1] [i_4 + 1] [13] [i_4 - 1]))), ((!(arr_16 [10] [i_3 - 1] [i_4 + 1] [i_4 + 1] [i_3 + 2] [i_4 + 1]))))))));
                    arr_28 [i_2] [i_2] = var_13;
                }
            }
        }
    }
    var_21 = ((-(var_0 % 3338263356515170512)));
    var_22 = var_8;
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 15;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 16;i_12 += 1)
                    {
                        {
                            var_23 = 29460;
                            var_24 -= (-((((4188 ? 437261845 : 731904632)))));
                            var_25 = (((-((min(var_5, (arr_1 [i_11] [i_12])))))));
                            arr_40 [i_9] [i_9] [i_10] [i_9] = (!73);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 17;i_14 += 1)
                    {
                        for (int i_15 = 3; i_15 < 14;i_15 += 1)
                        {
                            {
                                var_26 = ((!((!(arr_39 [i_15 - 3] [i_10] [i_9 + 1] [4])))));
                                var_27 = (max(var_27, 1));
                            }
                        }
                    }
                }
                var_28 = 29477;
                arr_47 [i_9] [i_10] = (((!var_14) + 0));
            }
        }
    }
    #pragma endscop
}
