/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_8 ? (var_3 > 10886640556115415905) : ((1 ? var_7 : var_0))))) && var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_20 &= (((((!(arr_4 [i_1 - 1] [i_2] [i_2])))) != 1915));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_1] [20] [i_0] [i_0] [i_4] = ((-(min((arr_12 [i_0]), 1915))));
                                var_21 -= ((((arr_5 [1] [i_1 + 4] [i_3 - 1]) ? (arr_5 [i_4] [i_1 + 4] [i_3 + 1]) : (arr_5 [i_0] [i_1 + 1] [i_3 + 1]))));
                                var_22 = ((!((((100 ? var_8 : (arr_4 [0] [19] [i_2])))))));
                            }
                        }
                    }
                }
                var_23 = var_10;
                var_24 = (((((~(((!(arr_10 [i_0] [i_1] [i_1 - 1])))))) + 2147483647)) >> ((((max((arr_10 [i_1 + 4] [i_1] [i_1 - 1]), (arr_10 [i_1 - 1] [i_1 + 1] [i_1 + 2])))) + 9)));
            }
        }
    }
    #pragma endscop
}
