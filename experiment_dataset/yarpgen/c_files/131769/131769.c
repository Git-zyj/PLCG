/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= ((!(((-((var_6 >> (var_2 - 118))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] [15] = ((((~(arr_3 [i_0] [i_1] [i_1]))) == ((((arr_3 [i_0] [i_1] [i_0]) || var_14)))));
                var_17 = (((((((var_15 < var_0) || var_3)))) == var_13));
            }
        }
    }
    var_18 = (min(var_0, (((var_6 ? 0 : var_13)))));
    #pragma endscop
}
