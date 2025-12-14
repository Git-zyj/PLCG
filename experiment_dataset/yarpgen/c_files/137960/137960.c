/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                var_14 = ((!(((~(arr_4 [i_0] [7] [i_0]))))));
                var_15 = ((3318276431 ? 21713 : 1));
                arr_6 [4] [i_1] = (max(var_2, (((max((arr_0 [i_0]), 21713))))));

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] [i_2 - 1] &= (max(43823, 43058));
                    arr_11 [i_0] [i_0] [i_1 + 3] [i_1] = var_11;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] = ((var_7 | (min((arr_14 [i_2 - 1] [i_2 - 1] [i_2] [i_2]), 305234143))));
                                var_16 &= ((8927 && ((229490209 != (((-8932 ? 40984 : -158779051)))))));
                                var_17 = (((arr_7 [i_2] [i_1] [i_0]) > 820246966));
                                arr_17 [i_0] [i_1 + 3] [i_1 + 3] [i_1] [i_3] [i_4] [i_4] = (arr_2 [i_0 - 1] [0]);
                                var_18 *= (min((min(((4294967295 ? 1 : 0)), var_10)), -var_1));
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        arr_22 [i_5] = 0;
        arr_23 [i_5] = (((((1 ? 1 : 0))) ? (!4294967295) : var_2));
    }
    var_19 = (min(var_19, var_7));
    var_20 = 1;
    var_21 = ((((var_10 > (~var_10))) ? var_9 : ((max((!var_13), (!55480))))));
    #pragma endscop
}
