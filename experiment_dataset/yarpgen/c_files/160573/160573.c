/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((max(var_16, var_13))));
    var_18 = (min(var_18, ((((((((var_16 ? var_9 : var_8)) | (var_3 | var_8)))) ? ((var_13 >> (-11531 - 53983))) : ((((var_3 ? var_2 : var_13)))))))));
    var_19 = ((max((var_2 && 0), -2102896327)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 &= (min((min(29799, 402653184)), 3892314111));
                arr_5 [i_0] [i_1] [i_0] = ((((402653175 < 16) % ((67108856 ? var_13 : var_6)))));
            }
        }
    }
    var_21 = (min(var_21, 21));
    #pragma endscop
}
