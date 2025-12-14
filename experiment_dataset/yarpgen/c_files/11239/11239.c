/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, 11114943609638630667));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = 9223372036854775807;
                arr_5 [i_0] [i_0] = (((((3630632714 >= 664334581) * (((!(arr_2 [i_0] [i_0])))))) >> (((((arr_2 [i_0] [i_0]) + -3750777684)) - 544189586))));
                var_14 += ((((90 ? ((3750777673 ? 56 : 9223372036854775807)) : 3630632715)) << (var_4 - 3707)));
            }
        }
    }
    var_15 *= 16931414041497834852;
    var_16 = var_12;
    #pragma endscop
}
