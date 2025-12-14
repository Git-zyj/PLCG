/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (min((min((min(-2535047998696210372, var_3)), (max(var_13, var_3)))), ((min((min(47958848, var_2)), (max(16, var_3)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (min(((min((max(var_4, var_15)), ((max((arr_1 [i_0]), (arr_4 [2] [5] [i_0]))))))), (min(((max(4247008446, (arr_2 [i_0] [11])))), (min((arr_3 [i_0] [0]), 4247008447))))))));
                var_18 = (max(var_18, ((min(((min((max(var_3, 4247008446)), ((min(var_9, (arr_0 [i_0] [i_1]))))))), (max((min((arr_4 [i_0] [i_0] [i_1]), var_13)), ((min((arr_1 [i_0]), (arr_1 [0])))))))))));
                var_19 = (max((min(((min((arr_2 [0] [i_1]), (arr_2 [i_0] [i_0])))), (min(65518, var_11)))), (min((max((arr_3 [i_0] [17]), -8014684956836696177)), ((min(var_4, (arr_4 [i_0] [i_0] [i_1]))))))));
                var_20 = (min(((min(((min(3507181391, var_4))), (min(var_2, 4549708264310084577))))), (min(((min((arr_0 [i_0] [i_0]), (arr_4 [18] [i_0] [i_0])))), (max((arr_1 [i_0]), 9598766033241116066))))));
                var_21 = (min((min(((max(var_6, (arr_2 [i_0] [i_1])))), (max(var_2, 9223372036854775807)))), (min(-1200, (min(-7015929452995694988, 3507181361))))));
            }
        }
    }
    var_22 = (max(var_22, ((min(((min((min(var_9, var_7)), (max(var_12, var_2))))), (max((min(var_7, var_15)), (min(var_15, var_15)))))))));
    #pragma endscop
}
