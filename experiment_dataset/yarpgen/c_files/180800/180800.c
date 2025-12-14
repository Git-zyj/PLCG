/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = (min((min((max(var_10, var_6)), ((min(var_0, 0))))), ((min((min(var_13, var_1)), ((min(var_16, 2769237215))))))));
                arr_5 [i_1] = (max(((min(31428, (min(1, 8948))))), (max((min(28, (arr_2 [i_0 - 1]))), (min((arr_0 [i_0]), var_12))))));
                arr_6 [12] [i_1] [i_1] = (max((max((max(var_1, 227)), ((min(31428, (arr_1 [1])))))), (max(((min((arr_4 [i_0 + 1] [i_0 + 1] [i_0]), (arr_3 [1] [i_1 + 2] [i_1])))), (max((arr_0 [i_1]), var_9))))));
                var_18 = (min((max(((min(18, var_14))), (max(-31429, (arr_2 [1]))))), ((min((max((arr_3 [i_0] [i_0] [11]), var_5)), ((max(1, (arr_4 [i_0] [8] [12])))))))));
            }
        }
    }
    var_19 = (min(((min(((max(var_14, var_7))), (max(var_4, -2001955031))))), (max(((min(84, var_16))), (max(25165824, var_6))))));
    #pragma endscop
}
