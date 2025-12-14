/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 12;
    var_13 = (18380070480129326968 - -7499953544215585715);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_14 = (((((-(arr_10 [i_0] [i_1] [i_1 - 1] [i_0 - 1])))) ? (arr_7 [5] [i_1] [i_0]) : 497941919418415850));
                                var_15 = ((8030909989938619438 ? 18446744073709551615 : (((arr_3 [i_1 - 1] [i_1]) + var_4))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            arr_20 [i_6] [i_1] [i_1] [5] = (arr_15 [i_6] [i_5] [i_1 - 1] [i_0]);
                            arr_21 [i_0] [i_0] [i_0] [i_0 - 1] = (((arr_8 [i_0]) <= ((max(7499953544215585706, (arr_10 [0] [i_1] [i_1] [i_1]))))));
                            var_16 = (arr_8 [i_6]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
