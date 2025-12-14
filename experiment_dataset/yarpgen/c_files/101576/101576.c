/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 635987883563365052;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_18 = 52706;
                                var_19 = (((((((max(var_16, 3587225322117635581))) ? var_2 : (min(var_8, 17308996214206821752))))) ? ((-(max((arr_2 [i_1] [i_0]), var_16)))) : (((arr_2 [i_2 + 2] [i_2 - 1]) % ((var_5 << (((arr_10 [14]) - 17748))))))));
                                var_20 = (((((var_10 ? ((((arr_6 [i_1] [i_1]) == (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))) : -127))) < (max((((196 ? (arr_12 [i_0] [i_1] [i_2] [i_0]) : var_15))), var_9))));
                                var_21 = (!((min((((arr_11 [i_0] [i_3] [i_4]) | (arr_7 [i_4]))), (arr_10 [i_2 + 1])))));
                                arr_14 [i_4] [4] [13] [13] [i_4] [1] [i_0] = 52706;
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] [i_0] [i_0] = (max(((-14859518751591916050 - (max(17810756190146186553, (arr_7 [i_2 + 2]))))), ((max(((((arr_4 [i_0] [i_2] [i_1]) || 7390212164759616257))), ((~(arr_0 [i_1]))))))));
                }
            }
        }
    }
    var_22 = 49611;
    var_23 = var_14;
    #pragma endscop
}
