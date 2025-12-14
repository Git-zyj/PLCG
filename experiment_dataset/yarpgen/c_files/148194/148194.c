/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = (((((-70 ? 70 : -8))) ? -70 : (max(9006924376834048, 32767))));
                arr_6 [i_1] [i_1] = ((((((arr_4 [i_1 - 1] [i_1 - 1]) ? (arr_4 [i_1 - 1] [i_1]) : (arr_4 [i_1 - 1] [i_1])))) ? ((492195759 ? (arr_4 [i_1 - 1] [i_1]) : (arr_4 [i_1 - 1] [i_1 - 1]))) : (((arr_4 [i_1 - 1] [i_1 - 1]) ? (arr_4 [i_1 - 1] [i_1]) : var_3))));
                arr_7 [i_0] [i_1] [i_1] = (((!10) ? (arr_1 [1]) : (arr_3 [i_0])));
            }
        }
    }

    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    arr_15 [i_3] [1] = (arr_11 [i_3] [i_2 - 1]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_21 [4] [i_3] [i_5] [i_5] [i_6] [i_3] = ((((((arr_18 [i_3] [i_5] [i_5] [i_5] [i_6 - 2] [i_6 + 1] [i_6]) * 70))) ? 106 : ((305492582 ? ((0 ? 0 : 9006924376834054)) : ((61 ? (arr_0 [i_5]) : 18437737149332717577))))));
                                arr_22 [i_3] = ((-70 ? 0 : (arr_11 [1] [i_3])));
                            }
                        }
                    }
                }
            }
        }
        arr_23 [i_2] [i_2] = -4209660068281398342;
    }
    var_14 = ((((min(9006924376834065, (~var_8)))) && (((var_9 ? (562560225 | var_5) : 1)))));
    #pragma endscop
}
