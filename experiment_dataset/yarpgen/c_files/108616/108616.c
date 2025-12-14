/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 8;i_2 += 1)
            {
                {
                    var_18 = (!0);
                    var_19 += ((((((max(var_14, 3)) << var_1))) ? ((var_16 & (~3580711517))) : ((max(((min(var_7, var_1))), (arr_6 [i_0] [i_0] [i_2] [i_2]))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [6] [i_3] = (((arr_6 [i_0] [i_2 + 1] [i_0] [i_3]) && -4));
                        arr_11 [i_1] [i_0] [i_0] [i_0] [i_2] = var_12;
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_20 = (3 + -7);
                        arr_14 [i_0] [i_0] [3] [i_0] [9] = ((~(max(((((arr_8 [i_0] [i_1] [i_0] [i_4]) ? 3398813754 : var_8))), (var_16 & var_15)))));
                        var_21 *= var_0;
                        var_22 = (max((((min(var_7, var_16)) ^ var_2)), var_16));
                    }
                    var_23 = ((((max(var_10, (min(-1, (arr_6 [i_0] [i_1] [i_2] [1])))))) ? ((min((arr_7 [i_0] [i_1] [i_2 - 1]), (arr_13 [i_0] [i_1] [i_0])))) : (((var_4 <= ((var_14 ? 13 : 3398813754)))))));
                }
            }
        }
    }
    var_24 = (max((((896153541 ? var_1 : var_14))), var_0));
    var_25 = (!15);
    #pragma endscop
}
