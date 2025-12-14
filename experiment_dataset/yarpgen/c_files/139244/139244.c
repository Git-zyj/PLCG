/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((max(var_4, var_3))) != (max((min(-1216611483, (-9223372036854775807 - 1))), (65531 / -92)))));
    var_12 = (((((var_6 * var_1) - (var_0 / var_7))) / (min(-var_9, -var_6))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 += (max(((!((min(1, -1421))))), (((-9223372036854775805 || 4717261038895514597) || (arr_5 [i_1 + 1])))));
                    var_14 = ((~(max(var_6, (arr_7 [1] [i_1 - 2] [i_1 + 1])))));
                }
            }
        }
    }
    var_15 *= (6390751114570754152 >= 5);
    #pragma endscop
}
