/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, (((((((7680 + -1) - (var_15 + 57879)))) ? (((min(var_13, (arr_3 [i_2] [i_1] [i_2]))))) : (((arr_5 [i_0] [i_2] [i_2]) * 12714483582863486532)))))));
                    var_19 = (min(var_19, (((10 * (1306426467 & 17136538250546451525))))));
                    var_20 = ((((((arr_4 [11] [i_1] [i_2]) * var_9))) ? ((((arr_6 [i_0] [i_1]) ? (arr_6 [i_0] [i_1]) : (arr_6 [i_0] [i_2])))) : ((-(5 / var_4)))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 19;i_5 += 1)
            {
                {
                    var_21 = (min(var_21, (arr_10 [i_3])));

                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        var_22 = (((arr_11 [i_3 + 1] [i_3 - 2]) < (((!(arr_17 [2] [i_5] [i_4] [6]))))));
                        arr_18 [i_3] [i_3] [i_3] [i_3] &= ((((max(var_15, (arr_12 [i_4 - 2] [i_3 + 1])))) ^ (min((min(var_3, 103)), 511))));
                    }
                    for (int i_7 = 2; i_7 < 19;i_7 += 1)
                    {
                        var_23 = (~var_5);
                        var_24 = (arr_13 [i_3 - 1]);
                    }
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        var_25 = (min(var_25, ((min(var_0, (min(((max(var_17, var_13))), (10618090961622673869 | 57846))))))));
                        arr_25 [14] = var_1;
                        var_26 = max(57833, (((arr_10 [i_4 - 1]) ? (arr_10 [i_4 - 1]) : 17705152952963551096)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
