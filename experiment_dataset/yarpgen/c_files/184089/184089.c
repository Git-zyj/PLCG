/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [i_0] [4] = (-((((16526706199830867386 >> (var_13 - 11142909728591172186))) >> (var_12 - 11385269544412714087))));
                var_19 = (max(var_19, var_1));
            }
        }
    }
    var_20 = ((!var_16) ? var_3 : (((var_4 ? var_6 : 5148952435434004066))));
    #pragma endscop
}
