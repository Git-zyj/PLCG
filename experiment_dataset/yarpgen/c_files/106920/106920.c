/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = ((((var_16 ? -8242137514467377789 : var_10))) && ((((arr_2 [i_0 - 1]) ? (!-8242137514467377803) : ((-5603472539158469238 ? 0 : var_9))))));
        var_19 &= ((((-1405103706 ? 1 : -33))) ^ ((((((((arr_1 [i_0 - 4] [i_0 - 4]) + 2147483647)) >> (var_18 - 36559)))) ? var_10 : (arr_2 [i_0 - 3]))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_20 += ((169 ? 2 : -13));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 22;i_4 += 1)
                {
                    {
                        arr_12 [i_3] [i_3] [i_3] [i_3] [i_1] [i_3] = min((((((1292044448 ? 254 : var_11))) & ((~(arr_11 [i_1] [i_3 + 2] [i_2] [i_1] [i_1] [i_1]))))), ((max(2147483647, 72))));
                        var_21 += (arr_11 [10] [10] [i_1] [13] [10] [10]);
                        var_22 = (arr_8 [i_1] [i_2] [i_1] [i_1]);
                        var_23 = (min(var_23, -8242137514467377794));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
    {
        var_24 ^= (1 / 6286342132348752708);
        var_25 = (min(var_25, (arr_5 [i_5])));
        arr_15 [i_5] = 6035;
    }
    var_26 |= var_10;
    var_27 = ((((((var_17 * var_12) / -23))) ? var_1 : var_13));
    #pragma endscop
}
