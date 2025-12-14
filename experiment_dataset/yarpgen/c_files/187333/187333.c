/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~6867232498119467628);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        var_21 = (~0);
                        var_22 = (~0);
                        var_23 = (~6867232498119467607);
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        var_24 = (!-6867232498119467633);

                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_25 = (!17);
                            var_26 = -1;
                        }
                    }

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_27 = (min(var_27, (((-(~-3720593173125943708))))));
                        var_28 = (min(var_28, (((~(~6867232498119467607))))));
                        var_29 = -21436;
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        var_30 = ((-(!10111029061916970325)));
                        var_31 |= -21425;
                        arr_22 [i_2] [i_2] = (!-11780);
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {

                        for (int i_9 = 2; i_9 < 12;i_9 += 1)
                        {
                            arr_27 [i_0] [i_1] [i_0] [i_8] [i_8] [i_8] = ((!(~67)));
                            var_32 |= (!-1);
                        }
                        var_33 |= ((!(~6867232498119467623)));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        var_34 *= 1;
                        var_35 = (~3326);
                        arr_30 [i_0] [i_0] = (~32);
                    }
                    var_36 = (~17);
                    arr_31 [i_0] [i_1] [i_0] = 3330;
                    var_37 = ((((!(~3297821150)))));
                }
            }
        }
    }
    #pragma endscop
}
