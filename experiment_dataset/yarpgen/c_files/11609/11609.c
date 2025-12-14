/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((min((min(var_19, 207)), (min(var_5, 39)))), ((max((max(var_15, 207)), ((min(var_18, var_12))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_21 = (max((max((max(8115, var_8)), ((max((arr_0 [i_1]), 65517))))), ((max((max((arr_2 [i_0] [i_0] [i_0]), (arr_1 [2]))), (min((arr_2 [i_1] [1] [10]), 40376)))))));
                arr_4 [i_0] [2] = (max((min(((max(1, (arr_3 [11] [1])))), (max(var_5, var_19)))), (min(((min((arr_2 [i_0] [3] [i_0 - 2]), (arr_0 [i_0])))), (max(var_9, var_13))))));
                arr_5 [i_0] = (max(((max((max((arr_1 [i_1]), (arr_3 [i_0] [i_1]))), ((min(var_3, 57431)))))), (max((max(57414, var_1)), (max(6091, (arr_2 [i_1] [6] [6])))))));
                var_22 = (max(var_22, ((min((min((max((arr_3 [3] [i_1]), var_9)), (max(var_6, (arr_1 [i_0]))))), ((max((max((arr_3 [i_1 - 1] [i_1 - 1]), (arr_2 [i_0] [i_0] [i_0]))), ((max(59435, var_3)))))))))));
            }
        }
    }
    var_23 = (min((max((max(var_18, var_6)), ((min(var_11, var_12))))), (min((max(var_9, 19702)), ((max(var_2, 2294148289)))))));
    #pragma endscop
}
