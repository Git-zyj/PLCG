/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;
    var_17 ^= var_13;

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_18 = ((~(((!(((255 ? 68 : 1))))))));
        var_19 = ((((((((((arr_0 [i_0] [i_0]) | var_8)) + 9223372036854775807)) << (((((arr_1 [i_0]) ^ 9223372036854775805)) - 14335083426997427186))))) ? (~240) : (((((arr_0 [i_0 + 1] [i_0]) + 9223372036854775807)) >> (((((-1 + 2147483647) >> (var_12 - 24621))) - 490))))));
        arr_2 [i_0] [i_0] = ((-(max((arr_1 [i_0]), (-57 ^ -4)))));
        var_20 = ((~(arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    var_21 = (max(var_21, ((((~var_5) ? (153 + -57) : (!24576))))));
                    arr_9 [i_1 - 1] = ((var_9 ? (arr_3 [i_1 - 4]) : 93));
                    var_22 = (min(var_22, (arr_6 [i_1] [i_2])));
                }
            }
        }
        var_23 = (((~var_10) ? ((var_12 ? (arr_3 [i_1 - 2]) : (arr_7 [i_1 - 2] [i_1]))) : var_8));
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_24 = ((+(((((max((arr_5 [i_4] [i_4] [0]), -230)) + 9223372036854775807)) << ((((((arr_10 [i_4] [4]) && 51649))) - 1))))));
        var_25 = (((-30 * (!var_12))));
    }
    #pragma endscop
}
