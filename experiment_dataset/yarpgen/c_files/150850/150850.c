/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((((var_2 >= (-1 == var_13)))), var_1));
    var_15 = ((((-((max(0, var_0)))))) ? ((((var_5 == (1 == 1))))) : ((0 ? 0 : (5 - 5))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_1] = (arr_1 [i_0]);
                                var_16 = (arr_6 [i_1] [i_1] [i_2] [i_2] [i_3] [i_4]);
                                var_17 = (((((arr_2 [i_0] [i_4]) ? (arr_10 [i_3] [i_4]) : (3425679908 && 0)))) ? ((0 ? 1 : 10289)) : (max(((-1984851500 ? var_1 : (arr_5 [i_0]))), (var_6 >= var_1))));
                                arr_13 [i_0] [i_1] [i_1] [i_3] [i_4] = (((((arr_6 [i_1] [i_1] [i_4 - 1] [i_3] [i_4] [i_1]) ? (arr_6 [i_1] [i_1] [i_4 + 1] [i_1] [i_4] [i_3]) : 126))) ? (max((arr_6 [i_1] [i_1] [i_4 + 1] [i_3] [i_3] [i_2]), (arr_6 [i_1] [i_1] [i_4 - 1] [i_1] [i_4] [i_1]))) : (((arr_6 [i_1] [i_4] [i_4 - 1] [i_3] [i_4] [i_1]) ? 18322028372362233069 : 17592051826688)));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_1] [i_4] = ((-((-127 ? 126 : ((max((arr_0 [i_2]), 1)))))));
                            }
                        }
                    }
                    var_18 = ((((((35336 ? var_4 : -1)) >= (arr_10 [i_0] [i_2]))) ? var_9 : ((((arr_0 [i_0 - 1]) >= -var_2)))));
                    var_19 = (min(var_19, (((min(((var_9 ? (arr_11 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2] [i_2]) : -22084)), var_2))))));
                    arr_15 [i_1] [i_1] [i_1] = ((((((arr_5 [i_1]) & (arr_1 [i_0 - 3])))) ? (((!(((var_13 ? var_5 : -1)))))) : 1));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_23 [i_6] [i_1] [i_2] [i_1] [i_0] = (((-10046 * var_0) == (4955725353295008857 > var_13)));
                                arr_24 [i_0] [i_1] [i_2] [i_1] [i_6] [i_0] = 4294967284;
                                var_20 = (min(var_20, (((((123 ? 1 : (arr_22 [i_0 - 3] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 3]))) * ((((((((arr_19 [i_0] [i_1] [i_2] [i_5] [i_6]) >= 10279)))) == 23))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_7;
    #pragma endscop
}
