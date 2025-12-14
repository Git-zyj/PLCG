/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, 4294967295));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (((-((206 - (!9223372036854775807))))))));
                arr_6 [i_0] [8] = ((((max(((-53 ? 3581863037884971545 : 3581863037884971542)), (((23279 ? 48109 : 53173)))))) ? ((((!((((arr_4 [1] [8] [i_1 + 1]) << (53165 - 53162)))))))) : (((12371 || 27) ? (max(var_3, 3581863037884971523)) : (!12370)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                arr_11 [21] [21] = ((!(!65535)));
                var_17 = -65535;
                var_18 = (max(14864881035824580062, 14));
                var_19 = (!4432411809677644482);
                arr_12 [i_2] [i_3] [i_3] = (((arr_10 [i_2]) > 1));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_20 -= (max(((var_11 ? var_10 : 62)), (arr_8 [i_5 - 3] [i_5 - 3])));
                                var_21 = (max((min((arr_3 [i_4] [i_4]), (arr_22 [i_7] [1] [i_5] [i_7] [i_8]))), (!3581863037884971544)));
                            }
                        }
                    }
                    var_22 = (max(var_22, (arr_21 [i_4] [i_5 - 3])));
                    var_23 = ((((((((1 ? 724 : 53177))) ? ((min(var_11, var_6))) : ((336278726 ? 12362 : (arr_18 [i_6] [i_5] [4])))))) ? (arr_21 [i_5] [i_5]) : (((((2726189536 ? var_7 : var_5))) ? (1489185224709917982 * 14864881035824580062) : 1740675163))));
                    var_24 = (max(var_13, (((((62378 ? 118 : 53190)) - 2)))));
                }
            }
        }
    }
    var_25 = ((((((((var_9 ? var_10 : 12365))) ? var_3 : (min(var_10, var_0))))) ? var_1 : (((max((!1), 2))))));
    #pragma endscop
}
