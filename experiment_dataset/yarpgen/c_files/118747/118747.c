/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((min((~var_3), var_8))) || ((var_11 && (var_5 < var_4)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] [i_2] [i_1] = (((var_11 ? (arr_6 [i_0] [i_0] [i_0]) : (arr_6 [i_0] [i_0] [i_0]))));
                    arr_9 [i_0] [i_0] = (arr_6 [i_0] [i_1 + 1] [i_1 + 3]);
                    var_15 = 66;
                    var_16 = (arr_5 [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
