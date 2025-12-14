/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_7 ? (max(((var_0 ? var_12 : var_7)), var_10)) : var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_12 [i_1] [i_1] = (!4179903072);
                            var_19 = (min(((-9181 ? (!var_10) : (arr_5 [i_3] [i_2] [i_1]))), (arr_9 [i_3] [i_1] [i_1])));
                            var_20 |= (((((9158 ? var_1 : (var_8 < 9158)))) ? 232 : 9158));
                            var_21 = 1;
                        }
                    }
                }
                var_22 = ((!((min(0, (~var_14))))));
                arr_13 [i_0] [i_1] = var_12;
                arr_14 [i_1] = ((83 ? (max((((arr_8 [i_0] [i_0] [i_1] [i_0]) & var_7)), (arr_4 [i_0] [i_0]))) : (((arr_9 [i_0] [i_1] [i_0]) ? (arr_9 [i_0] [i_1] [i_1]) : (arr_9 [i_0] [i_0] [i_0])))));
            }
        }
    }
    var_23 = (max(((1 ? var_17 : (!var_17))), var_2));
    #pragma endscop
}
