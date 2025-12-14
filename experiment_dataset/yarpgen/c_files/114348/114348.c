/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_8 [i_1] = ((((~var_3) | (min(var_0, (arr_0 [i_0]))))));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_12 = (min(var_12, (max(-var_1, (max(var_10, (arr_9 [i_0] [i_0] [i_1] [i_2])))))));
                    arr_11 [i_0] [i_2] [i_2] [i_1] = (~var_4);
                    arr_12 [i_0] [i_0] = ((106 ? 127 : 16383));
                }
                arr_13 [i_1] = 1;
            }
        }
    }
    #pragma endscop
}
