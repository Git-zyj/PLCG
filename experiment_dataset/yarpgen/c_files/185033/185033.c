/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (~76)));
    var_18 = (min(var_18, -var_6));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_19 = -var_6;
                arr_7 [i_0] = ((((max((var_0 || var_0), ((38018 ? 9934002868411437900 : 110))))) && (((~((max(var_8, var_11))))))));
                var_20 = ((~(((((var_12 ? (arr_6 [i_1] [i_1] [i_0 - 1]) : var_9))) ? (((23173 ? (arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : 65513))) : var_9))));
            }
        }
    }
    #pragma endscop
}
