/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((var_4 != var_4) >= var_8));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_2] = 169;
                    arr_10 [i_0] [i_1] [i_1] = (max(172, (((arr_3 [i_0] [i_1] [i_2]) << (597298142 - 597298131)))));
                    arr_11 [i_2] [i_1] [i_0] |= (((169 ? 2287970488274911278 : (((arr_1 [i_1] [i_2]) ? 1 : (arr_3 [i_2] [i_0] [i_2]))))));
                    arr_12 [i_0] = (min((((var_4 ? var_3 : var_5))), (arr_0 [i_2] [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
