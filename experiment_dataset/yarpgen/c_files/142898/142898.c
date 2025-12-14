/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    var_18 = ((var_11 ? var_2 : (var_0 - var_7)));
    var_19 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_20 -= 2048;

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_21 = (min(var_21, ((max(((-(arr_2 [i_1 - 1] [i_1 - 1]))), ((~(arr_4 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1]))))))));
                    var_22 = ((~(max((((!(arr_0 [i_0] [i_1])))), ((27984 ? 1043916127 : -33))))));
                    var_23 -= ((((!((max(var_3, var_1))))) && (((arr_4 [i_1] [i_1 + 1] [i_2] [i_2]) && ((min(var_8, (arr_4 [i_0] [i_0] [21] [i_2]))))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_24 = (max(var_24, (((var_16 % (~1043916127))))));
                    var_25 += ((-(arr_9 [i_1 + 1] [14])));
                    var_26 = (((arr_6 [i_0] [i_0] [i_0] [i_0]) * (arr_6 [i_3] [i_3] [i_1] [i_0])));
                    arr_10 [i_0] [i_1] = (!var_14);
                }
            }
        }
    }
    var_27 = ((1790 ? 63487 : 1));
    #pragma endscop
}
