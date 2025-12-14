/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    var_18 = 65535;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_8 [i_1] [i_0] [i_0] = ((0 << (7362794325975127007 - 7362794325975126987)));
                arr_9 [9] = ((((9 << (var_3 + 31429))) > var_12));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_21 [i_2] [5] [5] = (arr_14 [i_0] [i_1] [i_2 + 3] [i_2 + 3] [i_1] [i_2 + 3]);
                                var_19 = var_12;
                                arr_22 [i_4] [5] [i_2] [i_1] [i_0] = ((((((1 ? (-9223372036854775807 - 1) : (arr_15 [i_0] [i_0] [i_2] [i_0])))) ? (var_6 ^ var_10) : 24955)));
                            }
                        }
                    }
                }
                arr_23 [i_0] = max(((127 ? ((4294967295 ? var_12 : 2346976341)) : 4294967281)), ((max(((-109 ? 65535 : 0)), (((arr_6 [i_0] [i_0]) ? (arr_12 [i_0] [i_1] [i_1]) : (arr_12 [i_0] [i_1] [i_1])))))));
            }
        }
    }
    #pragma endscop
}
