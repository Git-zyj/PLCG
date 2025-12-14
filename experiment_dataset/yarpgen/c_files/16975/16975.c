/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (max(var_4, (((~var_9) ? var_6 : var_2))))));
    var_16 -= (max(var_2, var_12));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 = (max(var_17, 37942));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 ^= var_14;
                    var_19 -= ((4231287172 ? (((arr_4 [i_0] [i_0] [i_2] [i_2]) >> ((((var_10 ? var_10 : (arr_2 [i_0] [i_1]))) - 2510127657)))) : ((min(2031616, (arr_1 [i_0] [9]))))));
                    var_20 *= (((((-1391279274 ? 0 : 34902897112121344) - (var_7 - 97)))));
                }
            }
        }
        var_21 ^= (arr_6 [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_22 -= (~0);
        var_23 = (min(var_23, (arr_8 [10])));
        var_24 -= ((~(arr_8 [14])));
    }
    #pragma endscop
}
