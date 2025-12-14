/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] = (max(3853025182, 0));
                    arr_10 [i_0] [i_0] [i_2] [i_0] = (arr_2 [i_0] [i_0]);
                    var_19 *= (((arr_2 [i_0 - 2] [i_0 - 2]) ? 20291 : ((11674855936829850793 ? 1939246691 : 1939246691))));
                }
            }
        }
    }
    var_20 = (1939246691 ? 1939246720 : 0);
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            {

                for (int i_5 = 3; i_5 < 15;i_5 += 1)
                {
                    var_21 = (max(var_21, -35901));

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_22 = (arr_0 [i_5]);
                        var_23 = (max(var_23, (((-(arr_5 [i_3] [i_3] [24]))))));
                        arr_21 [i_5] [2] [i_5] = (((((~(arr_4 [i_4] [i_4])))) ? (~var_3) : var_1));
                    }
                    var_24 += (arr_18 [i_5] [i_5] [4] [i_5 + 1]);
                }
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    arr_25 [i_3] [i_3] = 78;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            {
                                arr_32 [i_3] [i_3] [i_3] [12] [i_3 - 1] = ((-1939246691 ? 2618775407 : 23));
                                var_25 ^= (((arr_14 [2] [i_4]) + var_12));
                                var_26 = (((((-((4294967281 ? 1939246691 : 0))))) ? ((-(max(2692374735462995357, 32767)))) : (((((max((arr_15 [3] [10] [9]), var_1))) ? ((var_16 ? var_13 : (arr_2 [15] [i_4]))) : ((((arr_29 [i_3] [i_4]) <= var_6))))))));
                                arr_33 [i_4] [13] [i_4] [i_4] [i_4] = (((arr_28 [i_3] [13] [i_3] [i_3] [i_3] [i_3]) ? var_4 : (arr_3 [i_3 - 3] [i_3 + 1])));
                            }
                        }
                    }
                    arr_34 [i_3 + 1] = ((9715 ? -1937 : 2839025720799329176));
                }
                arr_35 [i_3] [i_4] [i_4] = (arr_30 [i_3] [i_4]);
            }
        }
    }
    #pragma endscop
}
