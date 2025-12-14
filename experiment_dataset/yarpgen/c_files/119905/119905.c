/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 65531;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_14 &= (arr_0 [i_0]);
                    arr_8 [i_0] [i_1] [i_1] [i_1] = (((arr_7 [i_0] [i_0]) | (~2705774902)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_15 = (arr_3 [i_0] [i_1]);
                                arr_13 [i_0] [i_1] [i_0] [i_3] [i_4] = (min((((((((var_4 + 2147483647) << (((var_8 + 1298957938) - 2))))) ? ((2486316694545871964 ? 204 : 48)) : (arr_1 [i_4])))), (max(-var_8, (max((arr_3 [i_2] [i_4]), (arr_6 [i_3] [i_3] [i_1])))))));
                                var_16 = (i_1 % 2 == zero) ? ((max((arr_11 [i_2 + 1] [i_3 + 1]), ((((((arr_6 [i_1] [i_1] [i_1]) << (((arr_12 [i_1] [i_1] [i_4]) + 1626906591))))) ? ((214 << (((arr_2 [i_2 + 1]) - 52232)))) : 0))))) : ((max((arr_11 [i_2 + 1] [i_3 + 1]), ((((((arr_6 [i_1] [i_1] [i_1]) << (((((arr_12 [i_1] [i_1] [i_4]) + 1626906591)) - 677451508))))) ? ((214 << (((arr_2 [i_2 + 1]) - 52232)))) : 0)))));
                                var_17 = (arr_12 [i_0] [i_1] [i_2 + 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (max(var_18, var_5));
    #pragma endscop
}
