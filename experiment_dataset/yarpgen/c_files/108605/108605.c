/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((max(((var_3 ? 127 : 28222)), var_7))), (((((1 ? 0 : 1))) ? (var_10 * var_8) : (!var_1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = (((((((min(var_9, var_3))) ? (min(17474521498201557154, var_5)) : (var_3 & var_10)))) ? ((((max(var_5, var_6)) - 1))) : (max((((arr_1 [i_1]) ? (arr_2 [i_0]) : var_9)), var_5))));
                    var_13 += ((max((arr_6 [i_2] [i_0] [i_0]), (arr_3 [i_1 - 3] [i_1 - 1]))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_14 = ((((((arr_8 [i_0]) ? (arr_8 [i_3 - 2]) : (arr_8 [i_0])))) - (min((arr_12 [i_4] [i_3 + 2] [i_2] [i_1]), (~13246)))));
                                var_15 = (max(var_15, -var_2));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
