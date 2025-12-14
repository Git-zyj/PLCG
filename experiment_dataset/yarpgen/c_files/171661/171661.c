/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((-1013390823 && (((var_5 ? var_9 : var_1))))), (!var_12)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [i_0] = (((max(30084, (arr_7 [i_2 + 1] [i_2 - 1] [i_0]))) << (((((min(((197 ? (arr_7 [i_0] [i_1] [i_2]) : (arr_2 [i_2 + 1]))), (arr_2 [i_1]))) + 289113544)) - 13))));
                    var_16 = (arr_7 [i_2] [i_2 - 1] [i_2 + 1]);
                }
            }
        }
    }
    var_17 = var_4;
    var_18 += (var_11 * var_11);
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                {
                    arr_19 [i_5] [i_4 - 2] [i_3] [i_5] = (((((arr_5 [i_5] [i_4] [i_3 + 1]) + 102))) ? (((arr_5 [i_3] [i_3] [i_3 + 1]) ? (arr_5 [i_3] [i_4 - 1] [i_3 + 1]) : (arr_5 [i_3] [i_4 - 2] [i_3 + 1]))) : ((min(-512, (arr_5 [i_3 - 1] [i_3] [i_3 + 1])))));
                    arr_20 [i_3] [i_5] = var_1;
                    var_19 = (((((arr_12 [i_3 + 1]) ? (arr_12 [i_3 - 1]) : (arr_4 [i_3 - 1] [i_4] [i_4 + 2]))) < (!var_10)));
                }
            }
        }
    }
    #pragma endscop
}
