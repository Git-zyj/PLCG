/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_6 ? -var_7 : var_4));
    var_13 = (max(var_13, ((((~-1) ? -1 : ((((var_4 ? -145832863 : var_8)) | (-4096 && 145832863))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_14 |= 3;
                                arr_15 [i_4 + 1] [i_0] [i_0] [i_1 - 2] [2] = arr_9 [i_0 - 1] [i_1 + 1] [i_0 + 1] [i_3] [18];
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = -6;
                                arr_17 [i_0] = (arr_12 [i_0]);
                            }
                        }
                    }
                    arr_18 [i_0] = (arr_3 [i_0]);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_15 = (~5);
                                var_16 = (min(var_16, (arr_22 [8] [20] [i_5] [i_6])));
                                var_17 += ((((min((max((arr_6 [i_1] [i_0 - 1] [i_1]), 145832862)), (min(-6, 1373321252))))) | (arr_14 [1] [i_0 - 1] [i_1 - 2] [i_1])));
                                var_18 *= -1;
                            }
                        }
                    }
                    var_19 = (((arr_24 [10] [i_0 + 1] [1] [i_1] [13] [i_2]) ? (((arr_13 [i_1 - 2] [i_0]) ? (-22397 + 145832844) : (arr_11 [i_1] [i_1 + 1] [i_1] [i_0 + 1] [i_2]))) : (min((((var_0 + 2147483647) << (1 - 1))), var_4))));
                }
            }
        }
    }
    var_20 = ((((min(((max(var_9, var_10))), (max(var_11, 3))))) ? (((145832832 && var_9) ? (5 == var_8) : ((255 ? var_6 : var_1)))) : (min((!5562875290201497819), (-145832855 | var_1)))));
    #pragma endscop
}
