/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, 159));
                    arr_8 [i_0 + 1] [i_1] [i_2] = var_2;
                    arr_9 [i_0] [i_2] [i_1] = (((max((!var_3), ((!(arr_3 [i_2 - 1] [i_1] [i_0]))))) ? (min(((var_11 ? (arr_6 [i_0 + 1] [1]) : var_13)), ((((arr_3 [i_0] [15] [i_0]) || var_1))))) : ((max((arr_3 [i_0 - 1] [i_1 + 1] [8]), (arr_3 [i_1 + 1] [i_1 + 1] [i_2]))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 17;i_4 += 1)
        {
            {
                var_17 = (min(var_17, ((((6418493489416102208 || 2188057776) ? ((min((arr_14 [i_4] [i_4 - 1]), (arr_14 [i_4] [i_4 - 1])))) : (((arr_14 [i_4] [i_4 - 1]) ? var_5 : (arr_14 [i_4] [i_4 - 1]))))))));
                arr_17 [i_3] [i_4 - 1] = ((((max(1534, 0))) - var_3));
                arr_18 [i_3] [i_3] = ((max(var_14, (var_11 <= var_9))));
            }
        }
    }
    #pragma endscop
}
