/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    var_14 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [3] [i_1] [i_2] [i_1] [i_0] = ((((min(((var_1 ? (arr_7 [i_0] [8] [i_0]) : (arr_0 [i_4]))), 1))) ? (min((max(var_2, 536878446)), ((min(0, 0))))) : ((((!(arr_12 [i_1])))))));
                                var_15 = (min(-11, var_4));
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] [i_1] = ((arr_7 [i_2 + 2] [i_1 + 1] [7]) ? (arr_7 [i_2 - 1] [i_1] [i_0]) : var_4);
                    arr_16 [i_1] [6] = (!(((((min((arr_1 [0] [5]), var_0))) ? ((4294967290 ? var_11 : 0)) : (arr_4 [i_2 - 1] [i_1 + 1])))));
                    var_16 &= (((((4294967293 ? (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_2]) : var_5))) ^ ((((((468942875 ? 1 : 65523))) ? (arr_10 [i_2 + 2] [i_1 + 1] [i_1 + 1]) : var_0)))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_19 [i_0] [i_0] [i_2 + 2] [i_5] [i_5] |= (((((var_11 ? 3964407466 : (arr_6 [i_0] [i_0] [i_0] [i_0])))) ? (arr_1 [i_1] [i_2 + 1]) : (arr_0 [i_1 + 1])));
                        arr_20 [i_0] [i_1] [8] = ((3 | (~var_5)));
                    }
                }
            }
        }
    }
    var_17 |= var_0;
    var_18 = var_12;
    #pragma endscop
}
