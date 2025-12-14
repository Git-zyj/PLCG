/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_21 *= ((((var_4 || (arr_0 [i_0] [i_1]))) ? (arr_2 [i_0]) : (((-1 ? ((((arr_3 [i_0] [i_0] [i_1]) + 0))) : (max(6445749405169260246, 9223372036854775807)))))));

                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    var_22 = (max(var_22, 23340));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_23 = (min(var_23, (((!((max(var_1, (max((arr_4 [i_1] [15]), var_10))))))))));
                                var_24 = (max(var_24, ((max((((arr_0 [i_2 - 2] [i_2 - 2]) * (arr_0 [i_2 - 1] [i_2 + 1]))), (((((~(arr_0 [i_0] [1])))) ? var_12 : var_2)))))));
                                arr_14 [i_0] [i_1] [i_2 - 2] [i_3 + 1] = (max((((9223372036854775807 ? (arr_6 [i_3 + 2] [i_3 + 1]) : (arr_6 [i_3 - 2] [i_3 - 2])))), var_15));
                            }
                        }
                    }
                    var_25 = (arr_8 [i_0]);
                    arr_15 [i_0] = (max((max(26, ((max((arr_13 [i_1] [7] [i_1] [i_1] [i_0] [15]), 0))))), (-9223372036854775807 - 1)));
                }
                var_26 = (min(var_26, (((((3641 ? (~40) : (arr_1 [i_0]))) == (((~(arr_5 [i_0] [i_1] [i_1] [12])))))))));
            }
        }
    }
    var_27 = ((-13652 || ((((((var_16 ? var_8 : 2486239199665291669))) ? ((max(var_17, var_4))) : -81)))));
    #pragma endscop
}
