/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] [1] = (max((((((arr_4 [i_0] [i_0]) / 1)))), (~1536)));
                    arr_8 [i_0] [i_1] [i_0] [i_0] = (-28811 ? (((arr_3 [i_0]) ? ((-(arr_5 [i_0] [20]))) : 3452918281)) : var_6);
                    arr_9 [i_0] = ((-5271697991448020929 ? ((min((arr_4 [i_0] [i_0]), (~17114)))) : ((((((arr_6 [1] [i_1] [i_1] [i_1]) ? (arr_2 [3] [i_1] [i_2]) : var_16))) ? (((-(arr_4 [i_1] [i_0])))) : ((var_15 ? var_5 : 512))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        arr_17 [i_0] [i_0] [i_4 + 1] [i_5] [i_0] = ((var_6 ? var_13 : (arr_16 [i_4 - 1] [i_0] [i_4 + 2] [i_0])));
                        var_18 = (arr_13 [i_4] [i_4] [i_4 + 1] [i_4 - 2]);
                        var_19 = (var_1 - var_2);
                        var_20 = (min(((((arr_15 [i_0] [i_0] [i_4] [i_5] [i_0]) ? var_10 : (((arr_10 [i_5]) & var_1))))), (min(var_5, ((((arr_0 [i_5]) || var_7)))))));
                        arr_18 [i_0] [7] [i_3] [i_0] [i_3] = 1;
                    }
                }
            }
        }
    }
    var_21 = (((5194727707437229136 / 246307639) ? (((var_12 ? 918932650 : var_9))) : ((var_15 ? ((var_13 ? var_12 : var_1)) : -918932650))));
    #pragma endscop
}
