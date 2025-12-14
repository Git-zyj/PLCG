/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((min((((var_10 ? ((max(31350, 234))) : var_7))), (min((~81881421), ((min(var_2, var_4))))))))));
    var_15 -= 22;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_16 = ((-(max((max(983040, 1)), (arr_4 [i_0])))));
                var_17 = ((((((max((arr_2 [i_0] [15] [i_1]), (arr_3 [i_0]))) + (((max(145, (arr_3 [i_0])))))))) > (max((arr_0 [i_0 + 2]), 21))));
            }
        }
    }
    #pragma endscop
}
