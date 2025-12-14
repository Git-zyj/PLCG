/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_15 += (max(((max(91, 1))), (max(244, -1480944956))));
                arr_5 [i_0] [i_0] [i_0] = (max((((!((min(var_8, var_11)))))), (arr_4 [i_0] [i_1])));
                var_16 = var_3;
                var_17 = (((((arr_0 [11] [i_1]) ? var_11 : ((((arr_2 [i_1] [5]) == (arr_3 [i_0])))))) != var_11));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            {
                var_18 |= (max((min(((min(243, var_10))), var_7)), (arr_7 [i_2])));
                arr_10 [i_3] = (arr_9 [i_3]);
                arr_11 [i_2] [i_3] [17] = ((2270426141654360117 ? -655043575 : 2417761067));
            }
        }
    }
    #pragma endscop
}
