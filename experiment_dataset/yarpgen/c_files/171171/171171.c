/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, 2291448832));
    var_21 = (min(((var_7 < (var_13 / 127))), 1));
    var_22 = 27190;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_23 = ((-var_2 - (max(2147483647, 9223372036854775807))));
                var_24 -= ((((min(var_4, var_14))) > (max((arr_2 [i_1 + 1] [i_1 - 1]), (arr_2 [i_1 - 1] [i_1 - 2])))));
                arr_5 [i_0] [i_1] [i_1] = var_8;
            }
        }
    }
    #pragma endscop
}
