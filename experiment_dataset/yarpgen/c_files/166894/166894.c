/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-(((var_6 > (min(var_17, var_17)))))));
    var_20 = (var_8 & var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (-var_14 & 142);
                arr_6 [i_0] [i_0] = 339270211990649079;
                arr_7 [i_0] [12] [i_0] = (min((max(0, 19331)), (max(var_6, (!var_18)))));
            }
        }
    }
    var_21 = ((-((~(~var_13)))));
    #pragma endscop
}
