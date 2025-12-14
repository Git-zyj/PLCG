/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((max((max(var_5, var_9)), ((max(var_3, var_6))))), (max(((max(-76, 66))), (max(var_4, 2))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (max(((max(((max((arr_0 [i_1] [i_0]), (arr_1 [i_0])))), (max(-29244, 0))))), (max(((max(127, var_1))), (max((arr_4 [i_0]), var_3))))));
                arr_7 [i_0] [i_0] = (max(((max(((max(-29244, (arr_0 [i_0] [i_0])))), (max(var_4, var_3))))), (max(((max((arr_5 [i_0]), 127))), (max(65535, var_7))))));
                var_11 = (max((max((max(-29244, var_9)), ((max(var_8, (arr_2 [i_1])))))), ((max((max((arr_3 [i_0] [i_0]), var_0)), (max((arr_5 [i_1]), (arr_3 [i_0] [i_0]))))))));
                arr_8 [i_0] [i_0] = (max((max(((max((arr_1 [i_1]), var_3))), (max(2147483647, var_2)))), (max(((max((-127 - 1), var_3))), (max((arr_0 [i_0] [i_1]), var_4))))));
            }
        }
    }
    var_12 = (max(((max((max(127, var_5)), (max(var_4, -28))))), (max(((max(var_1, var_8))), (max(var_1, var_9))))));
    var_13 ^= (max((max((max(var_9, var_4)), ((max(var_0, var_8))))), (max((max(var_7, var_9)), ((max(var_4, var_5)))))));
    #pragma endscop
}
