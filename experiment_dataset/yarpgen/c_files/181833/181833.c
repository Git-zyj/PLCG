/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 2147483647;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_21 = (min((arr_2 [i_0 - 1] [i_1]), (arr_2 [i_1] [i_0])));
                var_22 = (max(var_22, ((max(0, ((max(-93, 210))))))));
                arr_6 [i_0] [i_1] = ((0 ? (((arr_5 [i_0] [i_0 + 2]) ? (~405690982962651151) : (arr_5 [i_1] [i_1]))) : ((((((arr_5 [i_0] [i_1]) ? var_15 : var_11))) ? ((18041053090746900465 ? (arr_1 [i_0 + 2] [i_1]) : var_18)) : (arr_3 [i_0] [i_1])))));
                var_23 = (max(var_23, (((405690982962651122 ? (max(var_19, 0)) : (arr_5 [i_0 + 1] [i_0 + 3]))))));
            }
        }
    }
    #pragma endscop
}
