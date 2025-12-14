/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_7));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((((((arr_2 [i_0 - 1] [i_0 + 4]) ? (arr_4 [i_0 - 3]) : (!-23840)))) - (((((var_8 ? (arr_0 [i_1] [i_0]) : (arr_3 [i_0 - 1] [i_1])))) ? ((((!(arr_4 [11]))))) : -1))));
                arr_6 [i_0 - 4] [i_0 - 4] = ((((arr_1 [i_0 + 1] [i_0 - 4]) >= (arr_1 [i_0 + 1] [i_0 - 4]))) ? (((arr_1 [i_0 + 1] [i_0 - 4]) / (arr_1 [i_0 + 1] [i_0 - 4]))) : (arr_1 [i_0 + 1] [i_0 - 4]));
                arr_7 [i_0] |= (arr_2 [i_1] [3]);
                arr_8 [i_0] = arr_2 [i_0 + 4] [i_0 - 1];
            }
        }
    }
    var_13 = (max(88, var_3));
    #pragma endscop
}
