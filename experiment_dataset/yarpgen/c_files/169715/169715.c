/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, ((max((-9223372036854775807 - 1), -344591751)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] = (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [8] [i_0]);
                                var_12 = (min(var_12, ((((arr_3 [i_1] [i_2] [i_1]) <= ((var_7 ? 179 : (arr_9 [i_0] [i_0] [i_2] [i_4]))))))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        arr_16 [i_2] [i_1] [4] = ((((min((arr_6 [i_0] [i_0] [i_2]), 142548142))) ? (!-78) : ((((arr_5 [i_1] [i_2]) >= (((arr_7 [i_0]) | var_9)))))));
                        arr_17 [14] [i_1] [i_2] [i_2] = (((142548142 / 136) && (~12606)));
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_13 = (((var_6 < var_0) ? (arr_20 [1] [9] [i_1] [i_2] [i_2] [i_2] [i_7]) : var_5));
                            var_14 = ((var_3 + (arr_3 [i_0] [i_1] [i_7])));
                        }
                        var_15 = (arr_7 [4]);
                        var_16 *= ((var_4 ? (((!((((arr_14 [1] [i_1] [i_6] [12] [i_1]) * 179)))))) : (var_8 > -12606)));
                        var_17 = var_0;
                    }
                }
            }
        }
    }
    var_18 = (min(var_18, 142548142));
    var_19 = (max(var_19, var_1));
    #pragma endscop
}
