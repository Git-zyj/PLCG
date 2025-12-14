/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = (max(73, (max((arr_1 [i_1]), (arr_5 [i_1] [i_0])))));
                arr_8 [i_0] [i_1] [i_0] = (((((((6670118964904829364 / (arr_1 [i_0])))) ? 15 : (arr_3 [i_1] [i_0])))) ? -114 : ((((((arr_0 [i_1]) ? (arr_5 [i_0] [i_0]) : 2))) ? (((4294967295 ? (arr_4 [i_1] [i_1]) : (arr_4 [i_0] [i_1])))) : (((arr_2 [i_0]) ? var_8 : (arr_1 [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1] [i_1] = 2986588693734381755;
                            var_17 += ((1 ? (((arr_0 [i_0]) ? (arr_2 [i_0]) : var_9)) : 116));
                            arr_14 [i_0] [i_0] [i_0] [i_0] = ((864794430 && ((((arr_5 [i_0] [i_0]) ? (((arr_6 [i_3] [i_3]) | (arr_5 [i_0] [i_2]))) : (arr_6 [i_0] [i_1]))))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 1;
                        }
                    }
                }
            }
        }
    }
    var_18 = ((((((var_10 != -116) + (((-122 + 2147483647) >> (var_8 + 2981778129464722442)))))) ? (((var_6 ? ((939524096 ? var_12 : 4208959572509749803)) : var_0))) : 11033304978095834208));
    #pragma endscop
}
