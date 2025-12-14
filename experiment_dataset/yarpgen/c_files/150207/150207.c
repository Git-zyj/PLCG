/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= ((var_4 ? ((~((min(var_8, var_4))))) : var_2));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_1] = (min((arr_2 [i_0] [i_0 + 1]), (48786 - var_0)));
                    arr_7 [i_0] [i_0] = (min(123, (min(var_2, (((arr_5 [i_0] [i_0] [i_1] [i_2]) | (arr_5 [i_0] [i_1] [i_2] [i_2])))))));
                }
            }
        }
    }
    #pragma endscop
}
