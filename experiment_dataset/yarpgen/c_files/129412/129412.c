/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (((arr_3 [i_0] [i_0] [i_0]) ? ((max((arr_0 [i_0 + 2]), (arr_0 [i_0 + 2])))) : var_12));
                arr_6 [i_1] [i_1] [3] = (((var_8 ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 + 1]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_20 = (min(var_20, var_4));
                            var_21 ^= -7242302210416875028;
                        }
                    }
                }
            }
        }
    }
    var_22 = (max(var_22, var_4));
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                {
                    arr_18 [6] [i_5 + 1] [i_5] = ((253609661 + (!var_5)));
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 13;i_8 += 1)
                        {
                            {
                                arr_23 [8] [i_7] [i_7] [8] [i_7] &= 824;
                                var_23 = 7242302210416875027;
                                var_24 = (min(var_24, (16617 * -7242302210416875027)));
                                var_25 = (arr_22 [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [14]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (var_16 == var_18);
    #pragma endscop
}
