/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = ((((((min(var_1, var_3))))) ? 1 : (((min((arr_2 [i_0]), var_9))))));
                arr_6 [i_0] [i_0] = ((1 && (((8192 ? 1023 : ((-(arr_3 [i_1] [i_1 + 1]))))))));
                arr_7 [i_0] = (((((~(arr_0 [i_0])))) ? ((var_10 + (arr_0 [i_0]))) : ((min((arr_0 [i_0]), (arr_0 [i_0]))))));
            }
        }
    }
    var_18 = var_2;
    var_19 = (var_14 ? var_4 : (((!var_4) ? var_0 : var_10)));
    var_20 = (var_7 ^ var_0);
    #pragma endscop
}
