/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((((var_7 > var_15) < (arr_2 [i_1 - 1] [i_0]))) ? (((var_10 ? ((-4 ? 1 : var_11)) : (arr_0 [i_1 + 2] [i_1])))) : (((arr_3 [i_0]) ? (arr_2 [i_0] [i_1 + 1]) : (arr_3 [i_0])))));
                var_17 *= (1 + 2934337871);
                var_18 = (min(var_18, ((min((arr_1 [i_1 + 1]), ((((arr_0 [i_0] [i_1]) == (var_12 <= var_11)))))))));
                arr_6 [i_0] |= var_10;
            }
        }
    }
    var_19 |= var_4;
    #pragma endscop
}
