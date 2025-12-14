/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_13 += var_1;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] = max((((!1099511103488) % ((min((arr_2 [i_0]), var_1))))), (((((2046 ? (arr_0 [i_3]) : var_0)) <= (~var_3)))));

                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                var_14 = var_7;
                                arr_16 [i_0 + 2] [i_2] [i_2] [i_3] [i_4] = ((((((32767 * 816459932290164270) ? ((52696 ? (arr_11 [i_0] [i_1] [i_1]) : 511)) : var_10))) ? (max(((((arr_8 [9] [i_2] [15]) ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : (arr_0 [i_1])))), (min((arr_1 [i_3] [5]), 7586640947934292600)))) : ((((!(arr_7 [i_0 + 2] [i_1] [i_4] [i_3])))))));
                                var_15 = var_5;
                                var_16 = 458752;
                            }
                            for (int i_5 = 0; i_5 < 20;i_5 += 1)
                            {
                                arr_20 [i_0] [i_1] [i_2] [i_3] [i_5] = (min((max((arr_3 [i_0]), ((35 >> (var_12 + 36))))), ((((((arr_4 [8] [i_1] [i_1]) ? (arr_1 [i_0] [i_2]) : 43355))) ? ((max((arr_1 [8] [8]), (arr_9 [i_1] [i_1] [i_3] [i_5])))) : (((!(arr_2 [i_1]))))))));
                                arr_21 [i_5] [i_2] [i_2] [i_3] [i_3] = (((((arr_9 [i_0] [5] [i_0 + 1] [i_0 - 1]) / ((-3887216543467689057 ? (arr_1 [i_0 + 1] [i_0 + 1]) : -25231)))) << ((((~(arr_11 [i_0] [i_3] [i_5]))) + 1778607955781959319))));
                            }
                            var_17 = (min(var_17, ((((((min(14426206096113568838, (arr_7 [i_0] [i_0] [i_2] [i_0])) <= (!22691)))))))));
                            var_18 = (max(((((arr_9 [i_0 + 1] [i_1] [9] [i_3]) < -1))), (max(var_4, (arr_13 [i_0] [i_1] [i_2] [i_2] [i_3])))));
                        }
                    }
                }
            }
        }
    }
    var_19 |= (min((((((var_12 ? var_8 : var_3))) ? var_12 : var_10)), var_2));
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 7;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            {
                arr_27 [i_7] [5] = (((min(((61380 ? (arr_5 [i_6 - 2] [i_7]) : var_4)), ((29335 ? (arr_24 [6]) : var_9))))) ? (((((((arr_22 [3] [i_6]) ? (arr_5 [i_6] [i_7]) : (arr_22 [i_6] [i_6]))) != ((min((arr_17 [i_6] [i_6] [i_6] [i_7] [i_7]), (arr_25 [i_6] [3])))))))) : (arr_25 [i_6] [i_7]));
                var_20 = (min(60788, 100));
            }
        }
    }
    #pragma endscop
}
