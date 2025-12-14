/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_1] [i_2] [i_2] [i_2] = 966580430;
                                var_18 -= (((1392 < -966580430) >> (-1 + 23)));
                                arr_14 [i_0] [i_0] [1] [i_1] [i_0] [i_0] [i_0] = -46041;
                                var_19 = ((var_6 | ((1382 ? (arr_9 [i_4] [i_1] [i_1] [i_0]) : (((-966580430 ? (arr_7 [i_0] [i_0] [i_0] [i_1]) : 64152)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_20 [i_1] [i_1 + 3] [i_2] [i_1] [i_2 - 2] = (min(((var_11 ? ((max(64136, 64144))) : -7187)), ((min(46014, -29)))));
                                arr_21 [i_0] [i_1] [i_0] [i_0] [16] [1] [i_0] = (min(var_1, (!var_10)));
                                arr_22 [i_1] [i_0] [i_2 + 2] [i_1 + 3] [i_1 - 1] [i_1] = ((18446744073709551615 ? ((((min(var_5, (arr_2 [i_1] [i_1])))) + (min(var_13, (arr_18 [i_6] [18] [10] [i_1 + 3] [i_1 + 3] [i_0] [i_0]))))) : (((min(-1126263625812606878, 14704))))));
                                arr_23 [i_0] [i_1] = (((+-64152) ? var_16 : (min(var_11, (arr_10 [i_0] [i_1 + 3] [i_2 - 1] [i_5] [i_6 - 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
