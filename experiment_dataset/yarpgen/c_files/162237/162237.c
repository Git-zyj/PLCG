/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0]);
        arr_4 [i_0] = (max(((((!(arr_0 [i_0]))) ? -7829 : (arr_1 [i_0]))), (((((4294967272 ? (arr_2 [i_0]) : 14))) ? (((~(arr_2 [i_0])))) : (((arr_0 [i_0]) ? 4294967278 : (arr_2 [i_0])))))));
        var_12 *= -1133645448;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 22;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] = ((1156736398654087738 ? -1156736398654087723 : (arr_15 [i_1] [i_2 - 2] [i_3] [i_1] [i_5] [i_4 + 1] [i_1])));
                            arr_19 [i_1] [i_2] [i_1] [i_4 + 1] [i_5] = 243;
                            var_13 = 1156736398654087716;
                            var_14 = (arr_15 [16] [i_4] [i_3] [i_1] [i_1] [i_1] [i_1]);
                        }
                        arr_20 [i_4] [1] [1] [i_1] &= ((5730350281606010932 ? 4294967271 : 4294967286));
                    }
                }
            }
        }
        var_15 += ((-(arr_11 [i_1] [i_1] [i_1])));
        arr_21 [i_1] = -22521;
        arr_22 [i_1] = 61;
        arr_23 [i_1] = 31;
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_16 += 1;
        var_17 = (min((~1336312863), -22535));
        arr_26 [i_6] &= ((!(arr_9 [16])));
    }
    var_18 = ((!(!var_0)));
    #pragma endscop
}
