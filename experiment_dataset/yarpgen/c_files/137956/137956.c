/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    var_14 = ((var_0 ? 23290 : var_8));
    var_15 = (42234 * 1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (!(arr_1 [6]));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_17 = ((8346400288522194372 ? ((~(~var_7))) : ((max((arr_10 [i_3] [i_2] [i_1] [i_0]), (arr_10 [1] [i_1] [i_2] [i_3]))))));
                            var_18 = (((((((arr_4 [i_0] [i_0] [7]) || (arr_0 [i_1] [i_1]))) || (arr_2 [i_0]))) ? (((1 ? (~var_6) : 1))) : (((((13640 ? var_2 : 448595701))) ? (max((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), 9223372036854775807)) : (arr_2 [i_0])))));
                            var_19 |= (9223372036854775807 | 23281);
                            var_20 += (max(((((51101 ? (arr_5 [i_3] [i_1] [i_1] [i_0]) : (arr_11 [i_1] [i_3] [i_1]))) % var_4)), 1));
                        }
                    }
                }
                var_21 = 42259;
            }
        }
    }
    #pragma endscop
}
