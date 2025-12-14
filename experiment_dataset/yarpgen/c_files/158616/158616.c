/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_15 *= (((((arr_0 [5] [i_1]) >= (((arr_3 [i_0] [15] [2]) ? (arr_2 [i_0] [i_1]) : (arr_0 [i_0 - 2] [i_0])))))) / (arr_1 [i_0 - 2]));
                var_16 = (arr_2 [i_0] [i_0]);
                var_17 = ((-11818 ? 0 : -5130493978922992329));
                var_18 = ((arr_0 [i_1] [i_0]) & ((((((arr_1 [i_0 - 1]) << (((arr_3 [i_0 - 2] [i_0 - 2] [i_1]) - 810750245)))) >> (((((arr_1 [i_0 + 1]) | (arr_3 [i_1] [i_1] [i_0]))) - 810750238))))));
            }
        }
    }
    #pragma endscop
}
