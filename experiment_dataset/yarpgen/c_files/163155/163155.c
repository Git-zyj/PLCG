/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((!21642) && 6949700053349925446)) || ((!(6949700053349925436 && 12068)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_10 [1] [i_1] [1] [i_2] [i_2] = ((((((min(var_8, (arr_2 [i_2])))) < 15)) ? (~2113858301) : (((((35 ? 4294967295 : 3))) ? (((-32767 - 1) ? var_9 : 60577)) : ((max((arr_5 [i_2] [i_1] [7] [i_2]), var_4)))))));
                            arr_11 [i_0] [i_0] = (max((((arr_3 [i_0] [i_1] [i_2]) ? (arr_3 [i_2] [i_0] [i_0]) : (-32767 - 1))), -21624));
                            arr_12 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] = (-(((max((arr_3 [i_3] [i_1] [i_1]), (arr_3 [i_0] [i_2] [12]))))));
                            arr_13 [i_0] [i_1] [i_1] [i_3] [i_0] [i_3] = -3439310025676497489;
                        }
                    }
                }
                var_15 = (((arr_6 [1] [1]) ? (((!(~0)))) : (min(((var_2 ? (arr_5 [i_1] [i_1] [i_0] [i_0]) : (arr_2 [i_0]))), (((!(arr_1 [i_0]))))))));
            }
        }
    }
    var_16 = var_10;
    #pragma endscop
}
