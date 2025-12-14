/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (((~var_7) ^ var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 ^= ((-((var_6 - (var_4 == var_11)))));
                arr_6 [i_0] [i_1] [i_1] = ((((max((max(2351607095, -7743868633751817355)), var_2))) ? ((((!((max(var_5, 1055531162664960))))))) : var_3));
                var_16 ^= (!var_2);
                arr_7 [i_0] [i_0] [8] = ((~((~(arr_3 [i_1] [i_1] [i_0])))));
            }
        }
    }
    var_17 = ((!var_0) ^ ((((var_13 ? var_10 : 562949953421280)))));
    var_18 = ((var_4 ? ((((max(3960, var_4))) ? (!var_8) : (!var_4))) : var_7));
    #pragma endscop
}
