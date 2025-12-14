/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = (min((min(((min((arr_0 [i_0]), var_6))), (min((arr_3 [i_0]), var_9)))), ((min((min((arr_0 [i_1]), var_4)), (min(211, 30168)))))));
                var_13 = min((min((min((arr_2 [i_0]), var_4)), ((min(var_5, 0))))), ((min((min(22477, 26100)), ((min(var_10, (arr_0 [i_1]))))))));
                arr_5 [i_0] [i_0] [i_1] &= (min(207, 5600682960940949187));
                arr_6 [i_0] |= (min((min((min(4088, (arr_1 [i_0] [i_1]))), (min(190, 35184372088831)))), (min((min(899253127443482097, var_7)), ((min(-1, -15252)))))));
            }
        }
    }
    var_14 = (max(var_14, ((min((min(((min(52913, var_3))), (min(127, -5600682960940949187)))), (min(((min(var_7, var_3))), (min(5600682960940949187, var_7)))))))));
    var_15 = (max(var_15, ((min((min(((min(var_5, var_4))), (min(var_2, 4294967295)))), ((min(((min((-32767 - 1), var_2))), (min((-32767 - 1), 2040))))))))));
    #pragma endscop
}
