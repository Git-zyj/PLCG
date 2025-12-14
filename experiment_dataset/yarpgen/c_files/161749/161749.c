/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((max((((var_11 ? var_5 : var_11))), (min(var_0, var_12)))) >= var_7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [17] = ((!(var_5 < var_8)));
                    arr_7 [i_0] = var_11;
                }
            }
        }
    }
    #pragma endscop
}
