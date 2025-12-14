/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((((min(((var_10 ? var_12 : 0)), ((min(64045, 1)))))) ? var_3 : -1)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = (((arr_3 [i_0]) ? (arr_5 [17] [i_0]) : ((((((-(arr_4 [i_2] [i_1 - 2] [i_0 - 2]))) + 2147483647)) << ((((((-(arr_2 [i_2] [i_1]))) + 224)) - 4))))));
                    var_16 -= (min((min((min((arr_6 [i_2] [i_2]), 199)), 1)), (!16320)));
                    var_17 = (((arr_7 [i_0 + 1] [i_1 - 2] [i_2]) ? ((-((max(255, 1))))) : 60039));
                    var_18 = (max(var_18, (((((max(7848408813511521316, (arr_6 [i_0] [i_0 + 1])))) ? (~1) : (max((min((arr_3 [i_0]), 0)), (arr_5 [i_0 + 2] [8]))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 8;i_4 += 1)
        {
            {
                var_19 = var_10;
                var_20 = (min(((var_6 ? 65521 : var_13), (((17593 ? 60039 : 32768))))));
                var_21 += ((((min((((var_0 ? var_12 : var_10))), (((arr_1 [i_3] [i_4]) * 14))))) ? (arr_2 [i_3] [i_4]) : 1));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 8;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_22 = ((((((1 ? 10848035949071024380 : var_12)) * (((1 ? 0 : 1104879813625049092)))))) ? 1 : ((-((5507 ? (arr_20 [i_3]) : (arr_18 [9] [i_4 - 1] [i_5] [i_5]))))));
                            arr_21 [i_3] &= ((var_9 ? 0 : (((var_2 | var_0) & 1))));
                            var_23 = (((((-((min(17576, -118)))))) ? ((10379883038494040684 ? 24961 : (arr_11 [i_4 - 1] [i_5 + 1] [i_5 - 2]))) : ((((((arr_12 [i_3] [i_4] [i_5]) / -19005))) ? (max((arr_4 [i_6] [i_5] [i_3]), var_0)) : ((2959911320 ? (arr_19 [i_6] [i_5] [i_4] [i_3]) : var_8))))));
                        }
                    }
                }
            }
        }
    }
    var_24 = -var_7;
    #pragma endscop
}
