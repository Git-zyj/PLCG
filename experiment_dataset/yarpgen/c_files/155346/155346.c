/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 = ((((((arr_3 [i_2]) + (arr_3 [i_0])))) ? (((((20 ? 32760 : (arr_3 [i_2])))) ? ((var_3 ? var_10 : var_14)) : var_3)) : (((min(-32765, var_13))))));
                    var_20 = ((((!(arr_5 [i_0] [i_1] [i_2]))) ? (((((-(arr_5 [i_0] [i_1] [i_0]))) != var_7))) : ((-(arr_3 [i_1])))));
                }
            }
        }
        var_21 = (max(((180 ? 780803850 : 1400452398)), ((((((!(arr_3 [i_0])))) + ((~(arr_4 [i_0]))))))));
        var_22 = ((((((arr_7 [i_0]) / (arr_7 [i_0])))) ? ((((arr_7 [i_0]) || (arr_7 [i_0])))) : (((arr_7 [i_0]) ? (arr_7 [i_0]) : (arr_7 [i_0])))));
        var_23 -= (min(((-((60689 ? var_18 : 250)))), (((!(arr_6 [i_0] [i_0] [i_0]))))));
    }
    var_24 = var_13;
    #pragma endscop
}
