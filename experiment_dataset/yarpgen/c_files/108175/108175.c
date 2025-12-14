/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] [1] = ((-(228 <= 703785193)));
                arr_5 [i_0] [i_0] [i_0] |= var_3;
                arr_6 [i_0] [i_0] = (min((arr_1 [13]), (((var_8 >> (((arr_0 [i_1] [i_0]) - 217)))))));
            }
        }
    }
    var_12 ^= ((((((~var_8) ? ((846607191 >> (var_2 - 92))) : 213))) ? var_8 : var_3));
    var_13 = (min(var_13, var_11));
    #pragma endscop
}
