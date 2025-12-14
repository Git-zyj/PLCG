/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(892768229972404717, ((1 ? 17592186044288 : 1))));
    var_12 |= var_4;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_13 = (-(max(-1131339667147903161, (max(54043195528445952, 12244163558589633978)))));
                arr_5 [i_0] [i_1] [i_0] = ((!(((~(arr_1 [i_0]))))));
                var_14 = (((((65535 * ((~(arr_1 [i_1])))))) & ((((((arr_4 [i_0] [i_0] [1]) ? 65533 : -115))) ? (max((arr_0 [4] [i_1]), 2006521714072988058)) : (((~(arr_0 [i_0] [i_0]))))))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_15 *= (134217724 < 1);
                            var_16 = (((arr_7 [i_0 + 1] [i_1 - 1] [i_1 - 1]) ? (((arr_0 [i_1 + 2] [i_2 - 3]) * (arr_0 [i_1 - 1] [i_2 - 2]))) : ((((1978206358 ? var_9 : var_4)) + ((max(var_3, 1)))))));
                            var_17 = ((((((!var_6) ? ((83637399 ? -1131339667147903161 : -9223372036854775786)) : (1131339667147903152 && 0)))) ? ((4294967293 ? (((-(arr_8 [1] [i_1] [i_2 - 2] [i_2 - 2] [i_3] [1])))) : (max(-9223372036854775795, 1978206332)))) : (((((((arr_0 [i_3] [i_1]) / var_4))) ? (((!(arr_9 [i_0] [i_1] [i_2 + 1] [i_3])))) : (((arr_6 [i_0] [i_0] [i_0] [i_0]) ? (arr_1 [9]) : (arr_9 [i_0] [i_1 + 1] [i_2] [i_3]))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
