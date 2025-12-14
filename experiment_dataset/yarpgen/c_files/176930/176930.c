/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_0] [i_4] = ((((max((982136114 / 685192570), (arr_13 [i_0] [i_1] [18] [i_3 - 2] [i_1] [i_4] [i_4])))) || ((min(685192574, 4237687752)))));
                                var_14 = ((((((939524096 ? -685192575 : -685192570)))) ? (max((arr_9 [i_3 + 3]), (arr_9 [i_3 - 1]))) : (((((arr_13 [i_1] [8] [i_1] [i_1] [i_1] [i_4] [i_3 + 4]) + 9223372036854775807)) >> (((arr_2 [i_1]) - 3463))))));
                            }
                        }
                    }
                }
                var_15 = (((-9223372036854775807 - 1) ? (-822640407 + 7438248764241942802) : ((-(arr_11 [i_1] [i_1] [i_0] [i_0] [i_0] [i_0] [i_0])))));
            }
        }
    }
    var_16 = ((max(var_11, var_3)));
    #pragma endscop
}
