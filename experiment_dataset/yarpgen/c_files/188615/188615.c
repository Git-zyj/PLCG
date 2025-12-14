/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((-(~var_3)));
                    var_13 ^= arr_4 [2] [i_0];
                    var_14 = (max(var_14, var_0));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    arr_16 [5] [i_4] [5] [i_5] |= (max(((var_9 ? var_11 : (arr_3 [i_3 + 1] [i_4]))), ((min((arr_3 [2] [i_4]), (arr_3 [i_4] [i_4]))))));
                    arr_17 [i_3] [i_4] [i_5] [i_4] = (arr_1 [i_3]);
                }
            }
        }
    }
    #pragma endscop
}
