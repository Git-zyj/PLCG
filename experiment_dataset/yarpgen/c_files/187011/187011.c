/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_0] = 1;
                                var_12 = (min(var_12, (((!((((arr_2 [i_0 + 1]) ? var_9 : (arr_2 [i_0 + 1])))))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {

                            for (int i_7 = 2; i_7 < 18;i_7 += 1)
                            {
                                var_13 = ((!((min((arr_14 [i_1] [i_5] [i_0]), (((arr_17 [i_0] [i_0] [i_7 - 2] [i_6] [i_7] [i_7]) % 4294967295)))))));
                                arr_20 [i_7] [i_0] [18] [i_5] [i_5] [i_0] [i_0] = (((!-18869) ? (min((min(-8402, var_7)), (!18869))) : (~154)));
                                var_14 = (min(var_14, (((((((((var_11 ? (arr_1 [i_0] [i_0]) : var_6))) ? ((((arr_14 [6] [i_1] [i_6]) < var_0))) : (arr_17 [i_1] [i_7] [i_5 + 2] [i_6] [i_6] [i_7])))) ? ((((((arr_9 [i_0 - 1] [i_5] [i_5] [i_1] [i_7 - 1] [i_1] [i_0]) ? (arr_1 [i_0] [3]) : (arr_17 [2] [i_7] [1] [i_6] [i_6] [i_6])))) ? (max(var_11, var_8)) : (((2845087117 << (((arr_18 [i_0] [i_1] [i_5] [9]) + 1385000112))))))) : ((min(((0 ? 1 : (arr_16 [i_7]))), (1 / 252)))))))));
                            }
                            var_15 ^= (min(((-(arr_3 [i_5 - 2]))), ((252 ? var_6 : 1))));
                            var_16 = ((-((min(var_9, 53458)))));
                            arr_21 [i_0 - 1] [i_0] [i_5] [i_6] = (max(var_0, ((((!(arr_14 [i_0] [i_1] [i_0])))))));
                        }
                    }
                }
            }
        }
    }
    var_17 = ((~((175616967415658044 ? 15935503967285204806 : 0))));
    var_18 = var_3;
    #pragma endscop
}
