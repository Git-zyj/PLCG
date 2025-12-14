/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_14 ^= ((-15 ? (arr_0 [i_0 + 1] [i_1]) : ((((arr_0 [i_0 + 1] [i_1]) != (arr_0 [i_0 + 1] [i_0 + 1]))))));
                            var_15 = (min((var_2 & var_3), ((-((1 / (arr_6 [i_0] [11] [i_0] [i_0])))))));
                            var_16 = (((var_13 + 2147483647) >> ((var_1 ? 1 : (arr_8 [i_0 + 1] [i_0 + 1])))));
                            arr_10 [i_3] [i_3] [20] [i_3] = ((((((!((!(arr_0 [i_0] [i_2]))))))) | (((max(13696892419281913266, var_9)) >> ((((arr_4 [18] [i_1] [i_1]) <= var_6)))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_17 = var_11;
                                var_18 = (arr_0 [i_0 + 1] [i_0 + 1]);
                            }
                        }
                    }
                }
                arr_20 [i_0] [i_0] [i_0 + 1] = ((var_10 ? var_12 : (min(var_5, -1))));
                var_19 = (max(var_19, ((max(((1762683622 | (~var_10))), (((10022273932805766184 ? (~1941921783) : var_3))))))));
            }
        }
    }
    var_20 = var_0;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 0;i_8 += 1)
        {
            {
                arr_25 [i_7] [i_7] [9] = 4;
                var_21 = (max(((((-21355 | var_12) < 681))), (((((arr_5 [i_7] [11] [i_7] [i_8]) & var_6)) | (var_0 | var_2)))));
            }
        }
    }
    #pragma endscop
}
