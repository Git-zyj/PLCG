/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (var_8 ? -0 : var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [8] [i_0] [i_0] = ((((1 < (arr_4 [i_1 + 1] [i_0]))) ? ((((var_15 && (!255))))) : (max(((((arr_0 [i_0]) <= (arr_0 [i_0])))), ((6661388048451251399 >> (62585 - 62523)))))));
                var_21 = (arr_2 [i_0]);
            }
        }
    }
    var_22 = ((113 ? (var_18 <= var_14) : var_19));
    var_23 = (min(var_23, (var_9 + 8589934591)));
    var_24 = -6661388048451251399;
    #pragma endscop
}
