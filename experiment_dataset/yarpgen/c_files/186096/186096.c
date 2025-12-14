/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_10 = ((~(max((arr_2 [i_1]), ((min(-1989783673, (arr_0 [i_0] [i_0]))))))));
                var_11 = 262080;
                var_12 -= (((arr_0 [i_0] [i_0]) ? -262081 : (((-703477904388936978 + 9223372036854775807) >> ((((arr_2 [8]) <= var_4)))))));
            }
        }
    }
    var_13 = ((((((min(var_8, 57137))) ^ (!var_3)))) ? ((min(var_4, (var_8 != var_4)))) : (((((var_4 ? 0 : var_1)) == var_1))));
    var_14 *= ((var_1 / (var_0 ^ 262080)));
    var_15 = (max(var_15, 32767));
    #pragma endscop
}
