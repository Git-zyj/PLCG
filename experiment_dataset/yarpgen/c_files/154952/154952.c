/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = 14148075332925639678;
                var_19 = ((((((~(arr_0 [i_0]))))) ? ((((((arr_0 [i_0]) ? var_2 : (arr_0 [i_0])))) ? (!61876) : ((0 ? (arr_3 [i_0]) : var_18)))) : ((+(((arr_0 [i_1]) ? 1 : (arr_0 [i_0])))))));
            }
        }
    }
    var_20 = (((((18446744073709551615 ? var_3 : 54))) ? ((((~var_18) ? (((var_4 ? var_1 : var_14))) : ((49510959741289289 ? var_4 : var_1))))) : (((((var_12 ? var_1 : var_1))) ? (((-26690 ? var_5 : var_16))) : var_13))));
    var_21 = var_17;
    #pragma endscop
}
