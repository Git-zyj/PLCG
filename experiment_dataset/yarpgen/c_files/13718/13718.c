/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!var_4) + ((-var_8 ? ((1770234268 ? -94 : 18446744073709551593)) : 93)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 = (max((((arr_5 [i_2 + 2] [i_1] [i_2]) ^ (arr_7 [i_0] [i_2 + 1] [i_2 + 2] [i_2 + 2]))), 4569114209972797879));
                    var_21 -= (((max((max(var_15, var_6)), (((var_3 ? (arr_5 [1] [i_1] [1]) : (arr_8 [i_1] [i_2 + 2])))))) | ((min(-var_16, (min(var_16, -10973)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_22 = (max(var_22, var_7));
                                arr_13 [i_0] [i_1] [i_2] [i_3 - 3] [i_4] = (min((((60441 || 2463878467290878579) << ((((-2040925306 ? -5840995645617714231 : 87)) + 5840995645617714261)))), (((arr_9 [i_2 + 2] [i_2 - 1] [i_2 - 1] [i_3 + 4] [i_3] [i_3]) & var_15))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [i_0] = ((!(((-92 - (var_5 + var_15))))));
                }
            }
        }
    }
    #pragma endscop
}
