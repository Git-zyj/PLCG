/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= max((7775511492114698655 < var_5), var_3);
    var_13 = (min(16478331180751584707, (((-(!235))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_0] [17] [i_2 + 1] [i_2] = ((!(((121 & 223) <= (!-1146686002965361417)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1 + 3] [i_0] [i_0] [14] = (min(((min((arr_1 [i_0] [i_0]), 6))), 2062762715700679367));
                                var_14 = (((((~(arr_7 [i_1] [i_0])))) <= (((max(-7775511492114698655, (arr_2 [i_0]))) & (((((arr_8 [i_0]) && (arr_5 [i_0])))))))));
                                var_15 = (max(var_15, (~3346008230082499331)));
                                var_16 -= ((~((7075965069610181588 ? (((((arr_11 [i_1] [i_3] [2]) <= (arr_3 [i_0] [i_3]))))) : 7775511492114698651))));
                                arr_15 [i_0] [i_1] [i_3] [i_0] = ((82 <= (190 - 10005297347522939989)));
                            }
                        }
                    }
                    var_17 = (((arr_1 [i_0] [7]) ? ((((arr_12 [i_1 + 3] [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_1 + 2]) / ((((arr_13 [i_2] [i_0] [i_1] [i_0] [i_0]) != 3346008230082499318)))))) : (3346008230082499331 * 6)));
                }
            }
        }
    }
    #pragma endscop
}
