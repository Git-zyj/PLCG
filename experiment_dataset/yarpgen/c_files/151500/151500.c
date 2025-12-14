/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_10 = (+-11);
                var_11 += ((((~54) == (arr_3 [i_1]))));
                var_12 = (((((((min(204444954, var_0))) & (min((arr_1 [i_0] [i_1]), (arr_3 [i_1 - 2])))))) ? (min(((((arr_1 [i_0] [i_0]) ? var_5 : var_3))), ((54 ? 59 : 10930289878182831456)))) : (((((-127 - 1) != 1)) ? 2163825363866419053 : ((min(1, -1697003785)))))));
                var_13 += (min(((~(arr_0 [i_1 - 1]))), (((arr_0 [i_1 - 2]) >> (((arr_3 [i_1 - 1]) - 11291574897553702864))))));
            }
        }
    }
    var_14 = -1697003794;
    #pragma endscop
}
