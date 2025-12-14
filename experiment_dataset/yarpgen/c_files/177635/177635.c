/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~((var_2 ? -87627681 : var_11))));
    var_14 = (max(var_14, var_2));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = ((~((((255 ? 1 : 1))))));
                                arr_13 [21] [i_1] [i_0] [18] [4] [9] = (max((min((arr_7 [i_1 + 3] [3] [1] [i_1] [i_1]), (arr_7 [i_1 + 2] [i_0] [19] [1] [15]))), (arr_7 [i_1 + 1] [i_1] [20] [20] [i_0])));
                                arr_14 [12] [16] [6] [17] [i_0] = (((((1 ? (~var_11) : 1))) ? var_7 : ((min(((var_6 ? 29115 : var_4)), (~var_12))))));
                                arr_15 [i_0] [1] [i_2] = (arr_6 [15] [1] [8]);
                                var_16 = ((((arr_10 [12] [i_1 + 1] [i_2] [i_3] [i_0] [18]) <= var_0)));
                            }
                        }
                    }
                    var_17 = (max(var_17, 2745094890288016701));
                    var_18 = ((min(245, (arr_11 [9] [13] [20] [12] [9] [19] [16]))));
                    var_19 += (((arr_6 [i_2] [i_1 + 4] [i_0]) ? ((65532 ? (arr_6 [i_0] [i_1 + 4] [i_2]) : var_0)) : var_7));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 24;i_6 += 1)
        {
            {
                arr_20 [i_6] [18] = ((-((232 ? (arr_18 [i_5] [i_6 + 1]) : (arr_18 [18] [i_6 + 1])))));
                var_20 = (max(var_20, ((((((min((arr_17 [i_5 + 3]), (arr_17 [i_5 + 2]))))) < (((arr_17 [i_5 + 2]) ? var_0 : 11)))))));
            }
        }
    }
    #pragma endscop
}
