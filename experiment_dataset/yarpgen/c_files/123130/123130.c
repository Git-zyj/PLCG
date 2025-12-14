/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = var_6;
                var_17 = (((((-var_9 ? 1335826253008108072 : ((min(var_9, var_5)))))) ? (arr_4 [i_1]) : (arr_4 [i_1])));
                var_18 = var_0;
                var_19 &= var_1;
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_9 [i_2] = ((((((((~1) + 2147483647)) >> 1))) ? (((var_13 % 1) >> (((((arr_0 [i_2]) ? var_6 : 1)) - 6988146494659296599)))) : ((2170107138671680068 ? ((1 | (arr_2 [i_2] [i_2]))) : ((var_12 ? var_12 : (arr_1 [i_2] [i_2])))))));
        var_20 = arr_7 [i_2];
        arr_10 [i_2] = (max(255, ((((((var_15 << (((arr_0 [i_2]) + 18447))))) <= (var_5 | 1))))));
    }
    var_21 -= (2296835809958952960 * 0);
    var_22 = (((max(-29975, 31))));
    #pragma endscop
}
