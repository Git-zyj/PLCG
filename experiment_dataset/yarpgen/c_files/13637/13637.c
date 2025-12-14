/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((~(min(var_5, ((var_8 ? 125829120 : var_0))))));
    var_21 -= 4169138176;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_22 ^= (max(((((((arr_6 [i_0] [i_0]) ? (arr_1 [i_1]) : var_19))) ? (arr_4 [i_0] [i_1] [i_2 - 1]) : (arr_9 [i_0] [i_1] [i_0] [i_3]))), 198));

                            for (int i_4 = 0; i_4 < 13;i_4 += 1)
                            {
                                var_23 = (125829120 ? -8048791410306879008 : 4169138176);
                                arr_13 [i_0] [i_0] [i_0] [1] [i_0] [i_0] [2] = -1536151249;
                                arr_14 [i_3 - 1] [i_3 - 1] = (arr_0 [9]);
                            }
                            var_24 = (arr_6 [i_0] [i_0]);
                            var_25 = ((((((arr_1 [i_0]) ? (((arr_4 [0] [i_0] [i_0]) ? var_13 : (arr_4 [i_2] [i_0] [i_0]))) : (~12604)))) ? (3146431471 * 81) : ((var_3 ? -1693724315 : (((15070060797080349173 ? (arr_1 [i_1]) : -1704863920)))))));
                        }
                    }
                }
                var_26 = ((-(((((29645 ? var_2 : var_1))) ? ((min(var_15, 270908347))) : (min(0, 7822905604806159684))))));
            }
        }
    }
    #pragma endscop
}
