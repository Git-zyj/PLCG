/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, -7880));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [1] [i_1] = var_3;
                var_13 -= ((((max(var_8, -8761))) < (min((((!(arr_2 [i_0] [18])))), (((arr_2 [i_0] [i_1]) >> (9223372036854775807 - 9223372036854775762)))))));
            }
        }
    }
    #pragma endscop
}
