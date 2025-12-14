/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_15 = (arr_5 [i_3] [3] [i_1] [i_0]);
                                var_16 = ((((max((arr_9 [i_1 + 1] [i_1]), (arr_8 [i_1 - 1] [i_1] [i_1 - 1] [i_0] [i_0])))) ? (arr_12 [i_0] [14] [i_2] [i_3] [1]) : (arr_3 [i_1 - 1] [i_1 - 1])));
                                var_17 = (min(var_17, (((-(arr_2 [i_0] [i_3]))))));
                                var_18 = (arr_12 [i_4] [i_3] [4] [i_1] [i_0]);
                                var_19 = (var_0 - 664529433157428986);
                            }
                        }
                    }
                    var_20 = ((!((max(var_7, var_8)))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_21 = (min(var_21, var_10));
                                var_22 = (max(var_2, (((var_8 != var_2) ? ((var_6 ? var_8 : 4740306106928505040)) : (arr_11 [i_0] [18] [i_1] [18] [i_2] [i_5] [i_2])))));
                                var_23 = ((((max(-1766916171, (arr_14 [22] [13] [i_1 - 1] [i_2] [i_1 - 1] [i_1 - 1])))) ? (arr_0 [i_5]) : ((((((arr_7 [17] [i_1 + 1]) ? var_8 : (arr_16 [i_5] [16] [21] [i_5] [23])))) ? var_2 : (var_11 == var_1)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = var_1;
    #pragma endscop
}
