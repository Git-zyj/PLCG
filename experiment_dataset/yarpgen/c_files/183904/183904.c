/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_14 = (min((arr_7 [i_0 + 1] [i_1] [i_1]), (arr_7 [i_0 + 1] [i_2] [i_2 - 3])));
                    arr_8 [i_0] [i_2] [i_0 - 1] [i_0] = var_4;
                    var_15 = ((((((max(var_2, 0))) + (((arr_1 [4] [4]) - 1)))) - (((arr_3 [i_0]) + ((max((arr_7 [i_2 - 2] [9] [9]), var_12)))))));
                    var_16 = ((!(((-(arr_6 [i_2 - 3] [i_2 - 2] [8] [i_0 - 1]))))));
                    arr_9 [i_0] [i_0] [i_1] [i_2 + 1] = (max((((var_11 ? 8989607068696576 : 65535))), var_1));
                }
            }
        }
    }
    var_17 = (min(var_12, ((((!var_12) || (var_12 + var_3))))));
    var_18 = var_5;
    #pragma endscop
}
