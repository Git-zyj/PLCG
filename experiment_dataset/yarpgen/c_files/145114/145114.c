/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_11, (~var_11)));
    var_17 *= var_8;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_4 [i_0 + 1] = 32767;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_18 = (arr_2 [i_2]);
                            var_19 ^= (1 == (((arr_9 [i_0 + 1] [i_0 + 1]) - var_2)));
                        }
                    }
                }
                var_20 |= (((var_10 ? 6359359110290470034 : var_1)));
                var_21 = (((arr_1 [i_2 - 1]) ? var_2 : (arr_14 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 - 1])));
            }
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                var_22 = (((!-19) ? (((!(arr_3 [i_0] [i_0 + 1])))) : ((((arr_3 [i_5] [i_0 + 1]) >= (arr_17 [i_0]))))));
                arr_18 [i_0 + 1] [i_1] [i_1] = (((max(((max(17474, var_5))), (arr_16 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1]))) / ((max(((var_6 ? (arr_3 [i_5] [i_0 + 1]) : var_2)), 1199)))));
            }
            arr_19 [i_1] = var_5;
            var_23 = (((max((arr_12 [i_0 + 1] [i_1] [i_0] [i_1] [i_0 + 1]), (arr_12 [i_0 + 1] [i_1] [i_0] [i_1] [i_0 + 1])))) ? 48061 : (((((arr_8 [i_1] [i_1] [i_1]) >= (arr_16 [i_0 + 1] [i_1] [i_0] [i_0]))))));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_22 [i_0] [i_6] = ((-416304114 ? ((max((arr_3 [i_0 + 1] [i_0 + 1]), (arr_15 [6] [6])))) : (max((arr_16 [i_6] [i_6] [i_6] [i_0 + 1]), (arr_16 [i_0 + 1] [i_0] [i_0] [i_0 + 1])))));
            var_24 = (((((((arr_2 [i_0]) + 17492))) ? (arr_8 [i_0 + 1] [i_0 + 1] [i_0]) : (max(48062, -1839171447)))));
        }
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            var_25 = (!((max((arr_6 [i_0 + 1] [i_0 + 1]), (max(17474, (arr_7 [i_7])))))));
            arr_26 [i_0] [i_7] [i_7] = (((max((max(65529, 1291331852)), (arr_9 [i_0 + 1] [i_0 + 1]))) < (max((arr_10 [i_0] [i_7] [i_0 + 1] [i_0] [i_7]), (((arr_23 [i_7] [i_7] [i_7]) << (-32765 + 32778)))))));
            arr_27 [i_0 + 1] [i_0 + 1] [i_7] = (((arr_9 [i_0 + 1] [i_7]) ? (max(1427059857, var_1)) : (max(24925, (~var_8)))));
        }
    }
    var_26 = (max((max((48043 - var_13), ((max(var_3, var_1))))), ((48083 ? ((max(32767, 1920))) : (max(63615, 1839171447))))));
    var_27 = (max(((var_3 ? var_4 : (~-1463993896))), (max(var_1, 65529))));
    #pragma endscop
}
