/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= (!(((!var_13) > var_12)));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_18 = ((var_0 ? (((arr_0 [i_0]) >> (var_11 - 8238))) : (arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 = (min(var_1, ((((max((arr_5 [i_0]), (arr_7 [i_1])))) ? (arr_4 [i_0] [i_1] [i_2]) : (max(var_3, 720556860))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 = (28 + 4294967295);
                                arr_15 [i_4 - 4] [i_0] [12] [10] [i_0] [i_0] = ((((((((var_15 >> (182 - 177))) >= (arr_1 [i_1]))))) + ((var_2 * ((((!(arr_6 [i_0] [i_0] [18])))))))));
                            }
                        }
                    }
                    arr_16 [i_0] = (((((min(var_11, (arr_0 [i_1])))) && (((var_8 ? var_11 : (arr_6 [i_0 - 1] [i_0] [i_2])))))));
                }
            }
        }
        var_21 -= (max(var_9, var_10));
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_22 = (((28 ? 13 : -5587089042675933296)));
        var_23 = (max(var_23, var_12));
    }
    var_24 += var_0;
    var_25 = (((var_9 < var_11) & var_16));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            {
                arr_24 [i_6] [i_6] [i_6] = ((((min((((arr_2 [i_7]) ? (arr_7 [i_6]) : (arr_8 [i_6]))), var_16))) ? var_9 : (min(((((arr_2 [i_7]) != var_7))), ((var_9 ? -13918 : var_9))))));
                var_26 = (~var_16);
            }
        }
    }
    #pragma endscop
}
