/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_0 ? (var_0 * var_17) : (((!4294967281) ? (~15) : var_9))));
    var_19 = var_7;

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_20 += ((~(-2147483647 - 1)));
        arr_2 [i_0] [i_0] = (max(((var_12 ? ((min(0, 3666933632))) : (~1753604017828078080))), (~var_15)));
        var_21 = ((~(((!(arr_0 [i_0 - 2]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    var_22 = ((~(((arr_8 [i_1] [i_2] [i_2] [i_3]) ? (arr_3 [i_1]) : var_5))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_15 [i_2] [i_4] [i_3] [i_3] [i_5] [i_5] = (((arr_7 [i_1] [i_2] [i_1]) ^ ((var_0 ? (arr_4 [i_2] [i_2]) : var_8))));
                                var_23 = (max(var_23, (((4294967281 ? (arr_7 [i_5] [10] [i_3]) : 9)))));
                                var_24 = (max(var_24, ((((14 & 0) ^ var_4)))));
                                var_25 -= ((~(arr_8 [i_1] [i_2] [i_3] [i_5])));
                            }
                        }
                    }
                    var_26 = (~var_2);
                }
            }
        }
        var_27 = (~(arr_13 [i_1]));
    }
    #pragma endscop
}
