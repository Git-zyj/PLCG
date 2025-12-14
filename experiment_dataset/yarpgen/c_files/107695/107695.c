/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((((arr_4 [i_1] [i_1] [i_0]) != -20)) ? ((((arr_1 [i_1] [i_0]) < var_9))) : (((((0 && (arr_4 [i_0] [i_0] [i_1]))) || (arr_3 [i_0] [i_1]))))));
                var_19 = (min(var_19, (((((min((arr_4 [10] [i_1] [10]), ((((arr_1 [i_0] [i_1]) != (arr_1 [i_1] [i_1]))))))) % (arr_4 [i_0] [i_0] [i_0]))))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_20 += (min((min(((((arr_3 [i_1] [i_0]) ? var_11 : 23))), (var_8 - var_14))), (arr_7 [i_0] [i_0] [i_0] [i_0])));
                    var_21 = 6;
                }
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    var_22 = (max(var_22, (((~((-(arr_6 [i_3 + 1] [i_3 + 1]))))))));
                    arr_11 [i_0] [i_0] [i_0] = (((arr_0 [i_1]) ? (-127 - 1) : (arr_8 [i_0] [i_1] [i_3 + 2] [8])));
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        {

                            for (int i_6 = 2; i_6 < 18;i_6 += 1)
                            {
                                var_23 = (arr_19 [i_0] [i_1] [i_0] [i_5] [i_1] [1]);
                                var_24 = (max(var_24, var_5));
                            }
                            for (int i_7 = 0; i_7 < 1;i_7 += 1)
                            {
                                arr_22 [i_0] [i_1] [i_7] [i_5] [i_7] = (((min((arr_10 [i_0] [i_1] [i_4] [i_5]), (arr_0 [i_0]))) % ((((max(334480722, (arr_6 [9] [i_1])))) ? (arr_18 [i_5 + 2] [16] [14] [14] [i_5 + 2]) : (arr_1 [i_5 + 2] [i_5 + 1])))));
                                var_25 += 65535;
                                var_26 = (~133955584);
                                arr_23 [i_7] [i_5] [i_7] [i_1] [i_0] = (((var_17 < (arr_16 [13] [1] [i_5] [i_5 - 1] [i_5 + 2] [i_5 + 3]))));
                                var_27 += (((~(((arr_12 [i_0]) ^ var_15)))));
                            }
                            var_28 += (((((min(18446744073709551615, 65509)) ^ (((5326787083577218030 ? 1 : 1))))) / 14304031800255354731));
                            var_29 = 3116183850;
                        }
                    }
                }
            }
        }
    }
    var_30 = 26;
    #pragma endscop
}
