/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(((-((max(var_6, var_8))))), (max((~13060), ((min(var_10, var_11)))))));
    var_13 = (!((max((~120), (!var_5)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 = ((!((max((((~(arr_0 [i_0])))), var_2)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_15 = (max((min(-8347749155619759073, 134)), ((((max(168, 144)))))));
                        var_16 ^= ((!((max((min(255, (arr_5 [i_0] [i_0] [i_0]))), var_1)))));
                        var_17 = (min((((~((~(arr_3 [i_0])))))), (min((!-15698), ((-(arr_6 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3])))))));
                        var_18 ^= (min(((max((max(var_7, 135)), (min((arr_3 [i_0]), var_7))))), (max((min(var_9, (arr_2 [i_0] [i_0]))), ((max((arr_7 [i_0] [i_0] [i_0]), 118)))))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 16;i_5 += 1)
        {
            {

                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    var_19 *= (min(((-((max((arr_3 [i_4 + 1]), var_11))))), (((!((max((arr_9 [i_4]), (arr_10 [i_5] [i_6])))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            {
                                arr_23 [i_4] = min(61, 121);
                                arr_24 [i_4] [i_4] [i_6] [i_6] [i_6] [i_6] [i_4] = ((-((~(!111)))));
                            }
                        }
                    }
                    arr_25 [i_4] = ((!(((~(min(var_5, (arr_14 [i_4] [i_4] [i_4]))))))));
                }
                var_20 = (min(var_20, ((!((min(var_10, (arr_9 [18]))))))));

                /* vectorizable */
                for (int i_9 = 3; i_9 < 17;i_9 += 1)
                {
                    var_21 = (arr_7 [i_4] [i_5 - 2] [i_4]);
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            {
                                arr_37 [i_4 - 1] [i_5] [i_4] [i_4 - 1] [i_11] = ((!(((~(arr_4 [i_11]))))));
                                arr_38 [5] [i_4] [5] [i_10 - 1] [i_11] [i_10 - 1] [i_4] = (!23);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
