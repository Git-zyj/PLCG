/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_19 = (((-14028 ? 1 : 31184)));
                var_20 = (((((arr_5 [19]) - var_2)) - ((min((arr_5 [i_1 - 1]), 34698)))));
            }
        }
    }
    var_21 = (min(var_21, -14028));
    var_22 = ((((((((243 ? var_9 : var_5))) ^ (min(17017604217882469949, var_18))))) ? (((-14019 ? 31184 : (-127 - 1)))) : var_13));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_23 = ((var_15 ? (arr_8 [i_2]) : (((~(arr_6 [i_2] [i_2]))))));
        var_24 = (arr_1 [i_2] [i_2]);
        var_25 = (((arr_1 [i_2] [i_2]) ? (arr_1 [16] [i_2]) : (arr_1 [i_2] [i_2])));
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 13;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_26 = var_3;
                                var_27 = ((((((arr_8 [i_5 - 3]) == (arr_8 [i_5 + 2])))) - ((60114 ? 30837 : var_17))));
                            }
                        }
                    }
                    var_28 = var_3;
                    var_29 = (min(var_29, (arr_1 [1] [i_3])));
                }
            }
        }
    }
    #pragma endscop
}
