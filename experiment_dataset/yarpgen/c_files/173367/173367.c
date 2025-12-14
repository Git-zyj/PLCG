/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_9);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] = 1293432156;
                    arr_8 [i_0] [i_1 - 3] = (((arr_6 [i_0] [i_1 - 1] [i_1 - 1]) ? (arr_4 [9] [i_0] [i_0]) : var_18));
                }
            }
        }
    }
    var_21 = (((var_6 != var_0) ? (max((~var_16), 6025191191801731763)) : ((((max(var_2, var_11))) ? var_0 : (max(0, 6025191191801731776))))));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    arr_17 [2] [i_3] [2] = ((~((((!var_17) <= var_8)))));
                    arr_18 [i_3] [i_3] [i_5] = ((!((max((arr_1 [i_3]), (max(6025191191801731763, var_8)))))));
                    arr_19 [i_3] = (arr_2 [i_5] [i_3] [i_3]);
                    arr_20 [i_3] = (max((((((6025191191801731750 ? 834381416 : -6025191191801731769))) ? (arr_14 [i_3] [i_4] [1] [i_3]) : (max((arr_2 [i_3] [i_3] [12]), var_10)))), (max(843654817, (max(834381416, 6025191191801731766))))));
                }
            }
        }
    }
    #pragma endscop
}
