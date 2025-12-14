/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_6 ? var_1 : -768705754));
    var_12 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [13] [i_1] = (max((((!(-26 > -768705749)))), var_4));
                var_13 *= (4333588114841627474 != 65523);
                var_14 = ((!1742257757) ? var_4 : (((!(768705780 == -10965)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {

                            for (int i_4 = 2; i_4 < 21;i_4 += 1)
                            {
                                var_15 += (min(210, 2152266950));
                                arr_13 [i_1] [13] [i_3] [i_1] = (((arr_9 [i_1] [i_1] [i_3] [i_4]) ? ((-21 ? (arr_9 [i_0] [13] [i_2] [i_4]) : (var_7 * var_3))) : (((((arr_9 [i_4 + 1] [22] [i_2 + 1] [19]) <= -8858))))));
                            }
                            for (int i_5 = 0; i_5 < 25;i_5 += 1)
                            {
                                var_16 = (min(var_16, ((((((arr_11 [i_2 + 1] [i_2] [i_2 + 1] [i_2] [i_2]) ? (max(-4960502536612555351, (arr_11 [i_0] [i_1] [i_5] [i_3] [i_5]))) : ((((arr_2 [14] [14]) ^ var_8))))) << ((((((var_2 ? 5692635838235200094 : (arr_14 [i_0] [i_2] [i_2] [i_0] [i_5]))) ^ (((~(arr_8 [1] [i_5])))))) - 5692635838579292540)))))));
                                arr_16 [i_0] [i_1] [1] [i_1] [i_5] [i_0] [i_1] = (((((arr_12 [i_0] [i_0] [i_0]) - (arr_1 [i_2 + 1]))) >> (((arr_8 [i_0] [i_0]) + 797438773))));
                            }
                            var_17 = (-2147483647 - 1);
                            arr_17 [i_0] [i_0] [12] |= ((var_9 >= ((((!(arr_12 [i_2 + 1] [i_2 + 1] [i_2 + 1])))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
