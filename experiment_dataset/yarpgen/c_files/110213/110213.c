/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((-(131071 >= var_9)))) ? (((((204 < 0) != (var_0 ^ 114))))) : 3773074243));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_2 - 1] [i_1] [i_0] = var_3;
                    arr_8 [i_0] [i_1] [i_0] = ((~(min((arr_5 [i_2 + 2] [i_1]), (arr_4 [i_2 + 1])))));
                }
            }
        }
    }
    #pragma endscop
}
