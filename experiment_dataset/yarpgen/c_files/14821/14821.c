/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((2205417708 | 1494689351) ? 68 : var_2))) * ((var_8 * (var_2 / -1494689341)))));
    var_12 = -1494689351;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, ((((-1494689356 ? 1494689341 : 1494689351))))));
                    arr_7 [8] [i_0] [i_1 - 1] [i_1] = 14;
                }
            }
        }
    }
    #pragma endscop
}
