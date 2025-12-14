/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] = var_12;
                arr_5 [i_0 + 2] [i_1] = (max(124, ((-0 + (arr_1 [i_0])))));
                var_17 = ((!(((((min(var_12, -4212900979940953469))) ? ((min((arr_2 [i_1]), (-9223372036854775807 - 1)))) : (arr_0 [20]))))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_8 [i_2] [i_1] [i_0] = ((-(arr_7 [i_0] [i_1] [1])));
                    arr_9 [17] [i_1] &= 4212900979940953469;
                }
            }
        }
    }
    var_18 = var_14;
    #pragma endscop
}
