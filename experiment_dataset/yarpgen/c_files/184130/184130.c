/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    var_15 = ((var_6 ? var_6 : var_12));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((~(((!(arr_0 [i_0 - 3]))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_16 = (min(((max(((var_0 << (((arr_7 [2] [i_1]) - 3433031592488453919)))), var_5))), ((1669191108 * (max(3523768692350836343, 3523768692350836343))))));
                            arr_12 [i_2 - 1] [i_2 - 1] [i_1] [i_0] = (((arr_9 [i_0] [i_0] [i_2 + 1] [i_3]) ? ((max(var_13, (max((arr_11 [i_3] [i_2] [i_1] [i_0]), (arr_5 [i_2 - 1] [i_1] [i_0 + 1])))))) : (((arr_7 [i_0 - 2] [i_0 + 1]) << (((arr_7 [i_0 - 2] [i_0 - 1]) - 3433031592488453923))))));
                        }
                    }
                }
            }
        }
    }
    var_17 = ((((max(-var_5, ((max(var_13, var_0)))))) ? (((((4210 ? var_11 : var_3))) ? var_1 : var_10)) : (((((1314705312 ? 63422 : var_0))) ? ((var_11 ? 1 : var_2)) : (((min(var_7, var_4))))))));
    #pragma endscop
}
