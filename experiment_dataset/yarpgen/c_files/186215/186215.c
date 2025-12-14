/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((min(((32175 ? var_5 : 33350), 3557375688))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                var_19 = (min(var_19, ((((max(3012169785, (max(32172, 1282797515)))) < (((min(32169, 33380)))))))));
                                var_20 = (max(var_20, (((((((arr_8 [i_2 - 3] [i_1] [i_1] [i_2]) ? (arr_8 [i_2 - 1] [i_1] [i_2] [i_1]) : (arr_11 [i_2 - 3] [i_4] [i_2] [i_3] [i_4] [16] [i_2])))) ? ((~(arr_11 [i_2 - 3] [1] [i_2 - 1] [i_1] [i_4] [i_3] [i_3]))) : (((arr_11 [i_2 - 2] [i_1] [i_1] [i_2] [12] [i_1] [12]) | (arr_11 [i_2 - 1] [i_2 - 1] [i_2] [i_3] [i_0] [i_3] [i_4]))))))));
                                var_21 = (min(1282797511, (arr_0 [5])));
                            }
                            /* vectorizable */
                            for (int i_5 = 3; i_5 < 15;i_5 += 1)
                            {
                                var_22 += (((arr_8 [i_1] [i_2 + 1] [i_1] [i_5 + 1]) + (arr_8 [i_1] [i_2 + 1] [i_5] [i_5 - 1])));
                                arr_15 [i_0] [i_1] [11] [i_3] [i_3] = ((-453345878 ? 3893365143 : 32175));
                                arr_16 [i_3] [i_3] [i_2] [11] [i_5 + 1] = (arr_8 [i_0] [i_0] [8] [i_5]);
                            }
                            for (int i_6 = 0; i_6 < 17;i_6 += 1)
                            {
                                arr_20 [i_3] [i_1] [16] [5] [16] = -10891;
                                var_23 = 3012169785;
                            }
                            var_24 += -882989831;
                        }
                    }
                }
                var_25 = (max(var_25, var_1));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            arr_26 [i_0] [7] [i_7] [i_8] = -360844379536888557;
                            arr_27 [i_0] [i_0] [i_7] [i_7] = ((-((((arr_0 [i_0]) ? (arr_11 [i_8] [i_0] [i_0] [i_0] [7] [i_0] [i_0]) : (arr_14 [i_0] [7] [i_0] [i_7] [i_7] [i_8]))))));
                            var_26 &= -3012169778;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
