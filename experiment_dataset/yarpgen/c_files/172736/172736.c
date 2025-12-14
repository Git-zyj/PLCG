/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (((~(~5365389526336732155))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_20 = (max(var_20, (((((7935630078739379308 ? 32393 : 32393)) > var_7)))));
                            var_21 = (max(var_21, ((((!var_16) && ((min(var_0, var_13))))))));
                            var_22 = (max(var_22, (((-var_13 ? ((max(203, -157))) : (var_15 <= var_17))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] [15] [i_0] [9] [i_5 + 1] [15] = (min((((arr_16 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [1]) * var_13)), (((max(var_11, 92)) >> (((arr_3 [i_6 - 1] [i_5 + 1]) - 224))))));
                                var_23 = ((((arr_10 [i_6 - 2] [i_1] [i_1] [i_0 + 1]) % (arr_10 [i_6 - 1] [4] [i_6] [i_0 - 1]))));
                                arr_24 [i_0] [i_1] [14] [i_5 + 4] [i_0] = ((!(((4215638883733022193 ? (arr_13 [i_1] [i_5 - 4] [i_5 + 1] [i_5 - 4]) : (arr_17 [i_0] [i_0 + 1] [i_4]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
