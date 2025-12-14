/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 19;i_4 += 1) /* same iter space */
                            {
                                var_12 = (arr_11 [i_0] [i_1] [1] [1] [i_4]);
                                arr_12 [i_0] [0] |= (((arr_9 [i_0]) > ((((min(var_2, (arr_9 [i_4 - 1])))) ? (min((arr_7 [i_1]), 8024102380637706343)) : (arr_0 [i_3 + 2] [i_0 - 4])))));
                                arr_13 [i_0 - 2] [0] [i_0 - 2] [18] [0] [12] &= ((((((arr_3 [i_0 - 1]) > -587361511))) > 1));
                                var_13 = (arr_6 [i_4] [1] [1] [i_3]);
                            }
                            for (int i_5 = 1; i_5 < 19;i_5 += 1) /* same iter space */
                            {
                                var_14 = ((~(((arr_9 [i_0 - 1]) ? (arr_9 [i_5 + 2]) : (arr_14 [i_2] [i_1] [i_0] [i_3] [i_3])))));
                                var_15 -= (min((1 > 0), (min((arr_8 [i_0] [6] [i_0] [1] [i_0 + 2] [i_0 - 3]), (arr_8 [i_0] [1] [1] [2] [i_0 + 2] [i_0 - 3])))));
                                var_16 = (min(var_16, var_11));
                                var_17 = var_3;
                                arr_16 [i_0] [i_2] [i_0] [i_2] [i_1] [i_0] [i_2] = (min(65483, 1));
                            }
                            arr_17 [i_0] [i_0] [12] [i_2] [i_3] [i_3] = var_7;
                        }
                    }
                }
                var_18 = ((0 & var_4) != (((((((arr_1 [4]) == (arr_10 [13] [i_1] [i_1] [i_0])))) / 26961))));
            }
        }
    }
    var_19 = (~var_4);
    var_20 = (min(var_20, (((var_7 ? var_2 : ((var_5 / ((var_4 ? var_6 : 8318085679427340319)))))))));
    var_21 = var_7;
    #pragma endscop
}
