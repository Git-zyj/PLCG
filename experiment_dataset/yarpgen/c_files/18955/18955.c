/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~var_7);
    var_19 = (min(var_19, ((max((var_9 < 8090325108589225031), ((~(max(var_9, var_0)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_20 = (((arr_2 [i_2]) >> ((max((min((arr_2 [i_1]), var_3)), var_3)))));
                    var_21 = (max(var_21, (((((max((arr_4 [i_0] [i_1 - 1] [i_0]), (arr_4 [i_2] [i_1 - 1] [i_1])))) ? ((-(arr_4 [i_1] [i_1 - 1] [i_0]))) : ((min((arr_4 [i_1] [i_1 - 1] [i_0]), (arr_4 [i_1] [i_1 - 1] [i_0])))))))));
                    arr_11 [i_2] [i_2] [i_2] = max(8090325108589225052, -1);
                }
            }
        }
    }
    var_22 = ((-(((!((max(var_15, 1))))))));
    #pragma endscop
}
