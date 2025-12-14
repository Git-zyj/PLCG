/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (221 == 4834284384611492523);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 &= ((((max(41145, var_11))) ? (((!var_2) ? (~32) : ((min(64788, 1))))) : ((((min((arr_2 [1] [i_0 - 1] [i_0 - 1]), 1)) <= ((var_14 ? 5443996714448905186 : 42342)))))));
                arr_4 [i_1] = ((((min((arr_1 [i_1]), (arr_0 [i_0 + 1] [i_0 + 1])))) ? ((min((1 != 1), ((var_5 ? 1 : 1568315225))))) : ((var_5 ? (arr_2 [i_0] [i_1] [i_1]) : (arr_3 [i_0 + 1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_17 = (-32767 - 1);
                            var_18 -= (!((min((arr_2 [i_0] [i_1] [i_2]), ((min(111, 1)))))));
                        }
                    }
                }
                var_19 = -1;
            }
        }
    }
    var_20 = ((-(min(((max(var_11, 44132))), 1))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            {
                var_21 = (arr_15 [4] [i_5]);
                var_22 = ((((min(var_9, (max(1, (arr_15 [i_4] [i_4])))))) ? (max(1, (((arr_13 [i_5] [i_4] [i_4]) / -72927491)))) : (arr_3 [i_4])));
            }
        }
    }
    #pragma endscop
}
