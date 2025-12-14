/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((((((~(~var_8)))) && (((var_8 ? 9007199254732800 : var_8))))))));
    var_12 |= ((var_9 & ((-(!8633991210847263277)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_8 [i_1] = (((-((var_2 ? var_6 : (arr_6 [14]))))));
                var_13 = (((~(arr_7 [i_0] [i_0] [i_1 - 1]))));
                var_14 = var_6;
                var_15 = (arr_7 [i_1 - 1] [i_1] [i_1 - 1]);
            }
        }
    }
    #pragma endscop
}
