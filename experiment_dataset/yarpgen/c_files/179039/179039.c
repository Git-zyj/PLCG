/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((1 * (!63)));
                var_13 = (max(var_13, (~1109467370)));
                var_14 = (min(var_14, (arr_5 [i_0] [i_1])));
            }
        }
    }
    var_15 &= 572694553;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                var_16 = (arr_10 [i_2]);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_17 |= ((((207 == (arr_8 [i_4]))) ? ((((-(arr_16 [i_4] [i_4] [i_2] [i_2]))) >> (!var_8))) : (((min(var_8, var_10))))));

                            for (int i_6 = 0; i_6 < 17;i_6 += 1)
                            {
                                var_18 += (~6481531999624929214);
                                var_19 |= 1040;
                            }
                            for (int i_7 = 0; i_7 < 17;i_7 += 1)
                            {
                                arr_23 [i_7] [i_3] [i_7] [i_3] [i_7] [i_3] |= (((((-(arr_11 [i_7] [i_7])))) >= -23));
                                var_20 += ((~(arr_8 [i_4])));
                            }
                            for (int i_8 = 0; i_8 < 17;i_8 += 1)
                            {
                                arr_26 [i_2] [10] |= var_3;
                                var_21 = (arr_8 [i_2]);
                                var_22 = (((~(arr_14 [i_2] [i_3] [i_3]))));
                                arr_27 [i_5] [i_3] [i_2] = (arr_7 [i_4] [i_2]);
                            }
                            arr_28 [i_2] [14] [i_2] [i_2] [i_3] [14] = (((arr_24 [i_2] [i_2] [i_3] [i_3] [i_4] [i_5]) & (((arr_24 [i_2] [i_2] [i_3] [i_2] [i_4] [i_5]) / var_3))));
                        }
                    }
                }
                var_23 = ((18909 ? 197 : 0));
                var_24 = (arr_16 [i_2] [i_2] [i_2] [i_2]);
                arr_29 [i_2] [i_3] = ((-5791756791550108396 + 9223372036854775807) >> 0);
            }
        }
    }
    #pragma endscop
}
