/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (min((arr_2 [i_0] [i_1]), ((((arr_3 [i_0] [i_0] [i_0]) ? var_3 : (1 | 113))))));
                arr_6 [i_0] [16] [i_0] = (((var_14 * 0) ^ 58));
                arr_7 [i_0] [i_0] [i_0] = (min(((var_8 ? (var_8 && var_3) : ((4919 ? 46654871005840240 : 4911)))), -4294967287));
                var_16 = 4919;
            }
        }
    }
    var_17 = ((((((var_11 ? -4919 : 49777373))) && (1 % var_8))) ? (((((49777373 ? -41 : var_0))) ? (((var_3 ? var_0 : 0))) : (~var_14))) : 1);
    #pragma endscop
}
