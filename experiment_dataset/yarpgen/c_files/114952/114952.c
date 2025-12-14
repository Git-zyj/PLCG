/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_3 & ((((~var_1) <= var_3))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((var_5 > (((~(arr_5 [i_0 - 1] [i_0 - 1]))))));
                arr_7 [i_1] = (((((~67076096) + 9223372036854775807)) >> (67076079 - 67076067)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            {
                arr_14 [i_2] [i_3] |= (!var_5);
                arr_15 [i_2] = ((~(max(187, (~9007199254740991)))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 22;i_5 += 1)
                    {
                        {
                            arr_20 [i_5] [i_4] [i_2] [i_2] = ((-((1 & (179 < 161)))));
                            arr_21 [i_2] [i_3] [10] [i_3] [i_5] = ((!(~-67076096)));
                        }
                    }
                }
                arr_22 [i_2] [i_2] [i_2] = (max((min((arr_0 [i_2]), ((94 ? (arr_9 [i_2] [i_3 + 1]) : 255)))), ((-145 - (arr_9 [i_2] [i_3 - 2])))));
            }
        }
    }
    #pragma endscop
}
