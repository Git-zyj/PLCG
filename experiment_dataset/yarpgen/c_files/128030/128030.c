/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;
    var_21 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_22 = (((((arr_5 [i_0] [i_1] [i_2]) ? 536870880 : 4091036720815965794)) * ((((((arr_6 [i_0]) & var_12)) | 0)))));
                    arr_7 [i_0] [i_0] [i_2] = (min((((21280 & (max(166, var_11))))), (((!var_15) ? var_4 : (arr_5 [i_0] [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_23 = 166;
                                var_24 &= (((((-21280 ? 90 : (arr_3 [i_0] [i_0] [4]))) ? var_1 : (((arr_9 [11] [i_1] [i_3] [0]) ? 74 : var_16)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_25 = ((var_6 << (!-21259)));
                                var_26 = ((((((((arr_4 [i_6] [i_5] [i_1]) ? var_8 : var_16)) | var_19))) ? 1843485438049669234 : (arr_14 [i_0] [i_5] [i_5] [i_0])));
                                var_27 = (max(var_27, (arr_11 [i_5] [i_5] [i_0])));
                                var_28 = ((((((var_2 | -21295) ? 18446744073709551615 : (((arr_8 [i_6] [18] [i_5] [i_2] [i_1] [18]) | (arr_0 [i_1] [i_5])))))) ? ((((!(arr_12 [i_0] [i_1] [i_2] [i_2] [i_5] [i_1] [i_0]))))) : -4091036720815965795));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
