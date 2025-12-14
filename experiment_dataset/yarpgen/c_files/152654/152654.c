/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~-var_5);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 = (-(!var_2));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_20 = (!var_0);
                        var_21 |= ((-(!1072693248)));
                        var_22 = -0;
                        arr_12 [i_3] [i_2] [i_1] [i_0] [i_0] = (~-10279);
                        arr_13 [i_1] = ((~(~12579680207972495645)));
                    }
                    for (int i_4 = 2; i_4 < 16;i_4 += 1)
                    {
                        arr_18 [i_1] [i_1] [i_4] = ((!((((-(arr_11 [i_1] [4] [i_1] [i_1])))))));

                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_23 = (~40921);
                            var_24 ^= -var_12;
                        }
                        var_25 = ((!((!((!(arr_9 [6] [2])))))));
                        var_26 = (((~(~24615))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                arr_30 [i_0] [i_1] [i_6] [i_1] = 1;
                                var_27 = (~var_2);
                                arr_31 [i_0] [i_1] [i_0] [2] [i_7] |= ((-((~(~30713)))));
                                arr_32 [i_1] [i_1] [i_7] [i_6] = ((-(((!(!1072693250))))));
                                arr_33 [i_0] [i_0] [i_1] [i_0] = (~-34823);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
