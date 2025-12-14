/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((max(0, 234)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] = arr_2 [i_0] [i_1 + 1] [i_0];
                var_15 = (min((-7374 & var_5), (-var_11 > 16251770292195426183)));
                arr_5 [i_0] [i_0] [i_0] = ((((~(arr_2 [i_0] [i_1 - 1] [i_0])))) ? (arr_0 [i_0] [i_1 - 1]) : (((~(arr_0 [i_0] [i_1 - 1])))));
            }
        }
    }
    var_16 *= var_1;
    #pragma endscop
}
