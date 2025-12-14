/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((~((max(var_3, -32764)))))) ? 7 : (min(5, 16216759401840193543))));
    var_19 = -32028;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [1] [i_1] [i_2] [i_2 + 2] = ((min((arr_2 [i_0]), (arr_2 [i_2]))));
                    var_20 &= (min((((arr_4 [i_1] [i_2 - 1] [i_2]) / -32763)), (min(255, (arr_4 [i_2] [i_2 + 2] [i_2 + 2])))));
                    arr_8 [i_0] [i_0] [i_2] [i_0] = 32021;
                    var_21 = var_3;
                }
            }
        }
    }
    var_22 = ((~(max(-32028, (min(var_1, -73))))));
    #pragma endscop
}
