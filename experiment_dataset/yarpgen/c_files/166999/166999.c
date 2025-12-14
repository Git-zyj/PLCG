/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_20 *= ((~(((!var_13) ? (arr_12 [11] [7] [i_2] [i_2] [1] [i_2]) : var_9))));
                                arr_13 [i_0] [i_0] = (((arr_10 [i_0] [i_0] [i_2]) ? ((1 ? ((170 ? 60826 : 6265309971007948173)) : 174)) : ((min(170, 85)))));
                                var_21 = -81;
                                var_22 = ((((((max(var_14, var_19)) | (arr_11 [i_0] [19] [i_0] [i_3] [i_4])))) ? var_11 : (~var_11)));
                            }
                        }
                    }
                    var_23 = ((((max(((-(-32767 - 1))), var_8))) ? ((80 ? (-4802163419688592126 || var_18) : ((max(var_1, 20))))) : (((!(((-9 ? var_4 : 1))))))));
                    arr_14 [i_0] [i_1] [i_2] = (((((-86 ? ((var_4 ? 44417 : 0)) : ((max((arr_2 [i_2]), 82)))))) ? ((-(arr_8 [i_0] [i_1] [i_2] [1]))) : 7));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            {
                var_24 = (max(var_24, -2));
                arr_19 [i_5] = ((3587 ? -18 : (arr_5 [i_6] [i_5] [i_5] [i_5])));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 11;i_8 += 1)
                    {
                        {
                            var_25 |= (arr_0 [1]);
                            arr_25 [6] [i_8] [i_8] [i_8] [i_7] [1] = -var_6;
                            var_26 = (max((arr_24 [i_5] [i_6] [i_6] [i_8]), ((-((var_6 ? var_13 : var_12))))));
                        }
                    }
                }
                arr_26 [i_5] = (arr_2 [11]);
            }
        }
    }
    var_27 = (max(0, (max(var_17, (((var_17 ? var_4 : 3464036404)))))));
    #pragma endscop
}
