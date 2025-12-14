/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (~54641);
    var_13 = ((-var_4 / ((((max(-1864766761092489102, -1864766761092489102)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] [1] [i_2] = (((((1 ^ (arr_4 [i_0 + 1])))) && ((min((arr_6 [1]), (arr_1 [i_2]))))));
                    var_14 = (min(var_14, (((((max(274003851, (arr_0 [i_0])))) ? var_10 : ((((((arr_4 [i_2]) * (arr_7 [i_1])))) ? -274003835 : var_6)))))));
                }
            }
        }
    }
    #pragma endscop
}
