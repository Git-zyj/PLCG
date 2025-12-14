/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_2] = (max(0, (-21543 * 1)));
                    var_12 |= (arr_5 [i_2]);
                }
            }
        }
    }
    var_13 ^= 1;
    var_14 = (max(((var_0 ? 1 : var_8)), ((min((var_8 & var_0), ((var_4 ? var_0 : var_8)))))));
    #pragma endscop
}
