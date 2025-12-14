/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_19 = (((max(1364, (arr_2 [i_0])))) ? (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))) : (arr_2 [i_0]));
                var_20 = (max(var_20, (min((((((arr_3 [i_0] [i_1] [i_1]) < var_17)) ? (max(14625002292738064360, 71)) : ((96 ? 0 : var_16)))), ((~(~12634789628997801546)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] [i_3] [i_2] [i_1] [i_1] [i_0] = (arr_8 [6] [1] [1] [i_0] [i_1] [i_0]);
                            arr_11 [i_0] [i_0] [i_0] = (~((1023 ? (arr_8 [i_0] [i_1] [i_2] [i_1] [16] [16]) : (arr_8 [i_0] [i_1] [i_2] [1] [i_2] [i_2]))));
                        }
                    }
                }
                arr_12 [i_1] [i_0] = 12634789628997801546;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            {
                var_21 = 15310577240149297783;
                arr_17 [i_4] [i_4] = var_14;
                var_22 += ((min((arr_16 [i_4]), var_10)));
            }
        }
    }
    #pragma endscop
}
