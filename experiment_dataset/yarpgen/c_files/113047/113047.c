/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (-8514066150400076716 | (-5158075265476406547 & 6987400821036825565));
    var_11 = (7969919443065252536 - var_5);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [1] [i_1] [i_2] = max((8716736606539663790 + -538200147912349496), (((arr_6 [i_0 + 2] [i_0 + 2] [i_2]) ? (arr_6 [i_0 + 2] [i_0 + 2] [i_1]) : (arr_6 [i_0 + 2] [i_0 + 2] [i_2]))));
                    var_12 = arr_1 [i_1] [i_0];
                    var_13 = min(6396985687623585857, (4628432043710589250 & 7811418388192011011));
                }
            }
        }
    }
    #pragma endscop
}
