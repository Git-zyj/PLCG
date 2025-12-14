/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((min(65535, 156)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    var_21 = (((((~((max(var_13, 1)))))) ? ((~((var_19 ? var_5 : var_0)))) : (min((~var_2), (~var_4)))));
                    var_22 = (((((-var_18 ? var_2 : ((var_10 ? var_7 : 0))))) ? (((-((1 ? 1 : (arr_8 [i_2 + 1])))))) : ((-((var_15 ? (arr_5 [i_0]) : var_14))))));
                }
            }
        }
    }
    #pragma endscop
}
