/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_0));
    var_11 ^= (((((((max(11266478986189813648, var_3))) ? ((var_9 ? 231 : var_1)) : var_2))) ? ((~((var_7 ? var_3 : var_9)))) : var_8));
    var_12 = var_6;
    var_13 = ((((((921264296 >= 1505802112312474090) ? 1505802112312474090 : var_3))) ? ((1505802112312474086 << (17121 - 17121))) : var_6));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_14 ^= 251;
                var_15 = (((arr_3 [i_0 + 2] [i_0 + 1]) ? (244 * -5) : ((+(((arr_1 [i_0] [i_0]) & 21197))))));
                var_16 ^= (min((((arr_0 [i_0] [i_0 + 3]) ? (arr_0 [i_0 + 3] [i_0 + 3]) : (arr_0 [i_0] [i_0 + 1]))), 231));
            }
        }
    }
    #pragma endscop
}
