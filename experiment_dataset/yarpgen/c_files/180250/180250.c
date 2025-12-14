/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= var_3;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_19 = (min((((-((((arr_3 [i_0 + 3] [i_0 - 1] [i_1]) >= 25563)))))), ((var_15 ? (arr_2 [1] [i_0] [i_0 + 1]) : (arr_2 [8] [i_0 + 4] [i_0 + 3])))));
                var_20 += (max(33454, 1));
                var_21 = (((((var_10 == 10615) ? ((var_5 ? (arr_2 [i_1] [i_0 + 4] [i_0 + 4]) : (arr_2 [i_0] [i_0 + 1] [2]))) : 1))) ? (min(var_17, (1 ^ var_1))) : 75);
                var_22 = (min(12263, (~1)));
            }
        }
    }
    var_23 = ((((var_16 ? var_14 : (2929487836 ^ var_8))) - ((((1 <= var_15) ? (max(1908824838, var_12)) : ((-34 ? var_3 : -86)))))));
    #pragma endscop
}
