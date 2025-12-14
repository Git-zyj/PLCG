/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((var_4 != -358784628) - (var_3 * var_2)))) ? ((min((var_8 < 85), (1 > var_6)))) : 240));
    var_11 = (!var_4);
    var_12 = (max(var_1, var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_13 *= (((((arr_1 [i_1 + 2]) ? 1 : 97))) % (min((9012591074522781812 ^ 1963128101), (((240 ? -446593475 : -134217728))))));
                var_14 += (8 < 9012591074522781812);
                var_15 = (((((var_7 - var_9) ? (((var_6 ? var_0 : (arr_3 [i_0] [i_0] [i_0])))) : ((9434152999186769803 + (arr_4 [i_1])))))) ? (((((var_7 ? var_0 : var_9)) - (((var_1 + (arr_5 [i_1] [i_0]))))))) : (((((2331839195 - (arr_4 [i_1 - 2])))) - (10866881430205454031 + var_5))));
            }
        }
    }
    #pragma endscop
}
