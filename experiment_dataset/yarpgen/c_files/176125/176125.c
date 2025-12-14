/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
                {
                    var_17 = (max(var_17, 38));
                    arr_8 [i_1] [i_1] [3] [i_1] = (((arr_7 [i_0] [i_1] [i_0] [i_0]) ? var_7 : (arr_7 [i_2] [i_1] [i_1] [i_0])));
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                {
                    var_18 = ((1189482898 ? (arr_6 [i_0] [i_1] [8]) : ((0 / (arr_10 [i_3] [i_3] [i_1] [i_0])))));
                    arr_12 [i_0] [i_0] [i_1] [i_3] = ((!(((var_5 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_3]))))));
                    arr_13 [i_0] [i_0] [i_1] = (((arr_4 [i_3] [i_3] [i_3]) ? ((((~var_9) ? 1189482898 : -22387))) : 124));
                }
                arr_14 [i_1] [i_1] = 3130884160302131521;
            }
        }
    }
    var_19 = (min(var_19, (var_15 < var_4)));
    #pragma endscop
}
