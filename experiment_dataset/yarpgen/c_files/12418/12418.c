/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(251, (((18454 || var_13) ? ((max(18454, -14647))) : var_11))));
    var_18 = (min(var_18, var_1));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0]);
        var_19 = ((-((0 + (arr_1 [i_0])))));
        var_20 = ((+((~(min((arr_2 [i_0]), (arr_1 [i_0])))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            {
                var_21 = (((arr_5 [i_1 + 2]) / var_9));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            arr_18 [i_1] = ((max(5, (arr_13 [i_1] [12] [i_1]))));

                            for (int i_5 = 1; i_5 < 21;i_5 += 1)
                            {
                                var_22 = (arr_10 [i_4]);
                                var_23 = ((!((max((arr_7 [i_1]), (arr_7 [i_1]))))));
                            }
                            /* vectorizable */
                            for (int i_6 = 1; i_6 < 20;i_6 += 1)
                            {
                                var_24 = ((-((8094 ? var_6 : (arr_13 [i_1] [i_2 + 3] [i_6])))));
                                var_25 = 4;
                            }
                            for (int i_7 = 3; i_7 < 21;i_7 += 1)
                            {
                                var_26 = ((~((~((((arr_20 [13] [13] [i_3] [i_3] [i_1] [i_3]) > (arr_13 [i_1] [i_4] [8]))))))));
                                var_27 = (arr_7 [i_1]);
                                var_28 = (max((arr_17 [i_1 + 2] [i_2] [i_2] [i_1 + 2] [i_7] [1]), ((((max(1, 5))) ? var_5 : (max(4294967295, (arr_8 [i_7 + 1])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
