/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += min((((~(var_4 / var_7)))), (((max(var_2, var_1)) >> (var_9 - 2131689210))));
    var_16 = ((~((-((1185652816 ? 1 : var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = ((min(var_3, -var_1)));
                arr_5 [i_0] [i_1] = (max(-6887074107281490548, (min(6887074107281490548, (var_4 < var_2)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_18 = (min((((((var_6 * (arr_2 [i_0] [i_1] [i_0])))) && (~var_10))), var_14));
                            var_19 = ((((((!var_11) >> (-var_3 - 4291757370)))) ? (min(var_8, 6887074107281490548)) : var_13));
                            arr_11 [i_0] [i_0] [i_2] = ((((max(var_2, ((6741898356064229291 >> (var_3 - 3209851)))))) ? (((!1) ? ((0 ? var_0 : 1)) : (arr_1 [i_0]))) : 1933050025));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            {
                var_20 = (((((65535 ? 8052 : 1))) ? ((var_8 % (~var_3))) : -var_0));
                var_21 = (max((((((max(var_2, var_2))) ? (!-8074) : (min(2043972607, var_4))))), (min((((var_12 & (arr_12 [i_4 - 1])))), ((307590538 ? var_0 : var_1))))));
            }
        }
    }
    var_22 = (max(var_14, (((((var_4 ? var_11 : var_10))) & ((2250994695 ? var_13 : 101))))));
    #pragma endscop
}
