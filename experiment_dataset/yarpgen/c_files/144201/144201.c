/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 *= ((((((arr_3 [i_1]) ? var_9 : (arr_3 [i_1])))) != ((((-7991537035798849290 & (arr_4 [i_0] [5]))) ^ (arr_3 [1])))));
                var_17 -= (((((arr_2 [i_0]) ? (arr_2 [i_1]) : (arr_4 [14] [1]))) < (((7 == (arr_1 [i_0] [i_0]))))));
                var_18 &= ((33 ? 1 : 101));
                var_19 = (((((-71 ? -19387 : var_14))) ? (0 ^ -19376) : ((16477 ? 919103003 : 1))));
            }
        }
    }
    #pragma endscop
}
