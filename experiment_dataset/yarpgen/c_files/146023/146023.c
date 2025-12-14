/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(-28526, (((((var_10 << (95 - 76)))) ? 5678625669775414553 : ((min(var_5, var_6)))))));
    var_16 |= ((~(max((((var_14 ? var_3 : var_11))), -1598605656057117059))));
    var_17 = (max(var_17, var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_18 |= (arr_4 [i_0] [i_0] [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_2] [i_3] [i_2] [i_2] [i_1] [i_0] |= ((!(arr_8 [0] [16])));
                                arr_16 [i_4] [i_3] [i_2] [i_0] = -820770378;
                                var_19 = (min(var_19, (max(((-(min(-14820, 2296835809958952960)))), (((!(arr_12 [i_0] [i_1] [i_1] [i_3] [i_4]))))))));
                            }
                        }
                    }
                }
                var_20 = ((((((-112 ? (arr_1 [i_0]) : 14)) >= -1)) ? (((-((min((arr_6 [i_0] [i_1]), 42)))))) : (((-(arr_10 [i_0] [i_0] [17] [i_1] [i_1]))))));
                arr_17 [i_0] [i_1] [i_0] = (((arr_13 [14] [i_1] [i_0]) ? var_0 : (arr_13 [i_0] [i_0] [i_1])));
            }
        }
    }
    #pragma endscop
}
